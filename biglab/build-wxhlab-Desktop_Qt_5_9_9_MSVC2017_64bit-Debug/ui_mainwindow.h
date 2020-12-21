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
    QAction *action_11;
    QAction *openfile;
    QAction *savafile;
    QAction *actionAbout_IMAGEW;
    QAction *openfiles;
    QAction *action;
    QAction *action_3;
    QAction *action_4;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_5;
    QMenu *menu_H;
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
    QDockWidget *braindockWidget;
    QWidget *dockWidgetContents_6;
    QLabel *brightlabel_2;
    QSlider *nSlider;
    QDockWidget *gammadockWidget;
    QWidget *dockWidgetContents_7;
    QLabel *brightlabel_3;
    QSlider *horizontalSlider;
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
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QStringLiteral("action_11"));
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setStyleSheet(QLatin1String("background-color: rgba(181, 201, 216, 15);\n"
"color: rgb(99, 219, 255);"));

        gridLayout->addWidget(mdiArea, 0, 1, 1, 1);

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
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(50, 38));
        dockWidget->setMaximumSize(QSize(50, 524287));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        brightnessButton = new QPushButton(dockWidgetContents);
        brightnessButton->setObjectName(QStringLiteral("brightnessButton"));
        brightnessButton->setGeometry(QRect(10, 10, 31, 31));
        brightnessButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\344\272\256\345\272\246.png);"));
        grayButton = new QPushButton(dockWidgetContents);
        grayButton->setObjectName(QStringLiteral("grayButton"));
        grayButton->setGeometry(QRect(10, 50, 31, 31));
        grayButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\347\201\260\345\272\246.png);"));
        binarizationButton = new QPushButton(dockWidgetContents);
        binarizationButton->setObjectName(QStringLiteral("binarizationButton"));
        binarizationButton->setGeometry(QRect(10, 90, 31, 31));
        binarizationButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\344\272\214\345\200\274\345\214\226.png);"));
        gammaButton = new QPushButton(dockWidgetContents);
        gammaButton->setObjectName(QStringLiteral("gammaButton"));
        gammaButton->setGeometry(QRect(10, 330, 31, 31));
        gammaButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\344\274\275\351\251\254\345\217\230\346\215\242.png);"));
        borderButton = new QPushButton(dockWidgetContents);
        borderButton->setObjectName(QStringLiteral("borderButton"));
        borderButton->setGeometry(QRect(10, 290, 31, 31));
        borderButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\350\276\271\347\274\230\345\244\215\345\220\210.png);"));
        gaussButton = new QPushButton(dockWidgetContents);
        gaussButton->setObjectName(QStringLiteral("gaussButton"));
        gaussButton->setGeometry(QRect(10, 250, 31, 31));
        gaussButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\351\253\230\346\226\257\346\273\244\346\263\242.png);"));
        sobelButton = new QPushButton(dockWidgetContents);
        sobelButton->setObjectName(QStringLiteral("sobelButton"));
        sobelButton->setGeometry(QRect(10, 210, 31, 31));
        sobelButton->setStyleSheet(QStringLiteral("border-image: url(:/icon/image/icon/Sobel.png);"));
        cannyButton = new QPushButton(dockWidgetContents);
        cannyButton->setObjectName(QStringLiteral("cannyButton"));
        cannyButton->setGeometry(QRect(10, 170, 31, 31));
        cannyButton->setStyleSheet(QStringLiteral("border-image: url(:/icon/image/icon/Canny.png);"));
        asciiButton = new QPushButton(dockWidgetContents);
        asciiButton->setObjectName(QStringLiteral("asciiButton"));
        asciiButton->setGeometry(QRect(10, 130, 31, 31));
        asciiButton->setStyleSheet(QStringLiteral("border-image: url(:/icon/image/icon/ASCII.png);"));
        filtrerButton = new QPushButton(dockWidgetContents);
        filtrerButton->setObjectName(QStringLiteral("filtrerButton"));
        filtrerButton->setGeometry(QRect(10, 370, 31, 31));
        filtrerButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\345\235\207\345\200\274\346\273\244\346\263\242.png);"));
        videoButton = new QPushButton(dockWidgetContents);
        videoButton->setObjectName(QStringLiteral("videoButton"));
        videoButton->setGeometry(QRect(10, 410, 31, 31));
        videoButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/image/icon/\350\247\206\351\242\221.png);"));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        brightdockWidget = new QDockWidget(MainWindow);
        brightdockWidget->setObjectName(QStringLiteral("brightdockWidget"));
        brightdockWidget->setMinimumSize(QSize(200, 200));
        brightdockWidget->setMaximumSize(QSize(200, 524287));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        brightlabel = new QLabel(dockWidgetContents_5);
        brightlabel->setObjectName(QStringLiteral("brightlabel"));
        brightlabel->setGeometry(QRect(10, 30, 54, 12));
        label_2 = new QLabel(dockWidgetContents_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 54, 12));
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
        brightdockWidget->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), brightdockWidget);
        braindockWidget = new QDockWidget(MainWindow);
        braindockWidget->setObjectName(QStringLiteral("braindockWidget"));
        braindockWidget->setMinimumSize(QSize(200, 100));
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        brightlabel_2 = new QLabel(dockWidgetContents_6);
        brightlabel_2->setObjectName(QStringLiteral("brightlabel_2"));
        brightlabel_2->setGeometry(QRect(10, 20, 54, 12));
        nSlider = new QSlider(dockWidgetContents_6);
        nSlider->setObjectName(QStringLiteral("nSlider"));
        nSlider->setGeometry(QRect(10, 50, 160, 19));
        nSlider->setMaximum(255);
        nSlider->setValue(95);
        nSlider->setOrientation(Qt::Horizontal);
        braindockWidget->setWidget(dockWidgetContents_6);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), braindockWidget);
        gammadockWidget = new QDockWidget(MainWindow);
        gammadockWidget->setObjectName(QStringLiteral("gammadockWidget"));
        gammadockWidget->setMinimumSize(QSize(80, 100));
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QStringLiteral("dockWidgetContents_7"));
        brightlabel_3 = new QLabel(dockWidgetContents_7);
        brightlabel_3->setObjectName(QStringLiteral("brightlabel_3"));
        brightlabel_3->setGeometry(QRect(10, 20, 54, 12));
        horizontalSlider = new QSlider(dockWidgetContents_7);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 50, 160, 19));
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setValue(50);
        horizontalSlider->setOrientation(Qt::Horizontal);
        gammadockWidget->setWidget(dockWidgetContents_7);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), gammadockWidget);
        filterdockWidget = new QDockWidget(MainWindow);
        filterdockWidget->setObjectName(QStringLiteral("filterdockWidget"));
        filterdockWidget->setMinimumSize(QSize(200, 100));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QStringLiteral("dockWidgetContents_8"));
        brightlabel_4 = new QLabel(dockWidgetContents_8);
        brightlabel_4->setObjectName(QStringLiteral("brightlabel_4"));
        brightlabel_4->setGeometry(QRect(10, 20, 54, 12));
        spinBox = new QSpinBox(dockWidgetContents_8);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(50, 20, 61, 16));
        filterdockWidget->setWidget(dockWidgetContents_8);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), filterdockWidget);
        asciidockWidget = new QDockWidget(MainWindow);
        asciidockWidget->setObjectName(QStringLiteral("asciidockWidget"));
        asciidockWidget->setMinimumSize(QSize(200, 100));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/image/icon/ASCII.png"), QSize(), QIcon::Normal, QIcon::Off);
        asciidockWidget->setWindowIcon(icon3);
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QStringLiteral("dockWidgetContents_9"));
        brightlabel_5 = new QLabel(dockWidgetContents_9);
        brightlabel_5->setObjectName(QStringLiteral("brightlabel_5"));
        brightlabel_5->setGeometry(QRect(20, 30, 54, 12));
        lineEdit = new QLineEdit(dockWidgetContents_9);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 20, 113, 20));
        asciidockWidget->setWidget(dockWidgetContents_9);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), asciidockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu->addAction(action_N);
        menu->addAction(action_3);
        menu->addAction(action_S);
        menu->addAction(action_H);
        menu->addAction(action_11);
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
        toolBar->addAction(openfiles);
        toolBar->addAction(openfile);
        toolBar->addAction(savafile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_N->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\215\225\346\226\207\344\273\266(&N)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_S->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", Q_NULLPTR));
        action_H->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&H)", Q_NULLPTR));
        action_Z->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&Z)", Q_NULLPTR));
        action_6->setText(QApplication::translate("MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242", Q_NULLPTR));
        action_7->setText(QApplication::translate("MainWindow", "\347\201\260\345\272\246\350\275\254\345\214\226", Q_NULLPTR));
        actionASCII->setText(QApplication::translate("MainWindow", "ASCII\350\275\254\345\214\226", Q_NULLPTR));
        action_Sobel->setText(QApplication::translate("MainWindow", "\350\276\271\347\274\230\346\217\220\345\217\226Sobel\347\256\227\345\255\220", Q_NULLPTR));
        action_Canny->setText(QApplication::translate("MainWindow", "\350\276\271\347\274\230\346\217\220\345\217\226Canny\347\256\227\345\255\220", Q_NULLPTR));
        action_8->setText(QApplication::translate("MainWindow", "\350\276\271\347\274\230\345\244\215\345\220\210\350\277\220\347\256\227", Q_NULLPTR));
        action_9->setText(QApplication::translate("MainWindow", "\344\272\214\345\200\274\345\214\226", Q_NULLPTR));
        action_10->setText(QApplication::translate("MainWindow", "\344\274\275\351\251\254\345\217\230\346\215\242", Q_NULLPTR));
        action_11->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\345\244\204\347\220\206", Q_NULLPTR));
        openfile->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\215\225\346\226\207\344\273\266", Q_NULLPTR));
        savafile->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        actionAbout_IMAGEW->setText(QApplication::translate("MainWindow", "About Image", Q_NULLPTR));
        openfiles->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\244\232\346\226\207\344\273\266", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\351\253\230\346\226\257\346\250\241\347\263\212", Q_NULLPTR));
        action_3->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\244\232\346\226\207\344\273\266(&P)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_3->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_4->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246/\345\257\271\346\257\224\345\272\246", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217", Q_NULLPTR));
        menu_5->setTitle(QApplication::translate("MainWindow", "\346\273\244\351\225\234", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
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
        brightdockWidget->setWindowTitle(QApplication::translate("MainWindow", "\344\272\256\345\272\246/\345\257\271\346\257\224\345\272\246\345\272\246", Q_NULLPTR));
        brightlabel->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\257\271\346\257\224\345\272\246\357\274\232", Q_NULLPTR));
        braindockWidget->setWindowTitle(QApplication::translate("MainWindow", "\344\272\214\345\200\274\345\214\226", Q_NULLPTR));
        brightlabel_2->setText(QApplication::translate("MainWindow", "\351\230\210\345\200\274\357\274\232", Q_NULLPTR));
        gammadockWidget->setWindowTitle(QApplication::translate("MainWindow", "Gamma\345\217\230\346\215\242", Q_NULLPTR));
        brightlabel_3->setText(QApplication::translate("MainWindow", "\347\241\254\345\272\246\357\274\232", Q_NULLPTR));
        filterdockWidget->setWindowTitle(QApplication::translate("MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242", Q_NULLPTR));
        brightlabel_4->setText(QApplication::translate("MainWindow", "\347\241\254\345\272\246\357\274\232", Q_NULLPTR));
        asciidockWidget->setWindowTitle(QApplication::translate("MainWindow", "ASCII\347\240\201\350\275\254\346\215\242", Q_NULLPTR));
        brightlabel_5->setText(QApplication::translate("MainWindow", "\347\240\201\345\200\274\357\274\232", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245ascii\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
