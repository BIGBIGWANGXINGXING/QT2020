#ifndef CONNECTION_H
#define CONNECTION_H


#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTextCodec>

static bool createConnection() {



    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("test");
    db.setUserName("root");
    db.setPassword("root");

    if (!db.open()) {
        QMessageBox::critical(0, QObject::tr("无法打开数据库"), "无法创建数据库连接！", QMessageBox::Cancel);
        return false;
    }
    // 下面来创建表 // 如果 MySQL 数据库中已经存在同名的表，那么下面的代码不会执行
    QSqlQuery query(db);

//    query.exec("SET NAMES 'utf8'");

    // 创建 分类 表
    query.exec("create table type(id varchar(20) primary key, name varchar(20))");
    query.exec("alter table type convert to character set utf8;");
    query.exec("insert into type values('0', '请选择类型')");
    query.exec("insert into type values('01', '电视')");
    query.exec("insert into type values('02', '空调')");


    //创建品牌表
    query.exec("create table brand(id varchar(20) primary key, name varchar(30), " "type varchar(20), price int, sum int, sell int, last int)");
    query.exec("alter table brand convert to character set utf8;");
    query.exec("insert into brand values('01', '海信', '电视', 3699, 50, 10, 40)");
    query.exec("insert into brand values('02', '创维', '电视', 3499, 20, 5, 15)");
    query.exec("insert into brand values('03', '海尔', '电视', 4199, 80, 40, 40)");
    query.exec("insert into brand values('04', '王牌', '电视', 3999, 40, 10, 30)");
    query.exec("insert into brand values('05', '海尔', '空调', 2899, 60, 10, 50)");
    query.exec("insert into brand values('06', '格力', '空调', 2799, 70, 20, 50)");


    //创建密码表
    query.exec("create table password(id varchar(20) primary key, pwd varchar(50))");
    query.exec("insert into password values('01', '123456')");


    // 使数据库支持中文
    query.exec("SET NAMES 'Latin1'");


    return true;
}
#endif // CONNECTION_H
