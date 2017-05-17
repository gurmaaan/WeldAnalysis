#include "usbdeviceslistwindow.h"
#include "ui_usbdeviceslistwindow.h"

UsbDevicesListWindow::UsbDevicesListWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UsbDevicesListWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog | Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowFullscreenButtonHint |
                         Qt::WindowCloseButtonHint | Qt::WindowMinMaxButtonsHint);
}

UsbDevicesListWindow::~UsbDevicesListWindow()
{
    delete ui;
}
