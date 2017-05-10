#ifndef ADVANCEDMODE_H
#define ADVANCEDMODE_H

#include <QDialog>

namespace Ui {
class AdvancedMode;
}

class AdvancedMode : public QDialog
{
    Q_OBJECT

public:
    explicit AdvancedMode(QWidget *parent = 0);
    ~AdvancedMode();

private:
    Ui::AdvancedMode *ui;
};

#endif // ADVANCEDMODE_H
