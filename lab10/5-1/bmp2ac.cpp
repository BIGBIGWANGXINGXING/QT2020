#include "bmp2ac.h"
#include <QDebug>

bmp2ac::bmp2ac()
{

}
double **gradx;
double **grady;
double **grad;
double **dir;

double **gradcp;
double highthresh = 2.5;
double lowthresh = 1.5;


QRgb edge = qRgb(0,0,0);
QRgb notedge = qRgb(255,255,255);

void bmp2ac::init()
{
    gradx = NULL;
    grady = NULL;
    grad = NULL;
    dir = NULL;
    gradcp = NULL;

    highthresh = 2.5;
    lowthresh = 1.5;

}

QImage* bmp2ac::complex(QImage originImg,QImage nowImage,double oWeight,double nWeight)
{
    QImage* newImage = new QImage(originImg.width(),originImg.height(),QImage::Format_ARGB32);

    QColor originColor;
    QColor nowColor;

    for(int x = 0;x<originImg.width() ;x++)
    {
        for(int y= 0;y<originImg.height() ;y++)
        {
            int oR = 0;
            int oG = 0;
            int oB = 0;

            int nR = 0;
            int nG = 0;
            int nB = 0;

            originColor = QColor(originImg.pixel(x,y));
            nowColor = QColor(nowImage.pixel(x,y));

            oR = originColor.red();
            oG = originColor.green();
            oB = originColor.blue();

            nR = nowColor.red();
            nG = nowColor.green();
            nB = nowColor.blue();

            oR = qBound(0,(int)(oR*oWeight+nR*nWeight),255);
            oG = qBound(0,(int)(oG*oWeight+nG*nWeight),255);
            oB = qBound(0,(int)(oB*oWeight+nB*nWeight),255);

            newImage->setPixel(x,y,qRgb(oR,oG,oB));

        }
    }
    return newImage;
}


/**
 * @brief bmp2ac::changeBright
 * @param Img
 * @param iBrightValue
 * @return
 *
 * 亮度
 */
QImage bmp2ac::changeBright(QImage Img, int iBrightValue)
{
    int red, green, blue;
        int pixels = Img.width() * Img.height();
        unsigned int *data = (unsigned int *)Img.bits();

        for (int i = 0; i < pixels; ++i)
        {
            red= qRed(data[i])+ iBrightValue;
            red = (red < 0x00) ? 0x00 : (red > 0xff) ? 0xff : red;
            green= qGreen(data[i]) + iBrightValue;
            green = (green < 0x00) ? 0x00 : (green > 0xff) ? 0xff : green;
            blue= qBlue(data[i]) + iBrightValue;
            blue =  (blue  < 0x00) ? 0x00 : (blue  > 0xff) ? 0xff : blue ;
            data[i] = qRgba(red, green, blue, qAlpha(data[i]));
        }

        return Img;

}

QImage* bmp2ac::st(QImage *img_dt)
{
    QImage* img_st=new QImage(img_dt->width(),img_dt->height(),QImage::Format_ARGB32);
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

QImage* bmp2ac::dt(QImage img,QImage *img_nms)
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

QImage* bmp2ac::nms(QImage *img_guass)
{
    QImage* img_nms=new QImage(img_guass->width(),img_guass->height(),QImage::Format_ARGB32);

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
//            qDebug()<<"dir"<<endl;
//            qDebug()<<dir[i][j]<<endl;
//            qDebug()<<"grad1"<<endl;
//            qDebug()<<grad1<<endl;
//            qDebug()<<"highthresh"<<endl;
//            qDebug()<<highthresh<<endl;
//            qDebug()<<"grad2"<<endl;
//            qDebug()<<grad2<<endl;
//            qDebug()<< ""<<endl;

            if(grad[i][j]>grad1&&grad[i][j]>grad2){
                img_nms->setPixel(i,j,edge);//black边缘 GRH
                //                gradcp[i][j]=highthresh;
            }
            else{
                img_nms->setPixel(i,j,notedge);//white GRH
                grad[i][j]=0;
            }
        }
    }

    return img_nms;

}

void bmp2ac::calculate(QImage img,QImage *img_gray)
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

void generic_guess(double kernel[10][10],int size,double thelt){
    double pi=acos(-1);
    double sum=0;
    int mk=size/2;
    for(int i=0;i<size;++i){
        for(int j=0;j<size;++j){
            kernel[i][j]=exp(-sqrt(pow(i-mk,2)+pow(j-mk,2))/(2*thelt*thelt));
            kernel[i][j]/=2*pi*thelt*thelt;
            sum+=kernel[i][j];
        }
    }
    for(int i=0;i<size;++i){
        for(int j=0;j<size;++j){
            kernel[i][j]/=sum;
        }
    }
}

QImage* bmp2ac::img2guess(QImage *img_gray)
{
    int k=5;//高斯滤波器规模
    double kernel[10][10];
    generic_guess(kernel,k,1.4);
    QImage * t_img=new QImage(img_gray->width()+k-1,img_gray->height()+k-1,QImage::Format_ARGB32);
    QImage *img_guass=new QImage(img_gray->width(),img_gray->height(),QImage::Format_ARGB32);

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
            double temp=0;
            for(int ti=0;ti<k;++ti){
                for(int tj=0;tj<k;++tj){
                    temp+=kernel[ti][tj]*qRed(t_img->pixel(i-k/2+ti,j-k/2+tj));
                }
            }
            img_guass->setPixel(i-k/2,j-k/2,qRgb(temp,temp,temp));
        }
    }

    return img_guass;

}



/**
 * @brief bmp2ac::img2gray
 * @param img
 * @return
 * 灰度
 */
QImage* bmp2ac::img2gray(QImage img)
{
    QImage *img_gray=new QImage(img.width(),img.height(),QImage::Format_ARGB32);
    QColor old_color;
    int average;
    for(int i=0;i<img_gray->width();++i){
        for(int j=0;j<img_gray->height();++j){
            old_color=img.pixel(i,j);
            average=(old_color.red()+old_color.green()+old_color.blue())/3;
            img_gray->setPixel(i,j,qRgb(average,average,average));
        }
    }

    return img_gray;
}
bool bmp2ac::OpenBitmap(const char *filename)
{
    FILE *file = fopen(filename, "rb");
      if (file)
      {
          width=0;
          height=0;
          BITMAPFILEHEADER bf;
          BITMAPINFOHEADER bi;
          fread(&bf, sizeof(bf), 1, file);
          fread(&bi, sizeof(bi), 1, file);
          if(bi.biBitCount!=24)
              return false;
          if(bi.biCompression!=BI_RGB)
              return false;
          width=bi.biWidth;
          height=bi.biHeight;
          pixels=new RGBQUAD[width*height];
          uint32_t rowSize = (bi.biBitCount * width + 31) / 32 * 4;
          uint8_t *line = new uint8_t[rowSize];
          for (int y = 0; y < height; y++)
          {
              fread(line, rowSize, 1, file);
              for (int x = 0; x < width; x++)
              {
                  uint8_t *color = line + x * 3;
                  RGBQUAD *pixel = &pixels[(height-y-1) * width+x];
                  pixel->rgbBlue  = color[0];
                  pixel->rgbGreen = color[1];
                  pixel->rgbRed   = color[2];
              }
          }
          delete[] line;
          fclose(file);
          return true;
      }
      return false;
}

RGBQUAD bmp2ac::GetColor(int x, int y, int w, int h)
{
          int r = 0, g = 0, b = 0;
          for (int i = 0; i < w; i++)
          {
              if (i + x >= width) continue;
             for (int j = 0; j < h; j++)
              {
                  if (j + y >= height) continue;
                  RGBQUAD const& color = pixels[(y + j) * width + (x + i)];
                  r += color.rgbRed;
                  g += color.rgbGreen;
                  b += color.rgbBlue;
//                  qDebug()<<r<< endl ;
//                  qDebug()<<g<< endl ;
//                  qDebug()<<b<< endl ;
              }
          }
          return RGBQUAD{r / (w * h), g / (w * h),b / (w * h)};
}

char bmp2ac::ColorToCharacter(const RGBQUAD &color)
{
    int brightness = (color.rgbRed + color.rgbGreen + color.rgbBlue) / 3;
    static char const *characters = ".......... ";
    int len = strlen(characters);
    int span = 0xFF / len;
    int cidx = brightness / span;
    if (cidx == len)
        cidx--;
   return characters[cidx];
}

QString bmp2ac::OutputAscii()
{
          QString result = "";
          int x = width  / (width/6);
          int y = height / (height/12);
          for (int i = 0; i < height; i += y)
          {
              for (int j = 0; j < width; j += x)
              {
                  RGBQUAD color = GetColor(j, i, x, y);

                  result = result + ColorToCharacter(color);
//                  fprintf(file, "%c", ColorToCharacter(color));
                  //printf("%c", ColorToCharacter(color));
              }
              result = result +"\n";
//              fprintf(file, "\n");
              //printf("\n");
          }
          delete [] pixels;
          return result;
}
