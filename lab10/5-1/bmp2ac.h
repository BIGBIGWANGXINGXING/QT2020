#ifndef BMP2AC_H
#define BMP2AC_H
#include <cstdio>
#include <cstring>
#include <stdint.h>
#include <windows.h>
#include <QMainWindow>
#include<string>
#include "stdio.h"
using namespace std;
//int32_t width,height;
//RGBQUAD *pixels;
class bmp2ac
{
private:
    int32_t width,height;
    RGBQUAD *pixels;

public:
    bmp2ac();
    bool OpenBitmap(char const *filename);
    RGBQUAD GetColor(int x, int y, int w, int h);
    char ColorToCharacter(RGBQUAD const& color);
    QString OutputAscii();

    QImage* img2gray(QImage img);
    QImage* img2guess(QImage *img_gray);
    void calculate(QImage img,QImage *img_gray);
    QImage* nms(QImage *img_guass);
    QImage* dt(QImage img,QImage *img_nms);
    QImage* st(QImage *img_dt);

    QImage changeBright(QImage Img, int iBrightValue);
    QImage* complex(QImage originImg,QImage nowImage,double oWeight,double nWeight);

    void init();

    int32_t getWidth();
    int32_t getHeight();
};

#endif // BMP2AC_H
