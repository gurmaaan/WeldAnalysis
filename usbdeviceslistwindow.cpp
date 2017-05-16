#include "usbdeviceslistwindow.h"
#include "ui_usbdeviceslistwindow.h"

UsbDevicesListWindow::UsbDevicesListWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UsbDevicesListWindow)
{
    ui->setupUi(this);
}

UsbDevicesListWindow::~UsbDevicesListWindow()
{
    delete ui;
}
