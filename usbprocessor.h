#ifndef USBPROCESSOR_H
#define USBPROCESSOR_H

#include <QDialog>

namespace Ui {
class USBProcessor;
}

class USBProcessor : public QDialog
{
    Q_OBJECT

public:
    explicit USBProcessor(QWidget *parent = 0);
    int getAgilentConnection();
    ~USBProcessor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::USBProcessor *ui;
    void printUSBlibList();
    void printQSerialPrtList();
};

#endif // USBPROCESSOR_H
