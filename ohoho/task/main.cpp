#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTranslator>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow w;
    w.show();
    return a.exec();
}
class Comm
{
 public:
    static void setStyle(const QString &style){
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};


