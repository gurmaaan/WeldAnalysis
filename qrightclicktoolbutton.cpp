#include "qrightclicktoolbutton.h"

QRightClickToolButton::QRightClickToolButton(QWidget *parent) :
    QToolButton(parent)
{   
}

void QRightClickToolButton::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::RightButton)
        emit rightClicked();
}

