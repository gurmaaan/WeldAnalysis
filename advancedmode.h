#ifndef ADVANCEDMODE_H
#define ADVANCEDMODE_H

#include <QDialog>
#include <jsondatamanager.h>

namespace Ui {
class AdvancedMode;
}

class AdvancedMode : public QDialog
{
    Q_OBJECT

public:
    explicit AdvancedMode(QWidget *parent = 0);
    ~AdvancedMode();

private slots:

    void on_viewPath_copy_button_clicked();

    void on_viewPath_browse_button_clicked();

    void on_pathList_add_button_clicked();

    void on_pathList_refresh_button_clicked();

private:
    Ui::AdvancedMode *ui;
    void updatePathList();
    JsonDataManager manager;
};

#endif // ADVANCEDMODE_H
