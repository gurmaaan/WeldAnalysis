#ifndef USBDEVICESLISTWINDOW_H
#define USBDEVICESLISTWINDOW_H

#include <QDialog>

namespace Ui {
class UsbDevicesListWindow;
}

class UsbDevicesListWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UsbDevicesListWindow(QWidget *parent = 0);
    ~UsbDevicesListWindow();

private:
    Ui::UsbDevicesListWindow *ui;
};

#endif // USBDEVICESLISTWINDOW_H
