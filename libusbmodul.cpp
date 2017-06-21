//void USBProcessor::printUSBlibList()
//{
//    qDebug() << "------------------------usblib------------------------" << endl;
//    libusb_device **devices;
//    libusb_context *contex = NULL;
//    int returnValue = 0;
//    size_t count;

//    returnValue = libusb_init(&contex);
//    if (returnValue < 0 ) {
//       qDebug() << "Error";
//    }

//    libusb_set_debug(contex, 3);
//    count = libusb_get_device_list(contex, &devices);
//    if ( (int) count < 0) {
//        qDebug() << "Error device";
//    }
//    qDebug() << "Amount of devices: " << QString::number((int)count) << endl;

//    size_t i;
//    for (i = 0; i < count; i++)
//    {

//        libusb_device_descriptor descriptor;
//        libusb_device *dev = devices[i];
//        int r = libusb_get_device_descriptor(dev, &descriptor);
//        if (r < 0 ) {
//            qDebug() << "Fail to get Device description";
//        }
//        else
//        {
//            qDebug() << "Number of possible configurations: " << QString::number( (int)descriptor.bNumConfigurations );
//            qDebug() << "Device Class: " << QString::number((int) descriptor.bDeviceClass );
//            qDebug() << "VendorID: " << QString::number(descriptor.idVendor );
//            qDebug() << "ProductID: "<< QString::number(descriptor.idProduct);

//            libusb_config_descriptor *config = new libusb_config_descriptor();
//            libusb_get_config_descriptor(dev, 0, &config);
//            qDebug() << "\tInterfaces: "<< QString::number( (int)config->bNumInterfaces );

//            const libusb_interface *inter;
//            const libusb_interface_descriptor *interdesc;
//            const libusb_endpoint_descriptor *epdesc;

//            for(int it = 0 ;  it < (int)config->bNumInterfaces; it++)
//            {
//                inter = &config->interface[it];

//                qDebug() << "\t\tNumber of alternate settings: " << QString::number(inter->num_altsetting);

//                for(int j = 0; j < inter->num_altsetting; j++)
//                {
//                    interdesc = &inter->altsetting[j];
//                    qDebug() << "\t\t\tInterface Number: "<< QString::number( (int)interdesc->bInterfaceNumber );
//                    qDebug() << "\t\t\tNumber of endpoints: " << QString::number( (int)interdesc->bNumEndpoints );

//                    for(int k = 0; k < (int)interdesc->bNumEndpoints; k++)
//                    {
//                        epdesc = &interdesc->endpoint[k];
//                        qDebug() << "\t\t\t\tDescriptor Type: " << QString::number( (int)epdesc->bDescriptorType );
//                        qDebug() << "\t\t\t\tEP Address: " << QString::number( (int)epdesc->bEndpointAddress );
//                    }
//                }
//            }

//            libusb_free_config_descriptor(config);
//        }
//        qDebug() << "**********";
//    }

//    libusb_free_device_list(devices, 1);
//    libusb_exit(contex);
//    qDebug() << "------------------------------------------------------------------------------" << endl << endl;
//}

//std::list<USBhidDevice> devices = USBManager::getDevicesList();
//qDebug() << "------------------------HID----------------------" << endl;
//qDebug() << "Amount of devices: " << devices.size() << endl;

//for (auto it = devices.begin(); it != devices.end(); ++it) {
//    qDebug() << QString::fromStdWString(it->name);
//    qDebug() << "\t" << QString::fromStdString(it->type);
//    qDebug() << "\t" << QString::fromStdString(it->hidPID);
//    qDebug() << "\t" << QString::fromStdString(it->hidVID);
//    qDebug() << "**********";
//}

//qDebug() << "------------------------------------------------------------------------------" << endl << endl;
