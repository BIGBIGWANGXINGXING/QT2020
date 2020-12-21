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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_G;
    QAction *action_T;
    QAction *action_L;
    QAction *action_Y;
    QAction *action_O;
    QAction *action_V;
    QAction *action_B;
    QAction *action_E;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *save;
    QWidget *page_2;
    QWidget *videoWidget;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QSlider *brightnessSlider;
    QSlider *hueSlider;
    QSlider *contrastSlider;
    QSlider *saturationSlider;
    QLabel *label_16;
    QPushButton *pause_btn;
    QPushButton *play_btn;
    QSlider *VideohorizontalSlider;
    QPushButton *test;
    QWidget *page_3;
    QWidget *label_widget;
    QLabel *label_VideoWidget;
    QPushButton *twoValue;
    QPushButton *video_Avg;
    QPushButton *video_gamma;
    QPushButton *video_RGB;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_I;
    QMenu *menu_V;
    QMenu *menu_C;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QLabel *label_6;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QLabel *label_7;
    QSlider *horizontalSlider_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QSlider *horizontalSlider_R;
    QSlider *horizontalSlider_G;
    QSlider *horizontalSlider_B;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_3;
    QPushButton *toGray;
    QPushButton *toBlack;
    QPushButton *toAvg;
    QPushButton *toGamma;
    QPushButton *Border;
    QPushButton *return_btn;
    QPushButton *cut;
    QLabel *show_cut;
    QLabel *label_17;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(970, 700);
        MainWindow->setMinimumSize(QSize(950, 700));
        MainWindow->setMaximumSize(QSize(1000, 791));
        MainWindow->setMouseTracking(true);
        action_G = new QAction(MainWindow);
        action_G->setObjectName(QStringLiteral("action_G"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/heibai.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_G->setIcon(icon);
        action_T = new QAction(MainWindow);
        action_T->setObjectName(QStringLiteral("action_T"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/erzhihua.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_T->setIcon(icon1);
        action_L = new QAction(MainWindow);
        action_L->setObjectName(QStringLiteral("action_L"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/lvbo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_L->setIcon(icon2);
        action_Y = new QAction(MainWindow);
        action_Y->setObjectName(QStringLiteral("action_Y"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/gamma.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Y->setIcon(icon3);
        action_O = new QAction(MainWindow);
        action_O->setObjectName(QStringLiteral("action_O"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_O->setIcon(icon4);
        action_V = new QAction(MainWindow);
        action_V->setObjectName(QStringLiteral("action_V"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/video.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_V->setIcon(icon5);
        action_B = new QAction(MainWindow);
        action_B->setObjectName(QStringLiteral("action_B"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/bianyuanjiance.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_B->setIcon(icon6);
        action_E = new QAction(MainWindow);
        action_E->setObjectName(QStringLiteral("action_E"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_E->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 9, 681, 541));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 450, 350));
        label->setMinimumSize(QSize(450, 350));
        label->setMaximumSize(QSize(450, 350));
        label->setStyleSheet(QStringLiteral("border:5px solid #242424"));
        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 450, 671, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(horizontalLayoutWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setStyleSheet(QStringLiteral("border:1px solid #242424"));

        horizontalLayout->addWidget(label_1);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("border:1px solid #242424"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("border:1px solid #242424"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("border:1px solid #242424"));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("border:1px solid #242424"));

        horizontalLayout->addWidget(label_5);

        save = new QPushButton(page);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(280, 390, 93, 28));
        save->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        videoWidget = new QWidget(page_2);
        videoWidget->setObjectName(QStringLiteral("videoWidget"));
        videoWidget->setGeometry(QRect(140, 0, 400, 300));
        videoWidget->setMinimumSize(QSize(400, 300));
        videoWidget->setMaximumSize(QSize(400, 300));
        videoWidget->setStyleSheet(QStringLiteral(""));
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(150, 370, 131, 20));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(150, 440, 131, 16));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(450, 370, 101, 16));
        label_15 = new QLabel(page_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(450, 440, 131, 16));
        brightnessSlider = new QSlider(page_2);
        brightnessSlider->setObjectName(QStringLiteral("brightnessSlider"));
        brightnessSlider->setGeometry(QRect(140, 400, 141, 22));
        brightnessSlider->setOrientation(Qt::Horizontal);
        hueSlider = new QSlider(page_2);
        hueSlider->setObjectName(QStringLiteral("hueSlider"));
        hueSlider->setGeometry(QRect(410, 400, 141, 22));
        hueSlider->setOrientation(Qt::Horizontal);
        contrastSlider = new QSlider(page_2);
        contrastSlider->setObjectName(QStringLiteral("contrastSlider"));
        contrastSlider->setGeometry(QRect(140, 470, 141, 22));
        contrastSlider->setOrientation(Qt::Horizontal);
        saturationSlider = new QSlider(page_2);
        saturationSlider->setObjectName(QStringLiteral("saturationSlider"));
        saturationSlider->setGeometry(QRect(410, 470, 141, 22));
        saturationSlider->setOrientation(Qt::Horizontal);
        label_16 = new QLabel(page_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(280, 330, 141, 31));
        label_16->setStyleSheet(QStringLiteral("border:3px solid #242424"));
        label_16->setAlignment(Qt::AlignCenter);
        pause_btn = new QPushButton(page_2);
        pause_btn->setObjectName(QStringLiteral("pause_btn"));
        pause_btn->setGeometry(QRect(150, 340, 93, 28));
        pause_btn->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        play_btn = new QPushButton(page_2);
        play_btn->setObjectName(QStringLiteral("play_btn"));
        play_btn->setGeometry(QRect(450, 340, 93, 28));
        play_btn->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        VideohorizontalSlider = new QSlider(page_2);
        VideohorizontalSlider->setObjectName(QStringLiteral("VideohorizontalSlider"));
        VideohorizontalSlider->setGeometry(QRect(140, 310, 401, 22));
        VideohorizontalSlider->setOrientation(Qt::Horizontal);
        test = new QPushButton(page_2);
        test->setObjectName(QStringLiteral("test"));
        test->setGeometry(QRect(560, 80, 93, 28));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_widget = new QWidget(page_3);
        label_widget->setObjectName(QStringLiteral("label_widget"));
        label_widget->setGeometry(QRect(0, 0, 721, 501));
        label_VideoWidget = new QLabel(label_widget);
        label_VideoWidget->setObjectName(QStringLiteral("label_VideoWidget"));
        label_VideoWidget->setGeometry(QRect(100, 0, 500, 400));
        label_VideoWidget->setMinimumSize(QSize(500, 400));
        label_VideoWidget->setMaximumSize(QSize(500, 400));
        twoValue = new QPushButton(label_widget);
        twoValue->setObjectName(QStringLiteral("twoValue"));
        twoValue->setGeometry(QRect(60, 430, 93, 28));
        video_Avg = new QPushButton(label_widget);
        video_Avg->setObjectName(QStringLiteral("video_Avg"));
        video_Avg->setGeometry(QRect(220, 430, 93, 28));
        video_gamma = new QPushButton(label_widget);
        video_gamma->setObjectName(QStringLiteral("video_gamma"));
        video_gamma->setGeometry(QRect(370, 430, 91, 28));
        video_RGB = new QPushButton(label_widget);
        video_RGB->setObjectName(QStringLiteral("video_RGB"));
        video_RGB->setGeometry(QRect(530, 430, 93, 28));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 970, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_I = new QMenu(menuBar);
        menu_I->setObjectName(QStringLiteral("menu_I"));
        menu_V = new QMenu(menuBar);
        menu_V->setObjectName(QStringLiteral("menu_V"));
        menu_C = new QMenu(menuBar);
        menu_C->setObjectName(QStringLiteral("menu_C"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(100, 700));
        dockWidget->setMaximumSize(QSize(100, 700));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        label_6 = new QLabel(dockWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 91, 16));
        label_6->setStyleSheet(QStringLiteral("border:1px solid #242424"));
        horizontalSlider = new QSlider(dockWidgetContents);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(0, 20, 100, 22));
        horizontalSlider->setMinimumSize(QSize(100, 0));
        horizontalSlider->setMaximumSize(QSize(100, 16777215));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setPageStep(50);
        horizontalSlider->setOrientation(Qt::Horizontal);
        spinBox = new QSpinBox(dockWidgetContents);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(0, 70, 100, 22));
        spinBox->setMinimumSize(QSize(100, 0));
        spinBox->setMaximumSize(QSize(100, 16777215));
        spinBox->setMinimum(3);
        spinBox->setMaximum(15);
        spinBox->setSingleStep(2);
        label_7 = new QLabel(dockWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 50, 91, 16));
        label_7->setStyleSheet(QStringLiteral("border:1px solid #242424"));
        horizontalSlider_2 = new QSlider(dockWidgetContents);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(0, 120, 100, 22));
        horizontalSlider_2->setMinimumSize(QSize(100, 0));
        horizontalSlider_2->setMaximumSize(QSize(100, 16777215));
        horizontalSlider_2->setMaximum(50);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(dockWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 100, 91, 16));
        label_8->setStyleSheet(QStringLiteral("border:1px solid #242424"));
        label_9 = new QLabel(dockWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 290, 91, 16));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(dockWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 330, 91, 16));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(dockWidgetContents);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 380, 71, 16));
        label_11->setAlignment(Qt::AlignCenter);
        horizontalSlider_R = new QSlider(dockWidgetContents);
        horizontalSlider_R->setObjectName(QStringLiteral("horizontalSlider_R"));
        horizontalSlider_R->setGeometry(QRect(0, 300, 100, 22));
        horizontalSlider_R->setMinimumSize(QSize(100, 0));
        horizontalSlider_R->setMaximumSize(QSize(100, 16777215));
        horizontalSlider_R->setOrientation(Qt::Horizontal);
        horizontalSlider_G = new QSlider(dockWidgetContents);
        horizontalSlider_G->setObjectName(QStringLiteral("horizontalSlider_G"));
        horizontalSlider_G->setGeometry(QRect(0, 350, 100, 22));
        horizontalSlider_G->setMaximumSize(QSize(100, 16777215));
        horizontalSlider_G->setOrientation(Qt::Horizontal);
        horizontalSlider_B = new QSlider(dockWidgetContents);
        horizontalSlider_B->setObjectName(QStringLiteral("horizontalSlider_B"));
        horizontalSlider_B->setGeometry(QRect(0, 390, 100, 22));
        horizontalSlider_B->setMaximumSize(QSize(100, 16777215));
        horizontalSlider_B->setOrientation(Qt::Horizontal);
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidget_2->setMinimumSize(QSize(100, 700));
        dockWidget_2->setMaximumSize(QSize(100, 700));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        toGray = new QPushButton(dockWidgetContents_3);
        toGray->setObjectName(QStringLiteral("toGray"));
        toGray->setGeometry(QRect(10, 0, 93, 28));
        toGray->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        toBlack = new QPushButton(dockWidgetContents_3);
        toBlack->setObjectName(QStringLiteral("toBlack"));
        toBlack->setGeometry(QRect(10, 40, 93, 28));
        toBlack->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        toAvg = new QPushButton(dockWidgetContents_3);
        toAvg->setObjectName(QStringLiteral("toAvg"));
        toAvg->setGeometry(QRect(10, 80, 93, 28));
        toAvg->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        toGamma = new QPushButton(dockWidgetContents_3);
        toGamma->setObjectName(QStringLiteral("toGamma"));
        toGamma->setGeometry(QRect(10, 120, 93, 28));
        toGamma->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        Border = new QPushButton(dockWidgetContents_3);
        Border->setObjectName(QStringLiteral("Border"));
        Border->setGeometry(QRect(10, 160, 93, 28));
        Border->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        return_btn = new QPushButton(dockWidgetContents_3);
        return_btn->setObjectName(QStringLiteral("return_btn"));
        return_btn->setGeometry(QRect(10, 200, 93, 28));
        return_btn->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        cut = new QPushButton(dockWidgetContents_3);
        cut->setObjectName(QStringLiteral("cut"));
        cut->setGeometry(QRect(10, 240, 93, 28));
        cut->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        show_cut = new QLabel(dockWidgetContents_3);
        show_cut->setObjectName(QStringLiteral("show_cut"));
        show_cut->setGeometry(QRect(11, 300, 100, 100));
        show_cut->setMinimumSize(QSize(100, 100));
        show_cut->setMaximumSize(QSize(100, 100));
        show_cut->setStyleSheet(QStringLiteral("border:1px solid #242424"));
        label_17 = new QLabel(dockWidgetContents_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 280, 91, 20));
        dockWidget_2->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_2);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_I->menuAction());
        menuBar->addAction(menu_V->menuAction());
        menuBar->addAction(menu_C->menuAction());
        menu->addAction(action_O);
        menu->addAction(action_V);
        menu_I->addAction(action_G);
        menu_I->addAction(action_T);
        menu_I->addAction(action_L);
        menu_I->addAction(action_Y);
        menu_I->addAction(action_B);
        menu_C->addAction(action_E);
        mainToolBar->addAction(action_O);
        mainToolBar->addAction(action_V);
        mainToolBar->addAction(action_G);
        mainToolBar->addAction(action_T);
        mainToolBar->addAction(action_L);
        mainToolBar->addAction(action_B);
        mainToolBar->addAction(action_Y);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_G->setText(QApplication::translate("MainWindow", "\347\201\260\345\272\246\345\214\226(&G)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_G->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_T->setText(QApplication::translate("MainWindow", "\344\272\214\345\200\274\345\214\226(&T)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_T->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_L->setText(QApplication::translate("MainWindow", "\346\273\244\346\263\242(&L)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_L->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Y->setText(QApplication::translate("MainWindow", "\344\274\275\351\251\254\345\217\230\346\215\242(&Y)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Y->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_O->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266(&O)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_O->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_V->setText(QApplication::translate("MainWindow", "\n"
"\346\211\223\345\274\200\350\247\206\351\242\221(&V)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_V->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_B->setText(QApplication::translate("MainWindow", "\350\276\271\347\274\230\346\243\200\346\265\213(&B)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_B->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_E->setText(QApplication::translate("MainWindow", "\350\257\255\350\250\200\350\275\254\346\215\242(&E)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_E->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label->setText(QString());
        label_1->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\2071", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\2072", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\2073", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\2074", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\2075", Q_NULLPTR));
        save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\233\276\347\211\207", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\345\257\271\346\257\224\345\272\246\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\350\211\262\347\233\270\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "\351\245\261\345\222\214\345\272\246\357\274\232", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\350\260\203\350\212\202\357\274\232", Q_NULLPTR));
        pause_btn->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
        play_btn->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", Q_NULLPTR));
        test->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", Q_NULLPTR));
        label_VideoWidget->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\346\222\255\346\224\276", Q_NULLPTR));
        twoValue->setText(QApplication::translate("MainWindow", "\351\230\210\345\200\274\350\260\203\350\212\202", Q_NULLPTR));
        video_Avg->setText(QApplication::translate("MainWindow", "\346\273\244\346\263\242\350\260\203\350\212\202", Q_NULLPTR));
        video_gamma->setText(QApplication::translate("MainWindow", "\344\274\275\351\251\254\350\260\203\350\212\202", Q_NULLPTR));
        video_RGB->setText(QApplication::translate("MainWindow", "RGB\345\200\274\350\260\203\350\212\202", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", Q_NULLPTR));
        menu_I->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\345\244\204\347\220\206\357\274\210&I\357\274\211", Q_NULLPTR));
        menu_V->setTitle(QApplication::translate("MainWindow", "\350\247\206\351\242\221\346\222\255\346\224\276(&V)", Q_NULLPTR));
        menu_C->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&C)", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\351\230\210\345\200\274\350\260\203\350\212\202\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\346\273\244\346\263\242\350\260\203\350\212\202:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\344\274\275\351\251\254\345\200\274\350\260\203\350\212\202\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "R\345\200\274\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "G\345\200\274\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "B\345\200\274\357\274\232", Q_NULLPTR));
        toGray->setText(QApplication::translate("MainWindow", "\347\201\260\345\272\246\345\214\226", Q_NULLPTR));
        toBlack->setText(QApplication::translate("MainWindow", "\344\272\214\345\200\274\345\214\226", Q_NULLPTR));
        toAvg->setText(QApplication::translate("MainWindow", "3X3\346\273\244\346\263\242", Q_NULLPTR));
        toGamma->setText(QApplication::translate("MainWindow", "\344\274\275\351\251\254\345\217\230\346\215\242", Q_NULLPTR));
        Border->setText(QApplication::translate("MainWindow", "\350\276\271\347\274\230\346\243\200\346\265\213", Q_NULLPTR));
        return_btn->setText(QApplication::translate("MainWindow", "\345\216\237\347\224\273", Q_NULLPTR));
        cut->setText(QApplication::translate("MainWindow", "\346\210\252\345\233\276", Q_NULLPTR));
        show_cut->setText(QApplication::translate("MainWindow", "showLabel", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\347\232\204\346\210\252\345\233\276\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
