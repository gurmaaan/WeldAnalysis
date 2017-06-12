#ifndef USBWIDGET_H
#define USBWIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <QStringListModel>;
#include <QDataWidgetMapper>

namespace Ui {
class USBWidget;
}

class USBWidget : public QWidget
{
    Q_OBJECT

public:
    explicit USBWidget(QWidget *parent = 0);
    void setGlobalModel(QStandardItemModel *generalModel);
    ~USBWidget();

private:
    Ui::USBWidget *ui;
    void setupTypeModel();
    void setupMappers();

    QStandardItemModel *model;
    QStringListModel *portModel;
    QDataWidgetMapper *portMapper;
};

#endif // USBWIDGET_H
