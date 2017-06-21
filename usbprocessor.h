#ifndef USBPROCESSOR_H
#define USBPROCESSOR_H

#include <QString>
#include <QList>
#include <QStandardItemModel>
#include "Ag34401.h"

using namespace std;
class COMdevice
{
private:
    QString stringDescription;
    QString stringPID;
    QString stringVID;
    QString stringPort;
    quint16 numPID;
    quint16 numVID;
public:
    COMdevice(QString portName, quint16 vid, quint16 pid, QString description) {
        stringDescription = description;
        numPID = pid;
        numVID = vid;
        stringVID = QString::number(vid);
        stringPID = QString::number(pid);
        stringPort = portName;
    }
    QString getVID();
    QString getPID();
    QString getPortName();
    QString getDescription();
};

class USBProcessor
{
public:
    USBProcessor(){
        initCOMList();
    }

    void initCOMList();
    int comDevicesCount();

    QStandardItemModel *getComModel();
    void addRootItem(QStandardItemModel *model, const QString portName);
    QList<COMdevice> getCOMDevicesList();
    QStringList getCOMPortsList();

    void setUpDriver();
    double getValueFromDevice();
    void closeConnection();

    ~USBProcessor();

private:
    QList<COMdevice> avalibleCOMlist;
    QStandardItemModel *comModel;
    void printUSBlibList();
    ViStatus status;
    ViSession session;
    ViInt32 ErrorCode;
    ViChar ErrorMessage[255];
    ViBoolean idQuery = VI_FALSE;
    ViBoolean reset   = VI_TRUE;
    ViBoolean AttributeValue;
    ViBoolean AttributeValue1;
    ViReal64 Reading;
    ViInt32 AttributeValue2;
};

#endif // USBPROCESSOR_H
