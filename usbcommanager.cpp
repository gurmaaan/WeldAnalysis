#include "usbcommanager.h"
#include <QtSerialPort/QSerialPort>

USBComManager::USBComManager()
{
    //serial = new QSerialPort(this);

//    connect(serial, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error),
//            this, &USBComManager::handleError);

//    connect(serial, &QSerialPort::readyRead, this, &USBComManager::read);
}

void USBComManager::handleError(QSerialPort::SerialPortError error)
{

}
