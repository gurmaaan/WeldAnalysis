#include "usbwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    USBWidget w;
    w.show();

    return a.exec();
}
