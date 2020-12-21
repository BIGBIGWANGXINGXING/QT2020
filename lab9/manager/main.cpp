#include "widget.h"
#include "logindialog.h"
#include <QApplication>
#include <QProcess>
#include "connection.h"
#include <QTextCodec>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
//    QTextCodec *codec = QTextCodec::codecForName("utf8");
//    QTextCodec::setCodecForLocale(codec);

    // 这里使用代码来运行 MySQL 数据库
    QProcess process;
    process.start("F:/Mysql56/bin/mysqld.exe");
    if(!createConnection()) return 0;
    Widget w;
    LoginDialog dlg;
    if (dlg.exec() == QDialog::Accepted)
    {
        w.show();
        return a.exec();
    } else {
        return 0;
    }
}
