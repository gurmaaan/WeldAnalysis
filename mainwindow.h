#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "advancedmode.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //TODO - исправить абсолютный путь на относительный, с относительным через файл ресурсов не работает
    QString defaultsSettingsFilePath = "C:/Users/Dima/YandexDisk/_Application/WeldAnalysis/ExperimentDefaults.xlsx";

private slots:
    void on_menu_other_app_advanced_button_clicked();

    void on_menu_device_manualSearch_button_clicked();

    void on_menu_other_app_fullScreen_button_clicked();

    void on_menu_other_app_reference_button_clicked();

private:
    Ui::MainWindow *ui;
    AdvancedMode advanced;
    void setUIlogic();
    void setTablesUI();
    void setTablesColumnWidth();
};

#endif // MAINWINDOW_H
