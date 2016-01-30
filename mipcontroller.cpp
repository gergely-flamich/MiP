#include "mipcontroller.h"
#include "ui_mipcontroller.h"
#include <QBluetoothLocalDevice>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QLowEnergyController>
#include <thread>
#include <chrono>
#include <QTimer>

//===============================================================================
// Constructor & Destructor
//===============================================================================

MipController::MipController(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MipController)
{
    ui->setupUi(this);
    discoveryAgent = new QBluetoothDeviceDiscoveryAgent(this);

    isConnected = false;
    isWriteable = false;

    verbose = false;

    //set control bytes

    mipSpeed = 0x00;
    mipTurn = 0x00;

    keysPressed = 0;

    //Evil retarded hex UUIDs
    //0000ffe0-0000-1000-8000-00805f9b34fb
    QUuid quuidRec(0x0000FFE0, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB);

    //0000ffe5-0000-1000-8000-00805f9b34fb
    QUuid quuidSend(0x0000FFE5, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB);

    QUuid quuidCNotify(0x0000FFE4, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB);
    QUuid quuidCWrite(0x0000FFE9, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB);

    recUuid = new QBluetoothUuid(quuidRec);
    sendUuid = new QBluetoothUuid(quuidSend);

    notifyCUuid = new QBluetoothUuid(quuidCNotify);
    writeCUuid = new QBluetoothUuid(quuidCWrite);

    mainTimer = new QTimer( this );
    mainTimer->setInterval(20);
    connect(mainTimer, SIGNAL(timeout()), this, SLOT(moveMip()));

    //connect UI to this
    connect(ui->deviceListWidget, SIGNAL(currentRowChanged(int)), this, SLOT(deviceSelected(int)));
    connect(ui->connectButton, SIGNAL(clicked()), this, SLOT(connectionFlip()));

    //connect BT stuff
    connect(discoveryAgent, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)), this, SLOT(deviceDiscovered(QBluetoothDeviceInfo)));
    connect(discoveryAgent, SIGNAL(error(QBluetoothDeviceDiscoveryAgent::Error)), this, SLOT(BTErrorReceived(QBluetoothDeviceDiscoveryAgent::Error)));
    connect(discoveryAgent, SIGNAL(finished()), this, SLOT(BTScanFinished()));

    //connect UI to BT
    connect(ui->startBTScanButton, SIGNAL(clicked()), this, SLOT(startBluetooth()));

    ui->BTTabSystem->setCurrentIndex(0);
}

MipController::~MipController()
{
    if(isConnected)
        lowEnergyController->disconnectFromDevice();

    delete lowEnergyController;
    delete ui;
}

//===============================================================================
// Public slots
//===============================================================================

void MipController::startBluetooth(){

    if(!discoveryAgent->isActive()){

        QBluetoothLocalDevice localDevice;
        QString devicename;

        if(localDevice.isValid()){

            //Clean up
            devices.clear();
            ui->deviceListWidget->clear();

            //Set button stuff
            ui->startBTScanButton->setEnabled( false );
            ui->startBTScanButton->setText("Scanning...");

            //Turn BT on
            localDevice.powerOn();

            devicename = localDevice.name();

            recordLog("startBluetooth", devicename);

            discoveryAgent->start();
            recordLog("startBluetooth", "BT Scan started.");
        }
        else{
            recordLog("startBluetooth", "No BT interface found!");
        }
    }
}

void MipController::deviceDiscovered(const QBluetoothDeviceInfo &info){

    //Only accept low energy devices
    if(info.coreConfigurations() &QBluetoothDeviceInfo::LowEnergyCoreConfiguration){
        devices.push_back(info);

        QString listItem = info.name();
        listItem += " -> ";
        listItem += info.address().toString();

        ui->deviceListWidget->addItem(listItem);

        QString data ="Low energy device discovered: ";
        data +=info.name();
        data+=" Address: ";
        data+=info.address().toString();
        data += "; UUID -> ";
        data += info.deviceUuid().toString();

        recordLog("deviceDiscovered", data);
    }
    else{
        recordLog("deviceDiscovered", "Non-BLE device discarded!");
    }


}

void MipController::BTErrorReceived(QBluetoothDeviceDiscoveryAgent::Error error){
    QString errorMsg = "Error: ";
    errorMsg += discoveryAgent->errorString();
    recordLog("BTErrorReceived", errorMsg);

    if(!ui->startBTScanButton->isEnabled()){
        ui->startBTScanButton->setText( "Start Scan" );
        ui->startBTScanButton->setEnabled( true );
    }
}

void MipController::BTScanFinished(){

    ui->startBTScanButton->setEnabled( true );
    ui->startBTScanButton->setText("Start Scan");
    recordLog("BTScanFinished", "Bluetooth scan finished!");
}

void MipController::deviceSelected(int index){
    ui->connectButton->setEnabled( true );
}

void MipController::connectionFlip(){
    if(!isConnected){
        ui->connectButton->setEnabled( false );
        ui->connectButton->setText("Connecting...");

        lowEnergyController = new QLowEnergyController( devices.at(ui->deviceListWidget->currentRow()).address(), this );

        //connecting controller functionalities
        connect(lowEnergyController, SIGNAL(serviceDiscovered(QBluetoothUuid)), this, SLOT(newServiceDiscovered(QBluetoothUuid)));
        connect(lowEnergyController, SIGNAL(discoveryFinished()), this, SLOT(serviceScanFinished()));
        connect(lowEnergyController, SIGNAL(connected()), this, SLOT(connectedBLE()));
        connect(lowEnergyController, SIGNAL(disconnected()), this, SLOT(disconnectedBLE()));
        connect(lowEnergyController, SIGNAL(error(QLowEnergyController::Error)), this, SLOT(errorBLE(QLowEnergyController::Error)));

        lowEnergyController->connectToDevice();

    }
    else{
        lowEnergyController->disconnectFromDevice();
        delete lowEnergyController;
    }
}

void MipController::newServiceDiscovered(QBluetoothUuid uuid){
    if(verbose){
        QString msg = "New service: uuid: ";
        msg+=uuid.toString();
        msg+=" ";
        recordLog("newServiceDiscovered", msg);
    }
}

void MipController::serviceScanFinished(){
    recordLog("serviceScanFinished", "Service Scan Finished!");

    receiverBLEService = lowEnergyController->createServiceObject( *recUuid, this );
    senderBLEService = lowEnergyController->createServiceObject( *sendUuid, this);

    if(!receiverBLEService)
        recordLog("serviceScanFinished", "receiver is fucked");
    if(!senderBLEService)
        recordLog("serviceScanFinished", "sender is fucked");

    connect(receiverBLEService, SIGNAL(stateChanged(QLowEnergyService::ServiceState)), this, SLOT(receiverStateChanged(QLowEnergyService::ServiceState)));
    connect(senderBLEService, SIGNAL(stateChanged(QLowEnergyService::ServiceState)), this, SLOT(senderStateChanged(QLowEnergyService::ServiceState)));

    receiverBLEService->discoverDetails();
    senderBLEService->discoverDetails();
}

void MipController::connectedBLE(){
    QString msg = "Connected to BLE: ";
    msg += lowEnergyController->remoteName();
    msg += " -> ";
    msg += lowEnergyController->remoteAddress().toString();
    recordLog("connectedBLE", msg);

    //Start service discovery
    lowEnergyController->discoverServices();

    ui->connectButton->setEnabled( true );
    ui->connectButton->setText( "Disconnect" );

    ui->commsPanel->setEnabled( true );

    isConnected = true;
}

void MipController::disconnectedBLE(){
    QString msg = "Disconnected from BLE";

    recordLog("connectedBLE", msg);

    ui->commsPanel->setEnabled( false );

    ui->connectButton->setEnabled( true );
    ui->connectButton->setText("Connect");

    isConnected = false;
    isWriteable = false;
}

void MipController::errorBLE(QLowEnergyController::Error error){
    recordLog("errorBLE", lowEnergyController->errorString());

    if(!ui->connectButton->isEnabled()){
        ui->connectButton->setEnabled( true );
        ui->connectButton->setText( "Connect" );
    }

}

void MipController::receiverStateChanged(QLowEnergyService::ServiceState serviceState){
    switch(serviceState){
    //No more discovery needed
    case QLowEnergyService::ServiceDiscovered:

        recordLog("receiverStateChanged", "Characteristic discovery finished for receiver!");

        int i;

        for(i = 0; i < receiverBLEService->characteristics().size(); i++){
            const QLowEnergyCharacteristic lec = receiverBLEService->characteristics().value(i);
            QString log = "receiverBLEService->";
            log+=lec.name();
            log+="; uuid: ";
            log+= lec.uuid().toString();
            log+="; value: ";
            log+= lec.value();

            recordLog("receiverStateChanged", log );
        }

        const QLowEnergyCharacteristic mipNotifier = receiverBLEService->characteristic( *notifyCUuid );

        if(!mipNotifier.isValid()){
            recordLog("receiverStateChanged", "notifier was cocked up");
        }

        QLowEnergyDescriptor notification = mipNotifier.descriptor(QBluetoothUuid::ClientCharacteristicConfiguration);
        if(!notification.isValid()){
            recordLog("receiverStateChanged", "notifier desc was cocked up");
        }

        connect(receiverBLEService, SIGNAL(characteristicChanged(QLowEnergyCharacteristic,QByteArray)), this, SLOT(BLECharChanged(QLowEnergyCharacteristic,QByteArray)));

        //enable notification

        receiverBLEService->writeDescriptor(notification, QByteArray::fromHex("0100"));

        recordLog("receiverStateChanged", "NOTIFY characteristic enabled from receiver!");
        break;
    }
}

void MipController::senderStateChanged(QLowEnergyService::ServiceState serviceState){
    switch(serviceState){
    //No more discovery needed
    case QLowEnergyService::ServiceDiscovered:

        recordLog("senderStateChanged", "Characteristic discovery finished for sender!");

        int i;

        for(i = 0; i < senderBLEService->characteristics().size(); i++){
            const QLowEnergyCharacteristic lec = senderBLEService->characteristics().value(i);
            QString log = "senderBLEService->";
            log+=lec.name();
            log+="; uuid: ";
            log+= lec.uuid().toString();
            log+="; value: ";
            log+= lec.value();

            recordLog("senderStateChanged", log );
        }

        const QLowEnergyCharacteristic mipWriter = senderBLEService->characteristic( *writeCUuid );

        if(!mipWriter.isValid()){
            recordLog("senderStateChanged", "writer was cocked up");
        }

        /*QLowEnergyDescriptor sendChar = mipWriter.descriptor(QBluetoothUuid::ClientCharacteristicConfiguration);
        if(!sendChar.isValid()){
            recordLog("BLEStateChanged", "writer desc was cocked up");
        }
        */

        isWriteable = true;
        break;
    }
}

void MipController::BLECharChanged(QLowEnergyCharacteristic characteristic, QByteArray array){
    QString msg = "Changed: ";
    msg += characteristic.name();
    msg += " message: ";
    msg += array;
    recordLog("BLECharChanged", msg);

    recordComms("MiP", QString(array));
}

void MipController::sendHexMsg(QByteArray command){
    if(isWriteable){
        const QLowEnergyCharacteristic writeChar = senderBLEService->characteristic( *writeCUuid );

        //Send commands
        senderBLEService->writeCharacteristic(writeChar, command, QLowEnergyService::WriteWithoutResponse);
    }
    else{
        recordLog("sendHexMsg", "Cant write yet");
    }
}

void MipController::keyPressEvent(QKeyEvent *event){
    if(isWriteable){

        QString msg = "You pressed: " + event->text();

        recordLog("keyPressEvent", msg);

        if(event->text() == "w"){
            mipSpeed = 0x10;

        }
        else if(event->text() == "s"){
            mipSpeed = 0x30;
        }
        else if(event->text() == "a"){
            mipTurn = 0x70;
        }
        else if(event->text() == "d"){
            mipTurn = 0x50;
        }
        else if(event->text() == "k"){
            QByteArray ba;
            ba.resize(1);
            ba[0] = 0x08;
            ba[1] = 0x00; //Backwards death

            sendHexMsg(ba);
        }
        else if(event->text() == "l"){
            QByteArray ba;
            ba.resize(1);
            ba[0] = 0x08;
            ba[1] = 0x01;   //Forwards death

            sendHexMsg(ba);
        }


        if(!mainTimer->isActive())
            mainTimer->start();
    }
}

void MipController::keyReleaseEvent(QKeyEvent *event){
    if(isWriteable){

        QString msg = "You released: " + event->text();

        recordLog("keyReleaseEvent", msg);

        if(event->text() == "w"){
            mipSpeed = 0x00;

        }
        else if(event->text() == "s"){
            mipSpeed = 0x00;
        }
        else if(event->text() == "a"){
            mipTurn = 0x00;
        }
        else if(event->text() == "d"){
            mipTurn = 0x00;
        }

    }
}

//===============================================================================
// Protected
//===============================================================================

void MipController::recordLog(QString logger, QString log){
    QString line = "log> ";
    line += logger.trimmed();
    line += ": ";
    line += log.trimmed();
    line += "";

    ui->statusLog->append( line );
}

void MipController::recordComms(QString sender, QString msg){
    QString line = sender;
    line+= ">";
    line += msg;

    ui->commsLog->append( line );
}


void MipController::moveMip(){
    QByteArray fwdCmd;
    fwdCmd.resize(2);
    fwdCmd[0] = 0x78;
    fwdCmd[1] = mipSpeed;
    fwdCmd[2] = mipTurn;


    sendHexMsg(fwdCmd);
}

void MipController::moveStop(){
    QByteArray stopCmd;
    stopCmd.resize(0);
    stopCmd[0] = 0x77;
}
