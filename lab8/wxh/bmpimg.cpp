#include "bmpimg.h"

BMPIMG::BMPIMG()
{

}
bool BMPIMG::getImage(QString filename)
{
    qDebug()<<"open file: " + filename;
    //open file
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly)){//open file failed
        QMessageBox::warning(0, "Waring", "open file " + filename + " failed!", QMessageBox::Yes);
        return false;
    }
    QDataStream dataStream(&file);
}
