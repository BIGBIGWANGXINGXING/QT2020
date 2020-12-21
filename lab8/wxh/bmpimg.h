#ifndef BMPIMG_H
#define BMPIMG_H
#include <QtCore/QString>
#include <QFile>
#include <QMessageBox>
#include <QDataStream>
#include <QImage>

#include <bmpfile.h>

class BMPIMG
{
public:
    BMPIMG();
    bool getImage(QString filename);

private:
    BITMAPFILEHEADER fileHeader;
    BITMAPINFOHEADER infoHeader;
    RGBQUAD *rgbQuad;
    IMAGEDATA *imgData;

};



#endif // BMPIMG_H
