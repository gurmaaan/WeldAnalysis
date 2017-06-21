#include "usbprocessor.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QStandardItem>
#include <QDebug>
#include <QList>
#include "constants.h"
#include "libusb.h"
#include <Ag34401.h>
#include <QMessageBox>

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

void USBProcessor::setUpDriver()
{
    char resource[] =  "ASRL5::INSTR";
    char options[]  = "QueryInstrStatus=true, Simulate=true, DriverSetup= Model=, Trace=false, TraceName=c:\\temp\\traceOut";
    status = Ag34401_InitWithOptions(resource, idQuery, reset, options, &session);
    if(status)
    {
    // Initialization failed
        Ag34401_GetError(session, &ErrorCode, 255, ErrorMessage);
        QMessageBox msgBox;
        msgBox.setText("Ошибка инициализации драйвера.");
        msgBox.exec();
        return;
    }
    else
       qDebug("Драйвер инициализирован.");
    // Read and output a few attributes
    // Return status checking omitted for example clarity
    ViChar str[128];
    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_SPECIFIC_DRIVER_PREFIX, 127, str);
    //assert(status == VI_SUCCESS);
    printf("DRIVER_PREFIX:      %s\n", str);
    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_SPECIFIC_DRIVER_REVISION, 127, str);
    //assert(status == VI_SUCCESS);
    printf("DRIVER_REVISION:    %s\n", str);
    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_SPECIFIC_DRIVER_VENDOR, 127, str);
    //assert(status == VI_SUCCESS);
    printf("DRIVER_VENDOR:      %s\n", str);
    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_SPECIFIC_DRIVER_DESCRIPTION, 127, str);
    //assert(status == VI_SUCCESS);
    printf("DRIVER_DESCRIPTION: %s\n", str);
    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_INSTRUMENT_MODEL, 127, str);
    //assert(status == VI_SUCCESS);
    printf("INSTRUMENT_MODEL:   %s\n", str);
    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_INSTRUMENT_FIRMWARE_REVISION, 127, str);
    //assert(status == VI_SUCCESS);
    printf("FIRMWARE_REVISION:  %s\n", str);
    ViBoolean simulate;
    status = Ag34401_GetAttributeViBoolean(session, "", AG34401_ATTR_SIMULATE, &simulate);
    //assert(status == VI_SUCCESS);
    if (simulate == VI_TRUE)
        wprintf(L"\nSIMULATE:           True\n\n");
    else
        wprintf(L"SIMULATE:           False\n\n");
}

double USBProcessor::getValueFromDevice()
{
    //  Exercise driver methods and properties
    // Measure DC Voltage
    printf("\n  Measuring DC Voltage\n");
    Ag34401_DCVoltageConfigure(session, -1, 1.0);  // Negative Range = AutoRange with default Resolution
    Ag34401_Read(session, 2000, &Reading); // Measure and read data
    printf("Data: %.15g\n", Reading);

    // Check instrument for errors
    ErrorCode = -1;
    printf("\n");
    while(ErrorCode!=0)
    {
        status = Ag34401_error_query( session, &ErrorCode, ErrorMessage);
       // assert(status == VI_SUCCESS);
        printf("error_query: %d, %s\n", ErrorCode, ErrorMessage);
    }
}

void USBProcessor::closeConnection()
{
    // Close the driver
    status = Ag34401_close(session);
    //assert(status == VI_SUCCESS);
    session = VI_NULL;
    printf("Driver Closed \n");

}
