#ifndef DRAWER_H
#define DRAWER_H
#include <QToolButton>

#include <QToolBox>

namespace Ui {
class Drawer;
}

class Drawer : public QToolBox
{
    Q_OBJECT

public:
    explicit Drawer(QWidget *parent = 0,Qt::WindowFlags f = 0);

    QToolButton *toolButton1_1;
    QToolButton *toolButton1_2;
    QToolButton *toolButton1_3;
    QToolButton *toolButton1_4;
    QToolButton *toolButton1_5;
    QToolButton *toolButton2_1;
    QToolButton *toolButton2_2;
    QToolButton *toolButton2_3;
    QToolButton *toolButton3_1;

    ~Drawer();

private:
    Ui::Drawer *ui;
};

#endif // DRAWER_H
