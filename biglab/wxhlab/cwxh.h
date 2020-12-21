#ifndef CWXH_H
#define CWXH_H
#include <QString>
#include <QTextEdit>
#include <QImage>

class CWxh
{
public:
    CWxh();
    QString change(QString path,int asc);
    QImage* changeToGray(QString path);
    QImage* changeTofilter(QString path,int filter_int);
    QImage* imgBritght(QString path,float contrast,int brightness);
    QImage* imgSobel(QImage *img);
    QImage* nms(QImage *img);//边缘细化
    QImage* dt(QImage img,QImage *img_nms);//双阈值检测
    QImage* st(QImage *img);//抑制孤立低阈值点
    void calculate(QImage img,QImage *img_gray);
    void init();
    /* 高斯处理相关方法 */
    QImage* imgGauss(QImage *img);
    float gaussian(float x, float y, float sigma);

    QImage* overLap(QImage *img,QString path);

    QImage sign(QImage imgsign,QImage img);

    QImage* imgErzhi(QImage *img,int n);

    QImage* imgGamma(QImage *img,int n);
    ~CWxh();
};

#endif // CWXH_H
