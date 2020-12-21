/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_S;
    QAction *action_H;
    QAction *action_Z;
    QAction *action_6;
    QAction *action_7;
    QAction *actionASCII;
    QAction *action_Sobel;
    QAction *action_Canny;
    QAction *action_8;
    QAction *action_9;
    QAction *action_10;
    QAction *openfile;
    QAction *savafile;
    QAction *actionAbout_IMAGEW;
    QAction *openfiles;
    QAction *action;
    QAction *action_3;
    QAction *action_4;
    QAction *action_ascii;
    QAction *action_2;
    QAction *action_5;
    QAction *action_L;
    QAction *actionSmooth;
    QAction *actionMosaic;
    QAction *actionBinarization;
    QAction *actionEdge_Detection;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_5;
    QMenu *menu_H;
    QMenu *menu_4;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QPushButton *brightnessButton;
    QPushButton *grayButton;
    QPushButton *binarizationButton;
    QPushButton *gammaButton;
    QPushButton *borderButton;
    QPushButton *gaussButton;
    QPushButton *sobelButton;
    QPushButton *cannyButton;
    QPushButton *asciiButton;
    QPushButton *filtrerButton;
    QPushButton *videoButton;
    QToolBar *toolBar;
    QDockWidget *brightdockWidget;
    QWidget *dockWidgetContents_5;
    QLabel *brightlabel;
    QLabel *label_2;
    QSlider *birghtness;
    QSlider *contrast;
    QLabel *labelb;
    QLabel *labelc;
    QDockWidget *braindockWidget;
    QWidget *dockWidgetContents_6;
    QLabel *brightlabel_2;
    QSlider *nSlider;
    QLabel *labelt;
    QDockWidget *gammadockWidget;
    QWidget *dockWidgetContents_7;
    QLabel *brightlabel_3;
    QSlider *horizontalSlider;
    QLabel *labelh;
    QDockWidget *filterdockWidget;
    QWidget *dockWidgetContents_8;
    QLabel *brightlabel_4;
    QSpinBox *spinBox;
    QDockWidget *asciidockWidget;
    QWidget *dockWidgetContents_9;
    QLabel *brightlabel_5;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 678);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(111, 111, 111);"));
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QStringLiteral("action_N"));
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QStringLiteral("action_S"));
        action_H = new QAction(MainWindow);
        action_H->setObjectName(QStringLiteral("action_H"));
        action_Z = new QAction(MainWindow);
        action_Z->setObjectName(QStringLiteral("action_Z"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        actionASCII = new QAction(MainWindow);
        actionASCII->setObjectName(QStringLiteral("actionASCII"));
        action_Sobel = new QAction(MainWindow);
        action_Sobel->setObjectName(QStringLiteral("action_Sobel"));
        action_Canny = new QAction(MainWindow);
        action_Canny->setObjectName(QStringLiteral("action_Canny"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QStringLiteral("action_9"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QStringLiteral("action_10"));
        openfile = new QAction(MainWindow);
        openfile->setObjectName(QStringLiteral("openfile"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openfile->setIcon(icon);
        savafile = new QAction(MainWindow);
        savafile->setObjectName(QStringLiteral("savafile"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/icon/sava.png"), QSize(), QIcon::Normal, QIcon::Off);
        savafile->setIcon(icon1);
        actionAbout_IMAGEW = new QAction(MainWindow);
        actionAbout_IMAGEW->setObjectName(QStringLiteral("actionAbout_IMAGEW"));
        openfiles = new QAction(MainWindow);
        openfiles->setObjectName(QStringLiteral("openfiles"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/icon/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        openfiles->setIcon(icon2);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_ascii = new QAction(MainWindow);
        action_ascii->setObjectName(QStringLiteral("action_ascii"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/image/icon/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_ascii->setIcon(icon3);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_L = new QAction(MainWindow);
        action_L->setObjectName(QStringLiteral("action_L"));
        actionSmooth = new QAction(MainWindow);
        actionSmooth->setObjectName(QStringLiteral("actionSmooth"));
        actionMosaic = new QAction(MainWindow);
        actionMosaic->setObjectName(QStringLiteral("actionMosaic"));
        actionBinarization = new QAction(MainWindow);
        actionBinarization->setObjectName(QStringLiteral("actionBinarization"));
        actionEdge_Detection = new QAction(MainWindow);
        actionEdge_Detection->setObjectName(QStringLiteral("actionEdge_Detection"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setStyleSheet(QStringLiteral("background-color: rgb(77, 77, 77);"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(50, 44));
        dockWidget->setMaximumSize(QSize(50, 524287));
        dockWidget->setStyleSheet(QStringLiteral("background-color: rgb(111, 111, 111);"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        brightnessButton = new QPushButton(dockWidgetContents);
        brightnessButton->setObjectName(QStringLiteral("brightnessButton"));
        brightnessButton->setGeometry(QRect(10, 10, 31, 31));
        brightnessButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\344\272\256\345\272\246.png);\n"
"background-color: rgb(77, 77, 77);"));
        grayButton = new QPushButton(dockWidgetContents);
        grayButton->setObjectName(QStringLiteral("grayButton"));
        grayButton->setGeometry(QRect(10, 50, 31, 31));
        grayButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\347\201\260\345\272\246.png);\n"
"background-color: rgb(77, 77, 77);"));
        binarizationButton = new QPushButton(dockWidgetContents);
        binarizationButton->setObjectName(QStringLiteral("binarizationButton"));
        binarizationButton->setGeometry(QRect(10, 90, 31, 31));
        binarizationButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\344\272\214\345\200\274\345\214\226.png);\n"
"background-color: rgb(77, 77, 77);"));
        gammaButton = new QPushButton(dockWidgetContents);
        gammaButton->setObjectName(QStringLiteral("gammaButton"));
        gammaButton->setGeometry(QRect(10, 330, 31, 31));
        gammaButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\344\274\275\351\251\254\345\217\230\346\215\242.png);\n"
"background-color: rgb(77, 77, 77);"));
        borderButton = new QPushButton(dockWidgetContents);
        borderButton->setObjectName(QStringLiteral("borderButton"));
        borderButton->setGeometry(QRect(10, 290, 31, 31));
        borderButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\350\276\271\347\274\230\345\244\215\345\220\210.png);\n"
"background-color: rgb(77, 77, 77);"));
        gaussButton = new QPushButton(dockWidgetContents);
        gaussButton->setObjectName(QStringLiteral("gaussButton"));
        gaussButton->setGeometry(QRect(10, 250, 31, 31));
        gaussButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\351\253\230\346\226\257\346\273\244\346\263\242.png);\n"
"background-color: rgb(77, 77, 77);"));
        sobelButton = new QPushButton(dockWidgetContents);
        sobelButton->setObjectName(QStringLiteral("sobelButton"));
        sobelButton->setGeometry(QRect(10, 210, 31, 31));
        sobelButton->setStyleSheet(QLatin1String("border-image: url(:/icon/image/icon/Sobel.png);\n"
"background-color: rgb(77, 77, 77);"));
        cannyButton = new QPushButton(dockWidgetContents);
        cannyButton->setObjectName(QStringLiteral("cannyButton"));
        cannyButton->setGeometry(QRect(10, 170, 31, 31));
        cannyButton->setStyleSheet(QLatin1String("border-image: url(:/icon/image/icon/Canny.png);\n"
"background-color: rgb(77, 77, 77);"));
        asciiButton = new QPushButton(dockWidgetContents);
        asciiButton->setObjectName(QStringLiteral("asciiButton"));
        asciiButton->setGeometry(QRect(10, 130, 31, 31));
        asciiButton->setStyleSheet(QLatin1String("border-image: url(:/icon/image/icon/ASCII.png);\n"
"background-color: rgb(77, 77, 77);"));
        filtrerButton = new QPushButton(dockWidgetContents);
        filtrerButton->setObjectName(QStringLiteral("filtrerButton"));
        filtrerButton->setGeometry(QRect(10, 370, 31, 31));
        filtrerButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\345\235\207\345\200\274\346\273\244\346\263\242.png);\n"
"background-color: rgb(77, 77, 77);"));
        videoButton = new QPushButton(dockWidgetContents);
        videoButton->setObjectName(QStringLiteral("videoButton"));
        videoButton->setGeometry(QRect(10, 410, 31, 31));
        videoButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\350\247\206\351\242\221.png);\n"
"background-color: rgb(77, 77, 77);"));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setMaximumSize(QSize(16777215, 16777215));
        toolBar->setStyleSheet(QStringLiteral("background-color: rgb(111, 111, 111);"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        brightdockWidget = new QDockWidget(MainWindow);
        brightdockWidget->setObjectName(QStringLiteral("brightdockWidget"));
        brightdockWidget->setMinimumSize(QSize(200, 200));
        brightdockWidget->setMaximumSize(QSize(200, 524287));
        brightdockWidget->setStyleSheet(QStringLiteral("font: 10pt \"Elephant\";"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        brightlabel = new QLabel(dockWidgetContents_5);
        brightlabel->setObjectName(QStringLiteral("brightlabel"));
        brightlabel->setGeometry(QRect(10, 30, 91, 16));
        label_2 = new QLabel(dockWidgetContents_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 81, 16));
        birghtness = new QSlider(dockWidgetContents_5);
        birghtness->setObjectName(QStringLiteral("birghtness"));
        birghtness->setGeometry(QRect(10, 60, 160, 19));
        birghtness->setMinimum(-255);
        birghtness->setMaximum(255);
        birghtness->setOrientation(Qt::Horizontal);
        contrast = new QSlider(dockWidgetContents_5);
        contrast->setObjectName(QStringLiteral("contrast"));
        contrast->setGeometry(QRect(10, 130, 160, 19));
        contrast->setMinimum(-100);
        contrast->setMaximum(100);
        contrast->setOrientation(Qt::Horizontal);
        labelb = new QLabel(dockWidgetContents_5);
        labelb->setObjectName(QStringLiteral("labelb"));
        labelb->setGeometry(QRect(110, 30, 54, 12));
        labelc = new QLabel(dockWidgetContents_5);
        labelc->setObjectName(QStringLiteral("labelc"));
        labelc->setGeometry(QRect(110, 100, 54, 20));
        brightdockWidget->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), brightdockWidget);
        braindockWidget = new QDockWidget(MainWindow);
        braindockWidget->setObjectName(QStringLiteral("braindockWidget"));
        braindockWidget->setMinimumSize(QSize(200, 100));
        QFont font;
        font.setFamily(QStringLiteral("Elephant"));
        font.setPointSize(10);
        braindockWidget->setFont(font);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        brightlabel_2 = new QLabel(dockWidgetContents_6);
        brightlabel_2->setObjectName(QStringLiteral("brightlabel_2"));
        brightlabel_2->setGeometry(QRect(10, 20, 81, 16));
        brightlabel_2->setStyleSheet(QStringLiteral("font: 10pt \"Elephant\";"));
        nSlider = new QSlider(dockWidgetContents_6);
        nSlider->setObjectName(QStringLiteral("nSlider"));
        nSlider->setGeometry(QRect(10, 50, 160, 19));
        nSlider->setMaximum(255);
        nSlider->setValue(95);
        nSlider->setOrientation(Qt::Horizontal);
        labelt = new QLabel(dockWidgetContents_6);
        labelt->setObjectName(QStringLiteral("labelt"));
        labelt->setGeometry(QRect(110, 20, 54, 20));
        braindockWidget->setWidget(dockWidgetContents_6);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), braindockWidget);
        gammadockWidget = new QDockWidget(MainWindow);
        gammadockWidget->setObjectName(QStringLiteral("gammadockWidget"));
        gammadockWidget->setMinimumSize(QSize(200, 100));
        gammadockWidget->setStyleSheet(QStringLiteral("font: 10pt \"Elephant\";"));
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QStringLiteral("dockWidgetContents_7"));
        brightlabel_3 = new QLabel(dockWidgetContents_7);
        brightlabel_3->setObjectName(QStringLiteral("brightlabel_3"));
        brightlabel_3->setGeometry(QRect(10, 20, 81, 16));
        horizontalSlider = new QSlider(dockWidgetContents_7);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 50, 160, 19));
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setValue(50);
        horizontalSlider->setOrientation(Qt::Horizontal);
        labelh = new QLabel(dockWidgetContents_7);
        labelh->setObjectName(QStringLiteral("labelh"));
        labelh->setGeometry(QRect(100, 20, 54, 20));
        gammadockWidget->setWidget(dockWidgetContents_7);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), gammadockWidget);
        filterdockWidget = new QDockWidget(MainWindow);
        filterdockWidget->setObjectName(QStringLiteral("filterdockWidget"));
        filterdockWidget->setMinimumSize(QSize(200, 100));
        filterdockWidget->setStyleSheet(QStringLiteral("font: 10pt \"Elephant\";"));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QStringLiteral("dockWidgetContents_8"));
        brightlabel_4 = new QLabel(dockWidgetContents_8);
        brightlabel_4->setObjectName(QStringLiteral("brightlabel_4"));
        brightlabel_4->setGeometry(QRect(10, 20, 131, 16));
        spinBox = new QSpinBox(dockWidgetContents_8);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(10, 40, 161, 16));
        filterdockWidget->setWidget(dockWidgetContents_8);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), filterdockWidget);
        asciidockWidget = new QDockWidget(MainWindow);
        asciidockWidget->setObjectName(QStringLiteral("asciidockWidget"));
        asciidockWidget->setMinimumSize(QSize(200, 100));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/image/icon/ASCII.png"), QSize(), QIcon::Normal, QIcon::Off);
        asciidockWidget->setWindowIcon(icon4);
        asciidockWidget->setStyleSheet(QStringLiteral("font: 10pt \"Elephant\";"));
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QStringLiteral("dockWidgetContents_9"));
        brightlabel_5 = new QLabel(dockWidgetContents_9);
        brightlabel_5->setObjectName(QStringLiteral("brightlabel_5"));
        brightlabel_5->setGeometry(QRect(10, 20, 161, 16));
        lineEdit = new QLineEdit(dockWidgetContents_9);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 161, 20));
        asciidockWidget->setWidget(dockWidgetContents_9);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), asciidockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu->addAction(action_N);
        menu->addAction(action_3);
        menu->addAction(action_S);
        menu->addAction(action_H);
        menu_2->addAction(action_Z);
        menu_3->addAction(action_4);
        menu_5->addAction(action_6);
        menu_5->addAction(action_7);
        menu_5->addAction(actionASCII);
        menu_5->addAction(action_Sobel);
        menu_5->addAction(action_Canny);
        menu_5->addAction(action_8);
        menu_5->addAction(action_9);
        menu_5->addAction(action_10);
        menu_5->addAction(action);
        menu_H->addAction(actionAbout_IMAGEW);
        menu_H->addAction(action_L);
        menu_4->addAction(action_2);
        menu_4->addAction(action_5);
        menu_4->addAction(actionSmooth);
        menu_4->addAction(actionMosaic);
        menu_4->addAction(actionBinarization);
        menu_4->addAction(actionEdge_Detection);
        toolBar->addAction(openfiles);
        toolBar->addAction(openfile);
        toolBar->addAction(savafile);
        toolBar->addAction(action_ascii);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_N->setText(QApplication::translate("MainWindow", "Open File(&N)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_S->setText(QApplication::translate("MainWindow", "Save(&S)", Q_NULLPTR));
        action_H->setText(QApplication::translate("MainWindow", "Svae Other(&H)", Q_NULLPTR));
        action_Z->setText(QApplication::translate("MainWindow", "Cancle(&Z)", Q_NULLPTR));
        action_6->setText(QApplication::translate("MainWindow", "Mean filtering", Q_NULLPTR));
        action_7->setText(QApplication::translate("MainWindow", "Gray scale conversion", Q_NULLPTR));
        actionASCII->setText(QApplication::translate("MainWindow", "ASCII conversion", Q_NULLPTR));
        action_Sobel->setText(QApplication::translate("MainWindow", "Sobel edge extraction", Q_NULLPTR));
        action_Canny->setText(QApplication::translate("MainWindow", "Canny edge detection", Q_NULLPTR));
        action_8->setText(QApplication::translate("MainWindow", "Edge recombination\n"
"", Q_NULLPTR));
        action_9->setText(QApplication::translate("MainWindow", "Binarization", Q_NULLPTR));
        action_10->setText(QApplication::translate("MainWindow", "Gamma transformation", Q_NULLPTR));
        openfile->setText(QApplication::translate("MainWindow", "Open file", Q_NULLPTR));
        savafile->setText(QApplication::translate("MainWindow", "Save file", Q_NULLPTR));
        actionAbout_IMAGEW->setText(QApplication::translate("MainWindow", "About Image", Q_NULLPTR));
        openfiles->setText(QApplication::translate("MainWindow", "Open files", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "Gaussian filtering", Q_NULLPTR));
        action_3->setText(QApplication::translate("MainWindow", "Open Files(&P)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_3->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_4->setText(QApplication::translate("MainWindow", "Brightness / contrast", Q_NULLPTR));
        action_ascii->setText(QApplication::translate("MainWindow", "Save ASCII", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_ascii->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_2->setText(QApplication::translate("MainWindow", "Local video", Q_NULLPTR));
        action_5->setText(QApplication::translate("MainWindow", "Get camera", Q_NULLPTR));
        action_L->setText(QApplication::translate("MainWindow", "Transtlater(&L)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_L->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSmooth->setText(QApplication::translate("MainWindow", "Smooth", Q_NULLPTR));
        actionMosaic->setText(QApplication::translate("MainWindow", "Mosaic", Q_NULLPTR));
        actionBinarization->setText(QApplication::translate("MainWindow", "Binarization", Q_NULLPTR));
        actionEdge_Detection->setText(QApplication::translate("MainWindow", "Edge Detection", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "Image", Q_NULLPTR));
        menu_5->setTitle(QApplication::translate("MainWindow", "Filter", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "Help(&H)", Q_NULLPTR));
        menu_4->setTitle(QApplication::translate("MainWindow", "Video", Q_NULLPTR));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267\347\256\261", Q_NULLPTR));
        brightnessButton->setText(QString());
        grayButton->setText(QString());
        binarizationButton->setText(QString());
        gammaButton->setText(QString());
        borderButton->setText(QString());
        gaussButton->setText(QString());
        sobelButton->setText(QString());
        cannyButton->setText(QString());
        asciiButton->setText(QString());
        filtrerButton->setText(QString());
        videoButton->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
        brightdockWidget->setWindowTitle(QApplication::translate("MainWindow", "Brightness / contrast", Q_NULLPTR));
        brightlabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#f5f5f5;\">Brightness\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#f0f0f0;\">Constrast\357\274\232</span></p></body></html>", Q_NULLPTR));
        labelb->setText(QString());
        labelc->setText(QString());
        braindockWidget->setWindowTitle(QApplication::translate("MainWindow", "Binarization", Q_NULLPTR));
        brightlabel_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#f1f1f1;\">Threshold:</span></p></body></html>", Q_NULLPTR));
        labelt->setText(QString());
        gammadockWidget->setWindowTitle(QApplication::translate("MainWindow", "Gamma transformation", Q_NULLPTR));
        brightlabel_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ececec;\">Hardness\357\274\232</span></p></body></html>", Q_NULLPTR));
        labelh->setText(QString());
        filterdockWidget->setWindowTitle(QApplication::translate("MainWindow", "Mean filtering", Q_NULLPTR));
        brightlabel_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#f1f1f1;\">Hardness\357\274\232</span></p></body></html>", Q_NULLPTR));
        asciidockWidget->setWindowTitle(QApplication::translate("MainWindow", "ASCII conversion", Q_NULLPTR));
        brightlabel_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#f8f8f8;\">Code value\357\274\232</span></p></body></html>", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Input ASCII code", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
