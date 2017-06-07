#ifndef PICTUREWINDOW_H
#define PICTUREWINDOW_H

#include <QDialog>

namespace Ui {
class PictureWindow;
}

class PictureWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PictureWindow(QWidget *parent = 0);
    ~PictureWindow();
    void openPicture(QString path);

signals:
    void savedFileName(QString name);
    void savedFilePath(QString path);

private slots:
    void on_browse_button_clicked();
    void on_save_button_clicked();
    void on_name_lineEdit_textEdited(const QString &arg1);

private:
    Ui::PictureWindow *ui;
    int defH = 0;
    int defW = 0;
    double k;
    QPixmap defPixMap;
    QString defName();
};

#endif // PICTUREWINDOW_H
