#include "usbprocessor.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QStandardItem>
#include <QDebug>
#include <QList>
#include "constants.h"
#include "libusb.h"

int USBProcessor::getAgilentConnection()
{
    //    ViStatus status;
//    ViSession session;
//    ViChar str[128];
//    ViInt32 ErrorCode;
//    ViChar ErrorMessage[256];
//    ViBoolean simulate;
//    ViReal64 data;

//    // Edit resource and options as needed.  resource is ignored if option Simulate=true
//    char resource[] = "GPIB0::22::INSTR";
//    //char resource[] = "TCPIP0::<ip or host name>::INSTR";

//    char options[]  = "QueryInstrStatus=true, Simulate=true, DriverSetup= Model=, Trace=false, TraceName=c:\\temp\\traceOut";

//    ViBoolean idQuery = VI_TRUE;
//    ViBoolean reset   = VI_TRUE;

//    qDebug() << "ViDriver initial start" << endl;
//    qInfo("Info");
//    qCritical("Critical");
//    qFatal("Fatal");


//    //Initialize the driver.  See driver help topic "Initializing the IVI-C Driver" for additional information
//    status = Ag34401_InitWithOptions(resource, idQuery, reset, options, &session);
//    if(status)
//    {
//        // Initialization failed
//        Ag34401_GetError(session, &ErrorCode, 255, ErrorMessage);
//        qDebug () << "** InitWithOptions() Error: "<<  ErrorCode <<  ErrorMessage;
//        qDebug () << "Done - Press Enter to Exit";
//        getchar();
//        return ErrorCode;
//    }
//    assert(session != VI_NULL);
//    printf("Driver Initialized \n");

//    // Read and output a few attributes
//    // Return status checking omitted for example clarity
//    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_SPECIFIC_DRIVER_PREFIX, 127, str);
//    assert(status == VI_SUCCESS);
//    printf("DRIVER_PREFIX:      %s\n", str);

//    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_SPECIFIC_DRIVER_REVISION, 127, str);
//    assert(status == VI_SUCCESS);
//    printf("DRIVER_REVISION:    %s\n", str);

//    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_SPECIFIC_DRIVER_VENDOR, 127, str);
//    assert(status == VI_SUCCESS);
//    printf("DRIVER_VENDOR:      %s\n", str);

//    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_SPECIFIC_DRIVER_DESCRIPTION, 127, str);
//    assert(status == VI_SUCCESS);
//    printf("DRIVER_DESCRIPTION: %s\n", str);

//    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_INSTRUMENT_MODEL, 127, str);
//    assert(status == VI_SUCCESS);
//    printf("INSTRUMENT_MODEL:   %s\n", str);

//    status = Ag34401_GetAttributeViString(session, "", AG34401_ATTR_INSTRUMENT_FIRMWARE_REVISION, 127, str);
//    assert(status == VI_SUCCESS);
//    printf("FIRMWARE_REVISION:  %s\n", str);

//    status = Ag34401_GetAttributeViBoolean(session, "", AG34401_ATTR_SIMULATE, &simulate);
//    assert(status == VI_SUCCESS);
//    if (simulate == VI_TRUE)
//        wprintf(L"\nSIMULATE:           True\n\n");
//    else
//        wprintf(L"SIMULATE:           False\n\n");


//    //  Exercise driver methods and properties
//    // Measure DC Voltage
//    printf("\n  Measuring DC Voltage\n");
//    Ag34401_DCVoltageConfigure(session, -1, 1.0);  // Negative Range = AutoRange with default Resolution
//    Ag34401_Read(session, 2000, &data); // Measure and read data
//    printf("Data: %.15g\n", data);

//    // Check instrument for errors
//    ErrorCode = -1;
//    printf("\n");
//    while(ErrorCode!=0)
//    {
//        status = Ag34401_error_query( session, &ErrorCode, ErrorMessage);
//        assert(status == VI_SUCCESS);
//        printf("error_query: %d, %s\n", ErrorCode, ErrorMessage);
//    }

    // Close the driver
//    status = Ag34401_close(session);
//    Q_ASSERT( status == VI_SUCCESS );
//    session = VI_NULL;
//    qDebug () <<  "Driver Closed";

//    qDebug () << "Done - Press Enter to Exit";
    //    getchar();
}

void USBProcessor::printUSBlibList()
{
    qDebug() << "------------------------usblib------------------------" << endl;
    libusb_device **devices;
    libusb_context *contex = NULL;
    int returnValue = 0;
    size_t count;

    returnValue = libusb_init(&contex);
    if (returnValue < 0 ) {
       qDebug() << "Error";
    }

    libusb_set_debug(contex, 3);
    count = libusb_get_device_list(contex, &devices);
    if ( (int) count < 0) {
        qDebug() << "Error device";
    }
    qDebug() << "Amount of devices: " << QString::number((int)count) << endl;

    size_t i;
    for (i = 0; i < count; i++)
    {

        libusb_device_descriptor descriptor;
        libusb_device *dev = devices[i];
        int r = libusb_get_device_descriptor(dev, &descriptor);
        if (r < 0 ) {
            qDebug() << "Fail to get Device description";
        }
        else
        {
            qDebug() << "Number of possible configurations: " << QString::number( (int)descriptor.bNumConfigurations );
            qDebug() << "Device Class: " << QString::number((int) descriptor.bDeviceClass );
            qDebug() << "VendorID: " << QString::number(descriptor.idVendor );
            qDebug() << "ProductID: "<< QString::number(descriptor.idProduct);

            libusb_config_descriptor *config = new libusb_config_descriptor();
            libusb_get_config_descriptor(dev, 0, &config);
            qDebug() << "\tInterfaces: "<< QString::number( (int)config->bNumInterfaces );

            const libusb_interface *inter;
            const libusb_interface_descriptor *interdesc;
            const libusb_endpoint_descriptor *epdesc;

            for(int it = 0 ;  it < (int)config->bNumInterfaces; it++)
            {
                inter = &config->interface[it];

                qDebug() << "\t\tNumber of alternate settings: " << QString::number(inter->num_altsetting);

                for(int j = 0; j < inter->num_altsetting; j++)
                {
                    interdesc = &inter->altsetting[j];
                    qDebug() << "\t\t\tInterface Number: "<< QString::number( (int)interdesc->bInterfaceNumber );
                    qDebug() << "\t\t\tNumber of endpoints: " << QString::number( (int)interdesc->bNumEndpoints );

                    for(int k = 0; k < (int)interdesc->bNumEndpoints; k++)
                    {
                        epdesc = &interdesc->endpoint[k];
                        qDebug() << "\t\t\t\tDescriptor Type: " << QString::number( (int)epdesc->bDescriptorType );
                        qDebug() << "\t\t\t\tEP Address: " << QString::number( (int)epdesc->bEndpointAddress );
                    }
                }
            }

            libusb_free_config_descriptor(config);
        }
        qDebug() << "**********";
    }

    libusb_free_device_list(devices, 1);
    libusb_exit(contex);
    qDebug() << "------------------------------------------------------------------------------" << endl << endl;
}

COMdevice::COMdevice(QString portName, quint16 vid, quint16 pid, QString description) {
    stringDescription = description;
    numPID = pid;
    numVID = vid;
    stringVID = QString::number(vid);
    stringPID = QString::number(pid);
    stringPort = portName;
}

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

QList<COMPort> USBProcessor::getCOMPortsList()
{
    QList<COMPort> portNameList;
    foreach (COMdevice device, avalibleCOMlist) {
        QString portName(device.getPortName());
        qDebug() << portName;
        portNameList.append(portName);
    }
    return portNameList;
}
