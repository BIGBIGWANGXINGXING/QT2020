#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QProcess>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // 这里使用代码来运行 MySQL 数据库
    QProcess process;
    process.start("F:/Mysql56/bin/mysqld.exe");
    if (!createConnection()) return 1;
    MainWindow w;
    w.show();

    return a.exec();
}
