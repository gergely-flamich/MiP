#ifndef MIPCONTROLLER_H
#define MIPCONTROLLER_H

#include <QMainWindow>
#include <QBluetoothServiceDiscoveryAgent>
#include <QLowEnergyController>
#include <QKeyEvent>

namespace Ui {

class MipController;
}

class MipController : public QMainWindow
{
    Q_OBJECT
enum MIP_COMM_DIRECTION{
    MIP = 0, COMPUTER
};

public:
    explicit MipController(QWidget *parent = 0);
    ~MipController();
public slots:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

    void startBluetooth();
    void deviceDiscovered(const QBluetoothDeviceInfo &info);
    void BTErrorReceived(QBluetoothDeviceDiscoveryAgent::Error error);
    void BTScanFinished();
    void deviceSelected(int index);
    void connectionFlip();
    void newServiceDiscovered(QBluetoothUuid uuid);
    void serviceScanFinished();
    void connectedBLE();
    void disconnectedBLE();
    void errorBLE(QLowEnergyController::Error error);
    void receiverStateChanged(QLowEnergyService::ServiceState serviceState);
    void senderStateChanged(QLowEnergyService::ServiceState serviceState);
    void BLECharChanged(QLowEnergyCharacteristic characteristic, QByteArray array);
    void sendHexMsg(QByteArray command);

    void moveMip();
    void moveStop();
protected:
    void recordLog( QString logger, QString log );
    void recordComms( QString sender, QString msg);


private:
    //Flags
    bool isConnected;
    bool isWriteable;
    bool verbose;

    //Movement bytes

    uchar mipSpeed;
    uchar mipTurn;

    int keysPressed;

    Ui::MipController *ui;
    QBluetoothDeviceDiscoveryAgent *discoveryAgent;
    QLowEnergyController *lowEnergyController;

    QBluetoothUuid *recUuid, *sendUuid, *notifyCUuid, *writeCUuid;
    QLowEnergyService *receiverBLEService, *senderBLEService;

    QList<QBluetoothDeviceInfo> devices;

    QTimer *mainTimer;

};

#endif // MIPCONTROLLER_H
