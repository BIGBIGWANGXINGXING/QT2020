#include "mainwindow.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pix("C:/Users/75222/Pictures/Camera Roll/1.jpg");

    QSplashScreen spla;
    spla.setPixmap(pix);
    spla.show();
    QTranslator translator;
    translator.load("../5-1/guojihua3_zh_EN.qm");
    a.installTranslator(&translator);

    MainWindow w;
    w.show();
    spla.finish(&w);

    return a.exec();
}
