#include "hellodialog.h"
#include "ui_hellodialog.h"
#include <string>
#include <sstream>

HelloDialog::HelloDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelloDialog)
{
    ui->setupUi(this);
}

HelloDialog::~HelloDialog()
{
    delete ui;
}

void HelloDialog::on_pushButton_clicked()
{
    this->x += 1;
    this->y += 1;
    QString x_all = QString::number(this->x,10);
    QString y_all = QString::number(this->y,10);
    ui->label_2->setText(x_all);
    ui->label_3->setText(y_all);
}
