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

private slots:
    void on_buttonBox_accepted();

private:
    Ui::PictureWindow *ui;
    QString tempPath;
};

#endif // PICTUREWINDOW_H
