#include "usbprocessor.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QStandardItem>
#include <QDebug>
#include <QList>
#include "constants.h"
#include "libusb.h"
#include "Ag34401.h"

QString COMdevice::getVID()
{
    return stringVID;
}

QString COMdevice::getPID()
{
    return stringPID;
}

QString COMdevice::getPortName()
{
    return stringPort;
}

QString COMdevice::getDescription()
{
    return stringDescription;
}

void USBProcessor::initCOMList()
{
    auto infoList = QSerialPortInfo::availablePorts();

    for (const QSerialPortInfo &info : infoList) {
        COMdevice device(info.portName(), info.vendorIdentifier(), info.productIdentifier(), info.description());
        avalibleCOMlist.append(device);
    }
}

int USBProcessor::comDevicesCount()
{
    return avalibleCOMlist.size();
}

QStandardItemModel *USBProcessor::getComModel()
{
    foreach (COMdevice port, avalibleCOMlist) {
        addRootItem(comModel, port.getPortName());
    }
}

void USBProcessor::addRootItem(QStandardItemModel *model, const QString portName)
{
    QStandardItem* item = new QStandardItem(portName);
}

QList<COMdevice> USBProcessor::getCOMDevicesList()
{
    return avalibleCOMlist;
}

QStringList USBProcessor::getCOMPortsList()
{
    QStringList portNameList;
    foreach (COMdevice device, avalibleCOMlist) {
        QString portName(device.getPortName());
        portNameList.append(portName);
    }
    return portNameList;
}
