#include "cwxh.h"
#include <time.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <QMessageBox>
#include <QTextEdit>
#include <QImage>
#include <cmath>
#include <QDebug>
using namespace std;

#define MYCUT_HEIGHT 100	//截取高度
#define MYCUT_WIDTH 100		//截取宽度
#define BEGIN_X 0			//截取位图开始位置X坐标
#define BEGIN_Y 0			//截取位图开始位置Y坐标
#define PI 3.1415926
double highthresh = 2.5;
double lowthresh = 1.5;

QRgb edge = qRgb(0,0,0);
QRgb notedge = qRgb(255,255,255);

typedef unsigned char  BYTE;
typedef unsigned short WORD;
typedef unsigned long  DWORD;
typedef long LONG;

//位图文件头信息结构定义
//其中不包含文件类型信息（由于结构体的内存结构决定，要是加了的话将不能正确读取文件信息）

typedef struct BMP_FILE_HEADER {
    WORD bType; /* 文件标识符*/
    DWORD bSize; /* 文件的大小*/
    WORD bReserved1; /* 保留值,必须设置为*/
    WORD bReserved2; /* 保留值,必须设置为*/
    DWORD bOffset; /* 文件头的最后到图像数据位开始的偏移量*/
} BITMAPFILEHEADER;

//信息头BITMAPINFOHEADER，也是一个结构，其定义如下：

typedef struct BMP_INFO{
    //public:
    DWORD bInfoSize; /* 信息头的大小*/
    DWORD bWidth; /* 图像的宽度*/
    DWORD bHeight; /* 图像的高度*/
    WORD bPlanes; /* 图像的位面数*/
    WORD bBitCount; /* 每个像素的位数*/
    DWORD bCompression; /* 压缩类型*/
    DWORD bmpImageSize; /* 图像的大小,以字节为单位*/
    DWORD bXPelsPerMeter; /* 水平分辨率*/
    DWORD bYPelsPerMeter; /* 垂直分辨率*/
    DWORD bClrUsed; /* 使用的色彩数*/
    DWORD bClrImportant; /* 重要的颜色数*/
} BITMAPINFOHEADER;

/*彩色表*/
typedef struct RGB_QUAD
{
    WORD rgbBlue; /* 蓝色强度*/
    WORD rgbGreen; /* 绿色强度*/
    WORD rgbRed; /* 红色强度*/
    WORD rgbReversed; /* 保留值*/
} RGBQUAD;


CWxh::CWxh(){

}
CWxh::~CWxh(){

}

/**
 * @brief CWxh::change
 * @param path
 * @param asc
 * @return
 * 将黑白图片转换成ascii的方法类
 */
QString CWxh::change(QString path,int asc)
{
    QString str;
    QRgb pixel;
    int r;
    QImage *img = new QImage(path);
    char a = 0;
    a = asc;
    for(int i=0; i<img->height(); i++){
        for(int j=0; j<img->width(); j++)
        {
            pixel = img->pixel(j,i);

            if(qRed(pixel)==255){
                str.append(" ");
            }else if(qRed(pixel)==0){
                str.append(a);
            }
        }
        str.append("\n");
    }
    //    FILE *fp;
    //    BITMAPFILEHEADER fileHeader;
    //    BITMAPINFOHEADER infoHeader;
    //    RGBQUAD rgbquad;
    //    long offset, bmpImageSize, width, height, bytesPerPixel, size, bitCount;


    //    char* ptr;
    //    QByteArray ba;
    //    ba = path.toLatin1();
    //    ptr = ba.data();
    //    fp = fopen(ptr,"rb");

    //    //获取文件头和信息头
    //    fread(&fileHeader, 14, 1, fp);
    //    fread(&infoHeader, 40, 1, fp);

    //    fread(&rgbquad,sizeof(RGBQUAD),1,fp);

    //    //计算并输出位图数据的偏移量，图像的大小，宽度和高度，每个像素点所占的字节
    //    size = fileHeader.bSize;
    //    offset = fileHeader.bOffset;
    //    bmpImageSize = infoHeader.bmpImageSize;
    //    width = infoHeader.bWidth;
    //    height = infoHeader.bHeight;
    //    bitCount = infoHeader.bBitCount;
    //    bytesPerPixel = infoHeader.bBitCount / 8;



    //    //    c = fgetc(fp);             //输出每个像素点所占字节中的内容
    //    //        while (!feof(fp))
    //    //        {
    //    //            c = fgetc(fp);
    //    //        }


    //    fseek(fp, offset, SEEK_SET);            //跳过图像信息头部分

    //    //    int bb = fgetc(fp);
    //    int fp_width=0;
    //    int i,j,ascii = asc;               //选用的ascii码可修改

    //    int m=width*3%4;                //通过计算得到每行计算机需要填充的字符数
    //    if(m!=0)
    //    {
    //        fp_width=4-m;
    //    }
    //    int red[250][151];             //申请像素数组大小
    //    int green[250][151];
    //    int blue[250][151];
    //    for(i=height-1;i>=0;i--)          //通过遍历给数组存值
    //    {
    //        for(j=0;j<width;j++)
    //        {
    //            red[i][j]=fgetc(fp);
    //            green[i][j]=fgetc(fp);
    //            blue[i][j]=fgetc(fp);
    //        }
    //        fseek(fp,fp_width,1);   //跳过扫描时每行填充的字符，fp_width表示每行计算机需要填充的字符数

    //    }



    //    for( i=0;i<height;i++)
    //    {
    //        for( j=0;j<width;j++)
    //        {
    //            if(red[i][j]==0&&green[i][j]==0&&blue[i][j]==0)
    //            {
    //                str.append(a);

    //            }else if(red[i][j]==255&&green[i][j]==255&&blue[i][j]==255)
    //            {
    //                str.append(" ");
    //            }
    //        }
    //        str.append("\n");
    //    }
    //    fclose(fp);

    return str;
}


/**
 * @brief CWxh::changeToGray
 * @param path
 * @return
 * 彩图转化成灰度图
 */
QImage* CWxh::changeToGray(QString path){

    QRgb pixel,grayPix;
    QImage *img = new QImage(path);
    int width = img->width();
    int height = img->height();
    int r,g,b,gray;




    //效率测试
    double dur;
    double m = 0;
    clock_t start,end;
    start = clock();


    /*原始代码*/
    for(int i=0; i<width; i++){
        for(int j=0; j<height; j++)
        {
            pixel = img->pixel(i,j);
            r = qRed(pixel);
            g = qGreen(pixel);
            b = qBlue(pixel);
            gray = (r+g+b)/3;
            grayPix = qRgb(gray,gray,gray);
            img->setPixel(i,j,grayPix);
        }
    }

    /*分为四块*/
    //        if(width%2!=0){
    //            if(height%2!=0){
    //                //长宽都为单数
    //                for(int i = 0;i < hw ;i++){
    //                    for(int j = 0;j < hh ;j++){
    //                        pixel = img->pixel(i,j);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(i,j,grayPix);

    //                        pixel = img->pixel(hw+i+1,j);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(hw+i+1,j,grayPix);

    //                        pixel = img->pixel(i,hh+j+1);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(i,hh+j+1,grayPix);

    //                        pixel = img->pixel(hw+i+1,hh+j+1);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(hw+i+1,hh+j+1,grayPix);
    //                    }
    //                }
    //            }else{
    //                //长为偶数 宽为单数
    //                for(int i = 0;i < hw ;i++){
    //                    for(int j = 0;j < hh ;j++){
    //                        pixel = img->pixel(i,j);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(i,j,grayPix);

    //                        pixel = img->pixel(hw+i+1,j);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(hw+i+1,j,grayPix);

    //                        pixel = img->pixel(i,hh+j);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(i,hh+j,grayPix);

    //                        pixel = img->pixel(hw+i+1,hh+j);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(hw+i+1,hh+j,grayPix);
    //            }
    //                }
    //             }
    //        }else{
    //            if(height%2!=0){
    //                //长为单数宽都为偶数
    //                for(int i = 0;i < hw ;i++){
    //                    for(int j = 0;j < hh ;j++){
    //                        pixel = img->pixel(i,j);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(i,j,grayPix);

    //                        pixel = img->pixel(hw+i,j);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(hw+i,j,grayPix);

    //                        pixel = img->pixel(i,hh+j+1);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(i,hh+j+1,grayPix);

    //                        pixel = img->pixel(hw+i,hh+j+1);
    //                        r = qRed(pixel);
    //                        g = qGreen(pixel);
    //                        b = qBlue(pixel);
    //                        gray = (r+g+b)/3;
    //                        grayPix = qRgb(gray,gray,gray);
    //                        img->setPixel(hw+i,hh+j+1,grayPix);
    //                    }
    //                }
    //            }else{
    //                    //长宽都为偶数
    //                    for(int i = 0;i < hw ;i++){
    //                        for(int j = 0;j < hh ;j++){
    //                            pixel = img->pixel(i,j);
    //                            r = qRed(pixel);
    //                            g = qGreen(pixel);
    //                            b = qBlue(pixel);
    //                            gray = (r+g+b)/3;
    //                            grayPix = qRgb(gray,gray,gray);
    //                            img->setPixel(i,j,grayPix);

    //                            pixel = img->pixel(hw+i,j);
    //                            r = qRed(pixel);
    //                            g = qGreen(pixel);
    //                            b = qBlue(pixel);
    //                            gray = (r+g+b)/3;
    //                            grayPix = qRgb(gray,gray,gray);
    //                            img->setPixel(hw+i,j,grayPix);

    //                            pixel = img->pixel(i,hh+j);
    //                            r = qRed(pixel);
    //                            g = qGreen(pixel);
    //                            b = qBlue(pixel);
    //                            gray = (r+g+b)/3;
    //                            grayPix = qRgb(gray,gray,gray);
    //                            img->setPixel(i,hh+j,grayPix);

    //                            pixel = img->pixel(hw+i,hh+j);
    //                            r = qRed(pixel);
    //                            g = qGreen(pixel);
    //                            b = qBlue(pixel);
    //                            gray = (r+g+b)/3;
    //                            grayPix = qRgb(gray,gray,gray);
    //                            img->setPixel(hw+i,hh+j,grayPix);
    //                        }
    //            }
    //        }

    //        }

    /*分两块下三角*/
    //    for(int j=0; j<height; j++){
    //        m = (j+1)*(width/height);
    //        for(int i=0; i <= m; i++)
    //        {
    //            pixel = img->pixel(i,j);
    //            r = qRed(pixel);
    //            g = qGreen(pixel);
    //            b = qBlue(pixel);
    //            gray = (r+g+b)/3;
    //            grayPix = qRgb(gray,gray,gray);
    //            img->setPixel(i,j,grayPix);

    //            pixel = img->pixel(width-i-1,height-j-1);
    //            r = qRed(pixel);
    //            g = qGreen(pixel);
    //            b = qBlue(pixel);
    //            gray = (r+g+b)/3;
    //            grayPix = qRgb(gray,gray,gray);
    //            img->setPixel(width-i-1,height-j-1,grayPix);

    //        }
    //    }

    /*分两块左右对称*/
    //    if(width%2!=0){
    //        for(int i = 0;i < hw ;i++){
    //            for(int j = 0;j < height ;j++){
    //                pixel = img->pixel(i,j);
    //                r = qRed(pixel);
    //                g = qGreen(pixel);
    //                b = qBlue(pixel);
    //                gray = (r+g+b)/3;
    //                grayPix = qRgb(gray,gray,gray);
    //                img->setPixel(i,j,grayPix);

    //                pixel = img->pixel(hw+i+1,j);
    //                r = qRed(pixel);
    //                g = qGreen(pixel);
    //                b = qBlue(pixel);
    //                gray = (r+g+b)/3;
    //                grayPix = qRgb(gray,gray,gray);
    //                img->setPixel(hw+i+1,j,grayPix);

    //            }
    //        }

    //    }else{
    //        for(int i = 0;i < hw ;i++){
    //            for(int j = 0;j < height ;j++){
    //                pixel = img->pixel(i,j);
    //                r = qRed(pixel);
    //                g = qGreen(pixel);
    //                b = qBlue(pixel);
    //                gray = (r+g+b)/3;
    //                grayPix = qRgb(gray,gray,gray);
    //                img->setPixel(i,j,grayPix);

    //                pixel = img->pixel(hw+i,j);
    //                r = qRed(pixel);
    //                g = qGreen(pixel);
    //                b = qBlue(pixel);
    //                gray = (r+g+b)/3;
    //                grayPix = qRgb(gray,gray,gray);
    //                img->setPixel(hw+i,j,grayPix);

    //            }
    //        }

    //    }
    end = clock();
    dur = (double)(end - start);

    cout<<"Use Time:"<<endl;
    cout<<dur/CLOCKS_PER_SEC<<endl;

    return img;
}


/**
 * @brief CWxh::changeTofilter
 * @param path
 * @param filter_int 中心点半径为filter_int大小的滤波
 * @return
 * 均值滤波处理
 */
QImage* CWxh::changeTofilter(QString path,int filter_int){
    QRgb pixel,grayPix;
    QImage *img = new QImage(path);

    int width = img->width();
    int height = img->height();

    QImage *imgfilter = new QImage(width, height, QImage::Format_RGBX8888);
    int r,g,b;
    int all = (filter_int*2+1)*(filter_int*2+1);
    for(int i = 0; i < width; i++){
        for(int j = 0; j < height; j++)
        {
            all = (filter_int*2+1)*(filter_int*2+1);
            r = 0;g = 0;b = 0;
            for(int wi = -1*filter_int; wi <= filter_int; wi++){
                for(int hj = -1*filter_int; hj <= filter_int; hj++){
                    if((i+wi)>=0&&(j+hj)>=0&&(i+wi)<width&&(j+hj)<height){
                        pixel = img->pixel(i+wi,j+hj);
                        r += qRed(pixel);
                        g += qGreen(pixel);
                        b += qBlue(pixel);
                    }else{
                        all--;
                    }
                }
            }
            r = r/all;
            g = g/all;
            b = b/all;
            grayPix = qRgb(r,g,b);

            imgfilter->setPixel(i,j,grayPix);
        }
    }

    return imgfilter;
}


/**
 * @brief CWxh::imgBitght
 * @param path
 * @param num
 * @return
 * 图像亮度调节
 */
QImage* CWxh::imgBritght(QString path,float contrast,int brightness){
    QRgb pixel,grayPix;
    QImage *img = new QImage(path);

    int width = img->width();
    int height = img->height();

    QImage *imgbright = new QImage(width, height, QImage::Format_RGBX8888);
    int r,g,b;
    for(int i = 0; i < width; i++){
        for(int j = 0; j < height; j++)
        {
            pixel = img->pixel(i,j);
            r = qRed(pixel)*contrast+brightness;
            r = (r < 0) ? 0 : (r > 255) ? 255 : r;
            g = qGreen(pixel)*contrast+brightness;
            g = (g < 0) ? 0 : (g > 255) ? 255 : g;
            b = qBlue(pixel)*contrast+brightness;
            b =  (b  < 0) ? 0 : (b  > 255) ? 255 : b ;
            grayPix = qRgb(r,g,b);
            imgbright->setPixel(i,j,grayPix);
        }
    }

    return imgbright;
}



/**
 * @brief CWxh::imgSobel
 * @param path
 * @return
 * 边缘检测Canny算法
 * 处理过程 灰度图--高斯滤波--梯度计算（sobel算子）--非最大信号(边缘细化)--双阈值边缘连接--二值化图像输出结果--》canny边缘检测
 *
 * Sobel算法处理边缘检测
 * 梯度计算
 *
 * 算子模板 第一个为y方向上的 第二个为x方向的
 * [ 1  2  1     [1 0 -1]
 *   0  0  0      2 0 -2
 *  -1 -2 -1]     1 0 -1]
 */
QImage* CWxh::imgSobel(QImage *img){

    QRgb pixel,stdpixel;

    int width = img->width();
    int height = img->height();

    QImage *imgSdt = new QImage(width, height, QImage::Format_RGBX8888);
    int gx,gy,g;

    for(int i = 1; i < width-1; i++){
        for(int j = 1; j < height-1; j++)
        {
            pixel = img->pixel(i,j);
            gx = (qRed(img->pixel(i+1,j-1))+2*qRed(img->pixel(i+1,j))+qRed(img->pixel(i+1,j+1)))-
                    (qRed(img->pixel(i-1,j-1))+2*qRed(img->pixel(i-1,j))+qRed(img->pixel(i-1,j+1)));
            gy = (qRed(img->pixel(i-1,j-1))+2*qRed(img->pixel(i,j-1))+qRed(img->pixel(i+1,j-1)))-
                    (qRed(img->pixel(i-1,j+1))+2*qRed(img->pixel(i,j+1))+qRed(img->pixel(i+1,j+1)));

            g = abs(gx)+abs(gy);
            g = g > 255 ? 255 : g;
            g = g < 0 ? 0 : g;
            stdpixel = qRgb(g,g,g);
            imgSdt->setPixel(i,j,stdpixel);
        }
    }

    return imgSdt;
}


/**
 * @brief CWxh::nms
 * @param img
 * @return
 * 边缘细化
 */
double **gradx;
double **grady;
double **grad;
double **dir;
double **gradcp;
QImage* CWxh::nms(QImage *img)
{
    QImage* img_nms=new QImage(img->width(),img->height(),QImage::Format_ARGB32);

    double temp=0;
    for(int i=0;i<img_nms->width();++i){
        for(int j=0;j<img_nms->height();++j){
            temp+=grad[i][j];
        }
    }
    temp/=img_nms->width()*img_nms->height();
    qDebug()<<temp<<endl;
    highthresh*=temp;
    lowthresh*=highthresh;
    double N,NE,E,SW,W,SE,S,NW;
    double grad1=0,grad2=0,tantheta=0;
    for(int i=1;i<img_nms->width()-1;++i){
        for(int j=1;j<img_nms->height();++j){
            N=grad[i][j-1];
            NE=grad[i+1][j-1];
            E=grad[i+1][j];
            SW=grad[i-1][j+1];
            W=grad[i-1][j];
            SE=grad[i+1][j+1];
            S=grad[i][j+1];
            NW=grad[i-1][j-1];
            if(dir[i][j]==0){
                tantheta=abs(grady[i][j]/gradx[i][j]);
                grad1=E*(1-tantheta)+NE*tantheta;
                grad2=W*(1-tantheta)+SW*tantheta;
            }
            else if(dir[i][j]==1){
                tantheta=abs(gradx[i][j]/grady[i][j]);
                grad1=N*(1-tantheta)+NE*tantheta;
                grad2=S*(1-tantheta)+SW*tantheta;
            }
            else if(dir[i][j]==2){
                tantheta=abs(gradx[i][j]/grady[i][j]);
                grad1=N*(1-tantheta)+NW*tantheta;
                grad2=S*(1-tantheta)+SE*tantheta;
            }
            else if(dir[i][j]==3){
                tantheta=abs(grady[i][j]/gradx[i][j]);
                grad1=W*(1-tantheta)+NW*tantheta;
                grad2=E*(1-tantheta)+SE*tantheta;
            }
            else{
                grad1=highthresh;
                grad2=highthresh;
            }


            if(grad[i][j]>grad1&&grad[i][j]>grad2){
                img_nms->setPixel(i,j,edge);//black边缘 GRH
            }
            else{
                img_nms->setPixel(i,j,notedge);//white GRH
                grad[i][j]=0;
            }
        }
    }
    return img_nms;
}
/**
 * @brief CWxh::calculate
 * @param img
 * @param img_gray
 * sobel处理
 */
void CWxh::calculate(QImage img,QImage *img_gray)
{
    gradx=new double*[img.width()];
    for(int i=0;i<img.width();++i)
        gradx[i]=new double[img.height()];

    grady=new double*[img.width()];
    for(int i=0;i<img.width();++i)
        grady[i]=new double[img.height()];

    grad=new double*[img.width()];
    for(int i=0;i<img.width();++i)
        grad[i]=new double[img.height()];
    dir=new double*[img.width()];
    for(int i=0;i<img.width();++i)
        dir[i]=new double[img.height()];

    int k=3;//sobel算子规模
    double kernelx[3][3]={-1,0,1,-2,0,2,-1,0,1};
    double kernely[3][3]={1,2,1,0,0,0,-1,-2,-1};

    QImage * t_img=new QImage(img_gray->width()+k-1,img_gray->height()+k-1,QImage::Format_ARGB32);
    //lefttop
    for(int i=0;i<k/2;++i){
        for(int j=0;j<k/2;++j){
            t_img->setPixel(i,j,img_gray->pixel(0,0));
        }
    }
    //righttop
    for(int i=0;i<k/2;++i){
        for(int j=0;j<k/2;++j){
            t_img->setPixel(i,j,img_gray->pixel(img_gray->width()-1,0));
        }
    }
    //rightbottom
    for(int i=img_gray->width()+k/2;i<t_img->width();++i){
        for(int j=0;j<k/2;++j){
            t_img->setPixel(i,j,img_gray->pixel(img_gray->width()-1,img_gray->height()-1));
        }
    }
    //leftbottom
    for(int i=0;i<k/2;++i){
        for(int j=img_gray->height()+k/2;j<t_img->height();++j){
            t_img->setPixel(i,j,img_gray->pixel(0,img_gray->height()-1));
        }
    }
    //top
    for(int i=0;i<img_gray->width();++i){
        for(int j=0;j<k/2;++j){
            t_img->setPixel(i+k/2,j,img_gray->pixel(i,0));
        }
    }
    //right
    for(int i=t_img->width()-k/2;i<t_img->width();++i){
        for(int j=0;j<img_gray->height();++j){
            t_img->setPixel(i,j+k/2,img_gray->pixel(img_gray->width()-1,j));
        }
    }
    //bottom
    for(int i=0;i<img_gray->width();++i){
        for(int j=t_img->height()-k/2;j<t_img->height();++j){
            t_img->setPixel(i+k/2,j,img_gray->pixel(i,img_gray->height()-1));
        }
    }
    //left
    for(int i=0;i<k/2;++i){
        for(int j=0;j<img_gray->height();++j){
            t_img->setPixel(i,j+k/2,img_gray->pixel(0,j));
        }
    }

    for(int i=0;i<img_gray->width();++i){
        for(int j=0;j<img_gray->height();++j){
            t_img->setPixel(i+k/2,j+k/2,img_gray->pixel(i,j));
        }
    }
    for(int i=k/2;i<t_img->width()-k/2;++i){
        for(int j=k/2;j<t_img->height()-k/2;++j){
            double tempx=0;
            double tempy=0;
            for(int ti=0;ti<k;++ti){
                for(int tj=0;tj<k;++tj){
                    tempx+=kernelx[ti][tj]*qRed(t_img->pixel(i-k/2+ti,j-k/2+tj));
                    tempy+=kernely[ti][tj]*qRed(t_img->pixel(i-k/2+ti,j-k/2+tj));
                }
            }
            gradx[i-k/2][j-k/2]=tempx;
            grady[i-k/2][j-k/2]=tempy;
            grad[i-k/2][j-k/2]=sqrt(pow(tempx,2)+pow(tempy,2));
            double theta=atan(tempy/tempx)+90;
            if (theta >= 0 && theta < 45)
                dir[i-k/2][j-k/2] = 2;
            else if (theta >= 45 && theta < 90)
                dir[i-k/2][j-k/2] = 3;
            else if (theta >= 90 && theta < 135)
                dir[i-k/2][j-k/2] = 0;
            else
                dir[i-k/2][j-k/2] = 1;
        }
    }
}
void CWxh::init()
{
    gradx = NULL;
    grady = NULL;
    grad = NULL;
    dir = NULL;
    gradcp = NULL;

    highthresh = 2.5;
    lowthresh = 1.5;

}
/**
 * @brief CWxh::dt
 * @param img
 * @param img_nms
 * @return
 * 双阈值检测
 *
 */
QImage* CWxh::dt(QImage img,QImage *img_nms)
{
    QImage* img_dt=new QImage(img_nms->width(),img_nms->height(),QImage::Format_ARGB32);
    gradcp=new double*[img.width()];

    for(int i=0;i<img.width();++i)
        gradcp[i]=new double[img.height()];


    for(int i=0;i<img_dt->width();++i){
        for(int j=0;j<img_dt->height();++j){
            if(grad[i][j]>highthresh){//强边缘
                gradcp[i][j]=highthresh;
                img_dt->setPixel(i,j,edge);//GRH
            }
            else if(grad[i][j]>lowthresh){//弱边缘
                gradcp[i][j]=lowthresh;
                img_dt->setPixel(i,j,edge);//GRH
            }
            else{//非边缘
                gradcp[i][j]=0;
                img_dt->setPixel(i,j,notedge);//抑制 GRH
            }
        }
    }
    return img_dt;
}


/**
 * @brief CWxh::st
 * @param img
 * @return
 * 抑制孤立低阈值点
 *
 */
QImage* CWxh::st(QImage *img)
{
    QImage* img_st=new QImage(img->width(),img->height(),QImage::Format_ARGB32);
    int frac[8][2]={{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};
    for(int i=1;i<img_st->width()-1;++i){
        for(int j=1;j<img_st->height()-1;++j){
            if(gradcp[i][j]==highthresh){//强边缘
                img_st->setPixel(i,j,edge);//GRH
            }
            else if(gradcp[i][j]==lowthresh){//弱边缘
                for(int p=0;p<8;++p){
                    if(gradcp[i+frac[p][0]][j+frac[p][1]]==highthresh){
                        img_st->setPixel(i,j,edge);//边缘 GRH
                        break;
                    }
                    img_st->setPixel(i,j,notedge);//非边缘 GRH
                }
            }
            else//非边缘
                img_st->setPixel(i,j,notedge);
        }
    }
    return img_st;
}




/**
 * @brief CWxh::imgGauss
 * @param img
 * @return
 * 高斯模糊 卷积核为16*16
 */
QImage* CWxh::imgGauss(QImage *img){
    QRgb pixel;

    unsigned int *inPixels = (unsigned int *)img->bits();
    int width = img->width();
    int height = img->height();

    QImage *imgGauss = new QImage(width, height, QImage::Format_RGBX8888);
    int index = 0;
    int gaussianKernelWidth = 16;
    float gaussianKernelRadius = 2.0;
    float kernel[16][16];
    // 计算高斯卷积核
    for(int x=0; x<gaussianKernelWidth; x++)
    {
        for(int y=0; y<gaussianKernelWidth; y++)
        {
            kernel[x][y] = gaussian(x, y, gaussianKernelRadius);
        }
    }
    // 高斯模糊 -灰度图像
    int krr = (int) gaussianKernelRadius;
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            index = row * width + col;
            double weightSum = 0.0;
            double redSum = 0;
            for (int subRow = -krr; subRow <= krr; subRow++) {
                int nrow = row + subRow;
                if (nrow >= height || nrow < 0) {
                    nrow = 0;
                }
                for (int subCol = -krr; subCol <= krr; subCol++) {
                    int ncol = col + subCol;
                    if (ncol >= width || ncol <= 0) {
                        ncol = 0;
                    }
                    int index2 = nrow * width + ncol;
                    int tr1 = (inPixels[index2] >> 16) & 0xff;
                    redSum += tr1 * kernel[subRow + krr][subCol + krr];
                    weightSum += kernel[subRow + krr][subCol + krr];
                }
            }
            int gray = (int) (redSum / weightSum);
            pixel = qRgb(gray,gray,gray);
            imgGauss->setPixel(col,row,pixel);
        }
    }
    return imgGauss;
}

float CWxh::gaussian(float x, float y, float sigma){
    float xDistance = x * x;
    float yDistance = y * y;
    float sigma22 = 2 * sigma * sigma;
    float sigma22PI = (float) PI * sigma22;
    return (float) exp(-(xDistance + yDistance) / sigma22) / sigma22PI;
}






/**
 * @brief CWxh::overLap
 * @param img
 * @param path
 * @return
 * 边缘检测复合运算
 *
 */
QImage *CWxh::overLap(QImage *imgCanny, QString path){
    QRgb pixelimg,pixelcanny,pixelnew;
    QImage *img = new QImage(path);
    int width = img->width();
    int height = img->height();

    QImage *imgover = new QImage(width, height, QImage::Format_RGBX8888);
    int r,g,b;
    for(int i = 0; i < width; i++){
        for(int j = 0; j < height; j++)
        {
            pixelimg = img->pixel(i,j);
            pixelcanny = imgCanny->pixel(i,j);
            r = qRed(pixelimg)*0.4+qRed(pixelcanny)*0.6;

            g = qGreen(pixelimg)*0.4+qGreen(pixelcanny)*0.6;

            b = qBlue(pixelimg)*0.4+qBlue(pixelcanny)*0.6;

            pixelnew = qRgb(r,g,b);
            imgover->setPixel(i,j,pixelnew);
        }
    }

    return imgover;
}


/**
 * @brief CWxh::sign
 * @param img
 * @param img
 * @return
 * 数字签名
 */
QImage CWxh::sign(QImage imgsign, QImage img){

    QRgb pixel,sginpix,pixnew;

    int width = imgsign.width();
    int height = imgsign.height();
    int r,g,b;
    for(int i=0; i<width; i++){
        for(int j=0; j<height; j++)
        {
            pixel = img.pixel(i,j);
            sginpix = imgsign.pixel(i,j);
            if(qRed(sginpix)== 0){

                r = qRed(sginpix)*0.4+qRed(pixel)*0.6;
                g = qRed(sginpix)*0.4+qRed(pixel)*0.6;
                b = qRed(sginpix)*0.4+qRed(pixel)*0.6;

                pixnew = qRgb(r,g,b);
                img.setPixel(i,j,pixnew);
            }

        }
    }
    return img;
}


/**
 * @brief CWxh::imgErzhi
 * @param img
 * @return
 * 图像二值处理
 */
QImage *CWxh::imgErzhi(QImage *img,int n){
    QRgb pixel;
    int r,g,b,gray;
    QImage *imgerzhi = new QImage(img->width(), img->height(), QImage::Format_RGBX8888);
    for(int i=0; i<img->width(); i++){
        for(int j=0; j<img->height(); j++)
        {
            pixel = img->pixel(i,j);
            r = qRed(pixel);
            g = qGreen(pixel);
            b = qBlue(pixel);
            gray = r*0.3+g*0.59+b*0.11;
            if (gray <= n) {//固定阈值
                gray = 0;
            } else {
                gray = 255;
            }
            pixel = qRgb(gray,gray,gray);
            imgerzhi->setPixel(i,j,pixel);
        }
    }
    return imgerzhi;
}


/**
 * @brief CWxh::imgGamma
 * @param img
 * @param n
 * @return
 * gamma变换
 *
 */
QImage *CWxh::imgGamma(QImage *img, int n)
{
    QRgb pixel;
    int r,g,b;
    double ng = n*0.01;
    QImage *imggamma = new QImage(img->width(), img->height(), QImage::Format_RGBX8888);
    for(int i=0; i<img->width(); i++){
        for(int j=0; j<img->height(); j++)
        {
            pixel = img->pixel(i,j);
            r = pow(qRed(pixel)*1.0,ng);
            r = (r < 0) ? 0 : (r > 255) ? 255 : r;
            g = pow(qGreen(pixel)*1.0,ng);
            g = (g < 0) ? 0 : (g > 255) ? 255 : g;
            b = pow(qBlue(pixel)*1.0,ng);
            b = (b < 0) ? 0 : (b > 255) ? 255 : b;
            pixel = qRgb(r,g,b);
            imggamma->setPixel(i,j,pixel);
        }
    }
    return imggamma;
}
