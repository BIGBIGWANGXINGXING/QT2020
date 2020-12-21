#include "standarddialog.h"
#include "geometry.h"
#include "mboxdialog.h"
#include "drawer.h"
#include <QFont>
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    StandardDialog s;
    s.show();

    Geometry g;
    g.show();

    MBoxDialog m;
    m.show();

    Drawer *d = new Drawer();
    d->resize(120,360);
    d->show();

    return a.exec();
}
