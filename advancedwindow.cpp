#include "advancedwindow.h"
#include "ui_advancedwindow.h"
#include <QFileDialog>
#include <QString>
#include <QFileInfo>
#include <QClipboard>
#include <QStandardItemModel>
#include "constants.h"

AdvancedWindow::AdvancedWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdvancedMode)
{
    ui->setupUi(this);
    updatePathList();
    this->setWindowFlags(Qt::Dialog | Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowFullscreenButtonHint |
                         Qt::WindowCloseButtonHint | Qt::WindowMinMaxButtonsHint);
}

AdvancedWindow::~AdvancedWindow()
{
    delete ui;
}

void AdvancedWindow::showDirPath(QString path)
{
    ui->label_2->setText(path);
}

void AdvancedWindow::updatePathList()
{
    QFile file(":/Other/PathList.json");
    file.open(QFile::ReadOnly);

    ui->pathList_table->setModel(manager.getModel(manager.getArrayFromFile(&file, "Items"), "Name", "Path"));
    ui->pathList_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
}

void AdvancedWindow::on_viewPath_copy_button_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    QString path = ui->viewPath_lineEdit->text();
    clipboard->setText(path);
}

void AdvancedWindow::on_viewPath_browse_button_clicked()
{
    QFileInfo filePath = QFileDialog::getOpenFileName(
                this,
                TIT_BROWSE,
                QDir::homePath()
            );
    QString excelFilePath = filePath.absoluteFilePath();
    ui->viewPath_lineEdit->setText(excelFilePath);
}

void AdvancedWindow::on_pathList_add_button_clicked()
{
    QAbstractItemModel *model = ui->pathList_table->model();
    int lastRow = model->rowCount();
    model->insertRow(lastRow);
    model->setData(model->index(lastRow, 1), "");
    ui->pathList_table->selectRow(lastRow);
    ui->pathList_table->setFocus();
    model->submit();
}

void AdvancedWindow::on_pathList_refresh_button_clicked()
{
    manager.saveJsonFile(ui->pathList_table->model());
    updatePathList();
}
