#include "picturewindow.h"
#include "ui_picturewindow.h"
#include <QFile>
#include <QFileDialog>
#include "constants.h"
#include <QDebug>
#include <QMessageBox>
#include "constants.h"
#include <QDateTime>

PictureWindow::PictureWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PictureWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog | Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowFullscreenButtonHint |
                         Qt::WindowCloseButtonHint | Qt::WindowMinMaxButtonsHint);
    this->setWindowTitle(TIT_SAVE + defName() + FIL_PNGEXT + "*");
    ui->path_lineEdit->setText(QDir::homePath());
    ui->name_lineEdit->setText(defName());
}

PictureWindow::~PictureWindow()
{
    delete ui;
}

void PictureWindow::openPicture(QString path)
{
    QPixmap picture;
    picture.load(path);
    defPixMap = picture;
    ui->picture_label->setScaledContents(true);
    ui->picture_label->setPixmap(picture);
    this->adjustSize();
    defW = picture.size().width();
    defH = picture.size().height();
    ui->width_spinBox->setValue(defW);
    ui->height_spinBox->setValue(defH);
}

void PictureWindow::on_browse_button_clicked()
{
   QString path = QFileDialog::getExistingDirectory(this, tr(TIT_BROWSEDIR), ui->path_lineEdit->text(), QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
   ui->path_lineEdit->setText(path);
}

void PictureWindow::on_width_spinBox_valueChanged(int w)
{
    bool ratio = ui->aspectRatio_checkBox->isChecked();
    int h =  ui->picture_label->pixmap()->size().height();
    resizePicture(w, h, ratio);
    if (ratio)
        ui->height_spinBox->setValue(h);
}

void PictureWindow::resizePicture(int w, int h, bool ratio)
{
    Qt::AspectRatioMode mode = Qt::KeepAspectRatio;
    if (!ratio)
        mode = Qt::IgnoreAspectRatio;
    ui->picture_label->setPixmap(ui->picture_label->pixmap()->scaled(w, h, mode));
}

QString PictureWindow::defName()
{
    return NAM_PLOT + QDateTime::currentDateTime().toString(NAM_DATETIMEFORMAT);
}


void PictureWindow::on_height_spinBox_valueChanged(int h)
{
    bool ratio = ui->aspectRatio_checkBox->isChecked();
    int w =  ui->picture_label->pixmap()->size().width();
    resizePicture(w, h, ratio);
    if (ratio)
        ui->width_spinBox->setValue(w);
}

void PictureWindow::on_resetSize_button_clicked()
{
    ui->picture_label->setPixmap(defPixMap);
    ui->height_spinBox->setValue(defH);
    ui->width_spinBox->setValue(defW);
    ui->aspectRatio_checkBox->setChecked(true);
    ui->path_lineEdit->setText(QDir::homePath());
    ui->name_lineEdit->setText(defName());
}

void PictureWindow::on_save_button_clicked()
{
    QString path = ui->path_lineEdit->text() + "/" + ui->name_lineEdit->text() + FIL_PNGEXT;
    QFile file(path);
    if (file.open(QIODevice::WriteOnly))
    {
        if (ui->picture_label->pixmap()->save(&file, FIL_PNGFORMAT))
        {
            this->accept();
            emit savedFileName(MES_FILE + ui->name_lineEdit->text() + MES_CREATEDF);
            file.close();
        }
    }
    else
    {
        QString message = MES_FILE + ui->name_lineEdit->text() + MES_NOTCREATEDF + MES_CHECKNAME;
        QMessageBox::warning(this, TIT_ERCREATE, message, QMessageBox::Ok);
        return;
    }
}

void PictureWindow::on_name_lineEdit_textEdited(const QString &arg1)
{
    this->setWindowTitle(TIT_SAVE + arg1 + FIL_PNGEXT + "*");
}
