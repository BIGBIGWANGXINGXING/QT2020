#include "sqf.h"
#include<QColor>
#include<QImage>
#include<QtCore/qmath.h>
SQF::SQF()
{

}


//灰度转化
QImage SQF:: toGray(QImage image){
    int height = image.height();
        int width = image.width();
        QImage ret(width, height, QImage::Format_Indexed8);
        ret.setColorCount(256);
        for(int i = 0; i < 256; i++)
        {
            ret.setColor(i, qRgb(i, i, i));
        }
        switch(image.format())
        {
        case QImage::Format_Indexed8:
            for(int i = 0; i < height; i ++)
            {
                const uchar *pSrc = (uchar *)image.constScanLine(i);
                uchar *pDest = (uchar *)ret.scanLine(i);
                memcpy(pDest, pSrc, width);
            }
            break;
        case QImage::Format_RGB32:
        case QImage::Format_ARGB32:
        case QImage::Format_ARGB32_Premultiplied:
            for(int i = 0; i < height; i ++)
            {
                const QRgb *pSrc = (QRgb *)image.constScanLine(i);
                uchar *pDest = (uchar *)ret.scanLine(i);

                for( int j = 0; j < width; j ++)
                {
                     pDest[j] = qGray(pSrc[j]);
                }
            }
            break;
        }
        return ret;
}

//二值化
QImage SQF::toBlack(QImage image ,int x){

    QColor color;
    int height = image.height();
    int width = image.width();
    for (int i=0;i<width;i++){
        for(int j=0;j<height;j++){
            color = QColor(image.pixel(i,j));
            int r = color.red();
            int g = color.green();
            int b = color.blue();
            int avg =r*0.3+g*0.59+b*0.11;
            int rgb;
            if(avg>x){
                rgb=255;
            }else {
                rgb=0;
              }
            image.setPixel(i,j,qRgb(rgb,rgb,rgb));
        }
    }
    return image;
}

//3X3均值滤波
QImage SQF::toAvg(QImage image,int i){
//    int height = image.height();
//    int width = image.width();
//    if(i>1){
//        int k[i][i];
//        for(int x=0;x<i;x++){
//            for(int j=0;j<i;j++){
//                k[x][j]=1;
//            }
//        }

//        int ksize = i;
//        int sk = i*i;
//        int r,g,b;
//             QColor color;
//             for(int x=ksize/2;x<width-(ksize/2);x++){
//                 for(int y=ksize/2;y<height-(ksize/2);y++){
//                     r=0;
//                     g=0;
//                     b=0;

//                     for(int i =-ksize/2;i<ksize/2;i++){
//                         for(int j=-ksize/2;j<=ksize/2;j++){
//                             color=QColor(image.pixel(x+i,y+j));
//                             r+=color.red()*k[ksize/2+i][ksize/2+j];
//                             g+=color.green()*k[ksize/2+i][ksize/2+j];
//                             b+=color.blue()*k[ksize/2+i][ksize/2+j];
//                         }
//                     }
//                     r=qBound(0,r/sk,255);
//                     g=qBound(0,g/sk,255);
//                     b=qBound(0,b/sk,255);
//                     image.setPixel(x,y,qRgb(r,g,b));
//                 }
//             }
//    }
             return image;

}
//伽马变换
QImage SQF::toGamma(QImage image,double d){
   if(d!=0){
    QColor color;
    int height = image.height();
    int width = image.width();
    for (int i=0;i<width;i++){
        for(int j=0;j<height;j++){
            color = QColor(image.pixel(i,j));
            double r = color.red();
            double g = color.green();
            double b = color.blue();
            int R = qBound(0,(int)qPow(r,d),255);
            int G = qBound(0,(int)qPow(g,d),255);
            int B = qBound(0,(int)qPow(b,d),255);
            image.setPixel(i,j,qRgb(R,G,B));
        }
    }

   }
    return image;
}

//伽马变换高级
QImage  SQF::toGammA(QImage image, double R, double G, double B){


    if(R!=0||G!=0||B!=0){
     QColor color;
     int height = image.height();
     int width = image.width();
     for (int i=0;i<width;i++){
         for(int j=0;j<height;j++){
             color = QColor(image.pixel(i,j));
             double r = color.red();
             double g = color.green();
             double b = color.blue();
             int r1 = qBound(0,(int)qPow(r,R),255);
             int g1 = qBound(0,(int)qPow(g,G),255);
             int b1 = qBound(0,(int)qPow(b,B),255);
             image.setPixel(i,j,qRgb(r1,g1,b1));
         }
     }
    }

return image;
}

//两个模板
void SQF::twoTemplate(QImage image,BYTE *pSrcData, BYTE *pDestData, int *template1, int *template2)
{
    int i,j;
        BYTE *pTempDest,*pTempSrc;
        int value1,value2;
        int pixelDepth = image.depth() / 8;
        int bytesOfPerLine = image.bytesPerLine();
        //int bytesCount =  image.byteCount();
        for(i = 1;i < image.height() -1 ;i++)
        {
            for(j = 1;j < image.width() -1;j++)
            {
                pTempSrc = pSrcData + i * bytesOfPerLine + pixelDepth * j;
                pTempDest = pDestData + i * bytesOfPerLine + pixelDepth * j;
                for(int k = 0;k <= pixelDepth - 1;k++)
                {
                    value1 = *(pTempSrc+k-bytesOfPerLine-pixelDepth)*template1[0]+*(pTempSrc+k-bytesOfPerLine)*template1[1]+\
                            *(pTempSrc+k-bytesOfPerLine+pixelDepth)*template1[2]+*(pTempSrc+k-pixelDepth)*template1[3]+*(pTempSrc+k)*template1[4]+\
                            *(pTempSrc+k+pixelDepth)*template1[5]+*(pTempSrc+k+bytesOfPerLine-pixelDepth)*template1[6]+\
                            *(pTempSrc+k+bytesOfPerLine)*template1[7]+*(pTempSrc+k+bytesOfPerLine+pixelDepth)*template1[8];
                    value2 = *(pTempSrc+k-bytesOfPerLine-pixelDepth)*template2[0]+*(pTempSrc+k-bytesOfPerLine)*template2[1]+\
                            *(pTempSrc+k-bytesOfPerLine+pixelDepth)*template2[2]+*(pTempSrc+k-pixelDepth)*template2[3]+*(pTempSrc+k)*template2[4]+\
                            *(pTempSrc+k+pixelDepth)*template2[5]+*(pTempSrc+k+bytesOfPerLine-pixelDepth)*template2[6]+\
                            *(pTempSrc+k+bytesOfPerLine)*template2[7]+*(pTempSrc+k+bytesOfPerLine+pixelDepth)*template2[8];
                    //qDebug()<<value1<<" "<<value2;
                    *(pTempDest + k) = abs(value1) + abs(value2);
                }
            }
        }
}


//算子边缘检测
 QImage SQF::sobelEdgeDect(QImage image)
{
    int mask1[9] = {-1,-2,-1,0,0,0,1,2,1};
    int mask2[9] = {-1,0,1,-2,0,2,-1,0,1};
    QImage destimage = image;
    BYTE*pSrcData = image.bits();//原操作图片首地址
    BYTE *pDestData = destimage.bits();
    twoTemplate(image,pSrcData,pDestData,mask1,mask2);
    return destimage;
}
