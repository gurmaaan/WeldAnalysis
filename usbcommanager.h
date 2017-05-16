#ifndef USBCOMMANAGER_H
#define USBCOMMANAGER_H
#include <QtSerialPort/QSerialPort>
#include <QLabel>

class USBComManager
{
public:
    USBComManager();
    QLabel *getStatus(QString status);

private slots:
    void open();
    void close();
    void about();
    void read();
    void handleError(QSerialPort::SerialPortError error);

private:
    QSerialPort *serial;
};

#endif // USBCOMMANAGER_H
