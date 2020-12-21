#include "dialog.h"
#include "ui_dialog.h"
#include <QIcon>
#include <QPixmap>
#include <QFileDialog>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    //设置头像图片
//    QIcon icon;
//    icon.addFile(tr("icon/icon.jpg"));
//    ui->toolButton->setIcon(icon);

    ui->setupUi(this);
    ui->img->setPixmap(QPixmap("E:/QTProject/lab6/wxh/icon/qq.png"));
    this->path = "E:/QTProject/lab6/wxh/icon/qq.png";
//    ui->img->setPixmap(QPixmap("E:/QTProject/lab6/wxh/icon/qq.jpg"));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString s = QFileDialog::getOpenFileName(this,"open file dialog", "/","IMG(*.png)");
    if(s==""){
        s="E:/QTProject/lab6/wxh/icon/qq.png";
    }else{
        this->path = s;
    }

    ui->img->setPixmap(QPixmap(this->path));
}
