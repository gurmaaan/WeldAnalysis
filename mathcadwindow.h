#ifndef MATHCADWINDOW_H
#define MATHCADWINDOW_H

#include <QDialog>
#include "jsondatamanager.h"
#include <QString>

namespace Ui {
class MathCadWindow;
}

class MathCadWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MathCadWindow(QWidget *parent = 0);
    void check();
    void refrashGui();
    QString getFolder();
    void save();
    ~MathCadWindow();
signals:
    void detected(bool status);

private slots:
    void on_foolder_button_clicked();

    void on_oper_button_clicked();

private:
    Ui::MathCadWindow *ui;
    bool exist = false;
};

#endif // MATHCADWINDOW_H
