#include "advancedmode.h"
#include "ui_advancedmode.h"
#include <QFileDialog>
#include <QString>
#include <QFileInfo>
#include <QClipboard>
#include <QStandardItemModel>

AdvancedMode::AdvancedMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdvancedMode)
{
    ui->setupUi(this);
    updatePathList();
}

AdvancedMode::~AdvancedMode()
{
    delete ui;
}

void AdvancedMode::updatePathList()
{
    QFile file(":/Other/PathList.json");
    file.open(QFile::ReadOnly);

    ui->pathList_table->setModel(manager.getListModel(manager.getArrayFromFile(&file)));
    ui->pathList_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
}

void AdvancedMode::on_viewPath_copy_button_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    QString path = ui->viewPath_lineEdit->text();
    clipboard->setText(path);
}

void AdvancedMode::on_viewPath_browse_button_clicked()
{
    QFileInfo filePath = QFileDialog::getOpenFileName(
                this,
                tr("Chose file"),
                QDir::homePath()
            );
    QString excelFilePath = filePath.absoluteFilePath();
    ui->viewPath_lineEdit->setText(excelFilePath);
}

void AdvancedMode::on_pathList_add_button_clicked()
{
    QAbstractItemModel *model = ui->pathList_table->model();
    int lastRow = model->rowCount();
    model->insertRow(lastRow);
    model->setData(model->index(lastRow, 1), "");
    ui->pathList_table->selectRow(lastRow);
    ui->pathList_table->setFocus();
    model->submit();
}

void AdvancedMode::on_pathList_refresh_button_clicked()
{
    manager.saveJsonFile(ui->pathList_table->model());
    updatePathList();
}
