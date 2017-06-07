#include "mainwindow.h"
#include <QApplication>

//#include <QDebug>
//#include "usbmanager.hpp"

int main(int argc, char *argv[])
{
//    qDebug() << USBManager::getDevicesList();
//    qDebug() << USBManager::autoSearch();


    QApplication a(argc, argv);
    a.setApplicationName("WeldAnalysis"); //Имя папка в AppData
    MainWindow w;
    w.show();

    return a.exec();
}
