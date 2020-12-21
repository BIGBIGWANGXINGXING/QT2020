#ifndef SQF_H
#define SQF_H
#include<QImage>
typedef quint8  BYTE;//八位无符号整数


class SQF
{
public:
    SQF();
     QImage toGray(QImage image);//灰度转化
     QImage toBlack(QImage image,int x);//二值化
     QImage toAvg(QImage image,int i);//3X3均值滤波
     QImage toGamma(QImage image,double d);//伽马值变换
     QImage toGammA(QImage iamge,double R,double G,double B);//伽马值变换
    QImage sobelEdgeDect(QImage image);//sobel算子边缘检测
     void twoTemplate( QImage image, BYTE *pSrcData, BYTE *pDestData, int *template1, int *template2);//两个模板检测
};

#endif // SQF_H
