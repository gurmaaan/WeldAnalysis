#ifndef USBPROCESSOR_H
#define USBPROCESSOR_H

#include <QString>
#include <QList>
#include <QStandardItemModel>

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

    int getAgilentConnection();
    void initCOMList();
    int comDevicesCount();

    QStandardItemModel *getComModel();
    void addRootItem(QStandardItemModel *model, const QString portName);
    QList<COMdevice> getCOMDevicesList();
    QStringList getCOMPortsList();
    ~USBProcessor();

private:
    QList<COMdevice> avalibleCOMlist;
    QStandardItemModel *comModel;
    void printUSBlibList();
};

#endif // USBPROCESSOR_H
