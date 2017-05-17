#include "picturewindow.h"
#include "ui_picturewindow.h"
#include <QFile>
#include <QFileDialog>
#include "constants.h"
#include <QDebug>
#include <QMessageBox>

PictureWindow::PictureWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PictureWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog | Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowFullscreenButtonHint |
                         Qt::WindowCloseButtonHint | Qt::WindowMinMaxButtonsHint);
}

PictureWindow::~PictureWindow()
{
    delete ui;
}

void PictureWindow::openPicture(QString path)
{
    QPixmap picture;
    picture.load(path);
    ui->label->setPixmap(picture);
    this->adjustSize();
    qDebug() << picture.size().height() << picture.size().width();
    qDebug() << this->height() << this->width();

    if ((picture.width() > this->width()) || (picture.height() > this->height())) {
        picture.size().setWidth(this->width());
        picture.size().setHeight(this->height());
        ui->label->setPixmap(picture);
        this->adjustSize();
        qDebug() << "--------------";
        qDebug() << picture.size().height() << picture.size().width();
        qDebug() << this->height() << this->width();
    }
}

void PictureWindow::on_buttonBox_accepted()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr(TIT_SAVE), QDir::homePath(), tr(FIL_IMAGE));
    if (fileName != "") {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly))
        {
            QMessageBox mesBox;
            QString text = MES_FILE + file.fileName() + MES_NOTCREATEDF;
            mesBox.setText(text);
            mesBox.setInformativeText(MES_TRYAGAIN);
            mesBox.setIcon(QMessageBox::Warning);
        }
        else
            QFile::copy(tempPath, fileName);
}
}
