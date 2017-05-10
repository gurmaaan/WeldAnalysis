#include "advancedmode.h"
#include "ui_advancedmode.h"

AdvancedMode::AdvancedMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdvancedMode)
{
    ui->setupUi(this);
}

AdvancedMode::~AdvancedMode()
{
    delete ui;
}
