#include "mainwindow.h"
#include <QApplication>

#include <QDebug>

#include "usbmanager.hpp"

int main(int argc, char *argv[])
{
//    qDebug() << USBManager::getDevicesList();
//    qDebug() << USBManager::autoSearch();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
