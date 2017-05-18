#ifndef QTRIGHTCLICKTOOLBUTTON_H
#define QTRIGHTCLICKTOOLBUTTON_H

#include <QToolButton>
#include <QMouseEvent>

class QRightClickToolButton : public QToolButton
{
    Q_OBJECT

public:
    explicit QRightClickToolButton(QWidget *parent = 0);

private slots:
    void mousePressEvent(QMouseEvent *e);

signals:
    rightClicked();
};

#endif // QTRIGHTCLICKTOOLBUTTON_H
