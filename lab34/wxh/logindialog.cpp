#include "LoginDialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    if(ui->usrLineEdit->text().trimmed()==tr("wangxinghui")&&
            ui->pwdLineEdit_2->text().trimmed()==tr("189051002"))
    {
        accept();

    }else{
        QMessageBox::warning(this,tr("Waring"),
                             tr("用户名或密码错误"),
                             QMessageBox::Yes);
        ui->usrLineEdit->clear();
        ui->pwdLineEdit_2->clear();
        ui->usrLineEdit->setFocus();
    }
}
