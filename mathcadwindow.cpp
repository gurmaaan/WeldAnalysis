#include "mathcadwindow.h"
#include "ui_mathcadwindow.h"
#include <QSettings>
#include "constants.h"
#include <QDebug>
#include <QString>
#include <QFileDialog>
#include <QDesktopServices>
#include <QProcess>

MathCadWindow::MathCadWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MathCadWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog | Qt::CustomizeWindowHint | Qt::WindowTitleHint |Qt::WindowCloseButtonHint | Qt::WindowMinMaxButtonsHint);
}

void MathCadWindow::check()
{
    QSettings settings(MAT_REGFOLDER, QSettings::NativeFormat);
    QStringList keyListDisplay = settings.allKeys().filter( MAT_DISPLAYKEY );

    foreach ( QString key, keyListDisplay)
    {
        QString currentSetting = settings.value(key).toString();
        //qDebug() << currentSetting;
        if((currentSetting.contains(MAT_NAME14, Qt::CaseInsensitive)) || (currentSetting.contains(MAT_NAME15, Qt::CaseInsensitive)))
        {
            exist = true;
            QStringList versionList= currentSetting.split(" ");
            ui->versionInfo_label->setText(versionList.at(1));
            ui->statusInfo_label->setText(MAT_SUCCESS);
            ui->statusInfo_label->setStyleSheet(MAT_SUCCESSCOLOR);
            ui->message_label->setText(MAT_SUCCESSMES);
            ui->folder_lineEdit->setText(getFolder());
            emit detected(exist);
            break;
        }
        else
        {
            exist = false;
            emit detected(exist);
        }
    }

    if (exist) {
        ui->oper_button->setEnabled(true);
        save();
    }
    else
        ui->oper_button->setEnabled(false);
}

QString MathCadWindow::getFolder()
{
    QString path = " ";
    if (exist) {
        path = MAT_PATH + ui->versionInfo_label->text();
        return path;
    } else {
        return path;
    }
}

void MathCadWindow::save()
{
//    QString = "cd " + ui->folder_lineEdit->text() + "start " + MAT_EXENAM;

}

MathCadWindow::~MathCadWindow()
{
    delete ui;
}

void MathCadWindow::on_foolder_button_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this, tr(TIT_BROWSEDIR), ui->folder_lineEdit->text(),QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui->folder_lineEdit->setText(path);
}

void MathCadWindow::on_oper_button_clicked()
{
    QProcess *matapp = new QProcess(this);
    QDir::setCurrent(ui->folder_lineEdit->text());
    matapp->startDetached(MAT_EXENAM);
}
