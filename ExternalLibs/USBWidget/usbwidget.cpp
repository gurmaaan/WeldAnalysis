#include "usbwidget.h"
#include "ui_usbwidget.h"

USBWidget::USBWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::USBWidget)
{
    ui->setupUi(this);
    setupTypeModel();
}

USBWidget::~USBWidget()
{
    delete ui;
}

void USBWidget::setupMappers()
{
    portMapper = new QDataWidgetMapper(this);
    portMapper->setModel(model);
    portMapper->addMapping(ui->pid_edit, 0);
    portMapper->addMapping(ui->vid_edit, 1);
    portMapper->addMapping(ui->name_text, 2);
}

void USBWidget::setGlobalModel(QStandardItemModel *generalModel)
{
    //Номера портов загружаются в верхний комбобокс
    //3 поля с пид вид и адресами мапятся по комбобоксу
    model = generalModel;
    const auto portsList = model->children();
//    foreach (auto portItem, portsList) {
//        QStandardItem *port = new QStandardItem(portItem->value().toString());
//        portModel << port;
//    }

}
