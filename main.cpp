#include "mipcontroller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MipController w;
    w.show();

    return a.exec();
}
