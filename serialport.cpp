    qDebug() << "------------------------QSerialPort------------------------" << endl;
    

    
    QString curVID = "", curPID = "";

   
         curPID = QString::number(info.productIdentifier());
        curVID = QString::number(info.vendorIdentifier());

        if ((curPID == PID) && (curVID == VID))
        {
            qDebug() <<prntlndbg;
            qDebug() << "Agilent founded in " << info.portName() << " like " << info.description();
            qDebug() << "Manufacture: " <<  info.manufacturer();
            qDebug() << "Location: " << info.systemLocation();
            qDebug() << "PID: " << curPID;
            qDebug() << "VID: " << curVID;
            
            bool portPID = false, portVID = false, portNotNull = false, portNotBussy = false;
            portPID = info.hasProductIdentifier();
            portVID = info.hasVendorIdentifier();
            portNotNull = !info.isNull();
            portNotBussy = ! info.isBusy();

            if (portPID && portVID && portNotBussy && portNotNull) {
                qDebug() << "Ready for connection";
                QSerialPort *port = new QSerialPort();
                port->open(QIODevice::Append);
                qDebug() << (QString) port->readAll();
                //port->waitForReadyRead(100);

            }
             qDebug() <<prntlndbg;
        }
    }

    qDebug() << "------------------------------------------------------------------------------" << endl << endl;