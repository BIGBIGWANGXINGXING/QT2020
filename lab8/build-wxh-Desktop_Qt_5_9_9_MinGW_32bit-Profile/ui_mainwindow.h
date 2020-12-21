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
#include <QtWidgets/QFontComboBox>
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
    QAction *filenew;
    QAction *fileopen;
    QAction *change_2;
    QAction *filesave;
    QAction *action_o;
    QAction *action_ASCII;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QPushButton *pushButton;
    QFontComboBox *fontComboBox;
    QPushButton *change;
    QLineEdit *lineEdit;
    QPushButton *changeToGray;
    QPushButton *changeFilter;
    QSpinBox *spinBox;
    QSlider *birghtness;
    QLabel *label;
    QLabel *label_2;
    QSlider *contrast;
    QPushButton *brightButton;
    QPushButton *gaussButton;
    QPushButton *sobelButton;
    QPushButton *cannyButton;
    QPushButton *overButton;
    QPushButton *signButton;
    QPushButton *saveimgButton;
    QPushButton *erButton;
    QSlider *nSlider;
    QPushButton *gammaButton;
    QSlider *horizontalSlider;
    QPushButton *openVideoButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(760, 703);
        filenew = new QAction(MainWindow);
        filenew->setObjectName(QStringLiteral("filenew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../2020-2021-1 QT\344\270\212\346\234\272\344\273\273\345\212\2415-\345\272\224\347\224\250\347\250\213\345\272\217\344\270\273\347\252\227\345\217\243/images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        filenew->setIcon(icon);
        fileopen = new QAction(MainWindow);
        fileopen->setObjectName(QStringLiteral("fileopen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../2020-2021-1 QT\344\270\212\346\234\272\344\273\273\345\212\2415-\345\272\224\347\224\250\347\250\213\345\272\217\344\270\273\347\252\227\345\217\243/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileopen->setIcon(icon1);
        change_2 = new QAction(MainWindow);
        change_2->setObjectName(QStringLiteral("change_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../2020-2021-1 QT\344\270\212\346\234\272\344\273\273\345\212\2415-\345\272\224\347\224\250\347\250\213\345\272\217\344\270\273\347\252\227\345\217\243/images/change.png"), QSize(), QIcon::Normal, QIcon::Off);
        change_2->setIcon(icon2);
        filesave = new QAction(MainWindow);
        filesave->setObjectName(QStringLiteral("filesave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../2020-2021-1 QT\344\270\212\346\234\272\344\273\273\345\212\2415-\345\272\224\347\224\250\347\250\213\345\272\217\344\270\273\347\252\227\345\217\243/images/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        filesave->setIcon(icon3);
        action_o = new QAction(MainWindow);
        action_o->setObjectName(QStringLiteral("action_o"));
        action_ASCII = new QAction(MainWindow);
        action_ASCII->setObjectName(QStringLiteral("action_ASCII"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 760, 22));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget_3 = new QDockWidget(MainWindow);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        dockWidget_3->setMinimumSize(QSize(200, 38));
        dockWidget_3->setMaximumSize(QSize(200, 524287));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        pushButton = new QPushButton(dockWidgetContents_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 30, 91, 23));
        fontComboBox = new QFontComboBox(dockWidgetContents_3);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(0, 150, 91, 21));
        change = new QPushButton(dockWidgetContents_3);
        change->setObjectName(QStringLiteral("change"));
        change->setGeometry(QRect(0, 70, 91, 23));
        lineEdit = new QLineEdit(dockWidgetContents_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 110, 91, 20));
        changeToGray = new QPushButton(dockWidgetContents_3);
        changeToGray->setObjectName(QStringLiteral("changeToGray"));
        changeToGray->setGeometry(QRect(0, 190, 91, 23));
        changeFilter = new QPushButton(dockWidgetContents_3);
        changeFilter->setObjectName(QStringLiteral("changeFilter"));
        changeFilter->setGeometry(QRect(0, 230, 91, 23));
        spinBox = new QSpinBox(dockWidgetContents_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(0, 270, 91, 21));
        birghtness = new QSlider(dockWidgetContents_3);
        birghtness->setObjectName(QStringLiteral("birghtness"));
        birghtness->setGeometry(QRect(0, 330, 91, 19));
        birghtness->setMinimum(-255);
        birghtness->setMaximum(255);
        birghtness->setOrientation(Qt::Horizontal);
        label = new QLabel(dockWidgetContents_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 310, 54, 12));
        label_2 = new QLabel(dockWidgetContents_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 360, 54, 12));
        contrast = new QSlider(dockWidgetContents_3);
        contrast->setObjectName(QStringLiteral("contrast"));
        contrast->setGeometry(QRect(0, 380, 91, 19));
        contrast->setMinimum(-100);
        contrast->setMaximum(100);
        contrast->setOrientation(Qt::Horizontal);
        brightButton = new QPushButton(dockWidgetContents_3);
        brightButton->setObjectName(QStringLiteral("brightButton"));
        brightButton->setGeometry(QRect(0, 410, 75, 23));
        gaussButton = new QPushButton(dockWidgetContents_3);
        gaussButton->setObjectName(QStringLiteral("gaussButton"));
        gaussButton->setGeometry(QRect(0, 450, 75, 23));
        sobelButton = new QPushButton(dockWidgetContents_3);
        sobelButton->setObjectName(QStringLiteral("sobelButton"));
        sobelButton->setGeometry(QRect(0, 490, 75, 23));
        cannyButton = new QPushButton(dockWidgetContents_3);
        cannyButton->setObjectName(QStringLiteral("cannyButton"));
        cannyButton->setGeometry(QRect(0, 530, 75, 23));
        overButton = new QPushButton(dockWidgetContents_3);
        overButton->setObjectName(QStringLiteral("overButton"));
        overButton->setGeometry(QRect(0, 570, 75, 23));
        signButton = new QPushButton(dockWidgetContents_3);
        signButton->setObjectName(QStringLiteral("signButton"));
        signButton->setGeometry(QRect(110, 30, 81, 23));
        saveimgButton = new QPushButton(dockWidgetContents_3);
        saveimgButton->setObjectName(QStringLiteral("saveimgButton"));
        saveimgButton->setGeometry(QRect(110, 70, 81, 23));
        erButton = new QPushButton(dockWidgetContents_3);
        erButton->setObjectName(QStringLiteral("erButton"));
        erButton->setGeometry(QRect(110, 110, 81, 23));
        nSlider = new QSlider(dockWidgetContents_3);
        nSlider->setObjectName(QStringLiteral("nSlider"));
        nSlider->setGeometry(QRect(110, 160, 81, 19));
        nSlider->setMaximum(255);
        nSlider->setValue(95);
        nSlider->setOrientation(Qt::Horizontal);
        nSlider->setTickInterval(0);
        gammaButton = new QPushButton(dockWidgetContents_3);
        gammaButton->setObjectName(QStringLiteral("gammaButton"));
        gammaButton->setGeometry(QRect(110, 200, 81, 23));
        horizontalSlider = new QSlider(dockWidgetContents_3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(110, 230, 81, 19));
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setValue(50);
        horizontalSlider->setOrientation(Qt::Horizontal);
        openVideoButton = new QPushButton(dockWidgetContents_3);
        openVideoButton->setObjectName(QStringLiteral("openVideoButton"));
        openVideoButton->setGeometry(QRect(110, 270, 81, 23));
        pushButton_2 = new QPushButton(dockWidgetContents_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 320, 75, 23));
        dockWidget_3->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_3);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menu_F->addAction(action_o);
        menu_F->addAction(action_6);
        menu_E->addAction(action_ASCII);
        menu_E->addAction(action_2);
        menu_E->addAction(action_3);
        menu_E->addAction(action_4);
        menu_E->addAction(action_5);
        mainToolBar->addAction(filenew);
        mainToolBar->addAction(fileopen);
        mainToolBar->addAction(change_2);
        mainToolBar->addAction(filesave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        filenew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
        fileopen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        change_2->setText(QApplication::translate("MainWindow", "\350\275\254\345\214\226", Q_NULLPTR));
        filesave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        action_o->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", Q_NULLPTR));
        action_ASCII->setText(QApplication::translate("MainWindow", "\350\275\254\346\210\220ASCII\347\240\201", Q_NULLPTR));
        action_2->setText(QApplication::translate("MainWindow", "\350\275\254\346\210\220\347\201\260\345\272\246\345\233\276", Q_NULLPTR));
        action_3->setText(QApplication::translate("MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242", Q_NULLPTR));
        action_4->setText(QApplication::translate("MainWindow", "\350\276\271\347\274\230\346\243\200\346\265\213", Q_NULLPTR));
        action_5->setText(QApplication::translate("MainWindow", "\350\276\271\347\274\230\346\243\200\346\265\213\345\244\215\345\220\210", Q_NULLPTR));
        action_6->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(S)", Q_NULLPTR));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(E)", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\347\205\247\347\211\207", Q_NULLPTR));
        change->setText(QApplication::translate("MainWindow", "\350\275\254\345\214\226\346\210\220ascii", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\350\276\223\345\205\245ASCII\347\240\201", Q_NULLPTR));
        changeToGray->setText(QApplication::translate("MainWindow", "\350\275\254\345\214\226\346\210\220\347\201\260\345\272\246\345\233\276", Q_NULLPTR));
        changeFilter->setText(QApplication::translate("MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\257\271\346\257\224\345\272\246\357\274\232", Q_NULLPTR));
        brightButton->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\347\224\237\346\210\220", Q_NULLPTR));
        gaussButton->setText(QApplication::translate("MainWindow", "\351\253\230\346\226\257\346\250\241\347\263\212", Q_NULLPTR));
        sobelButton->setText(QApplication::translate("MainWindow", "Sobel\345\244\204\347\220\206", Q_NULLPTR));
        cannyButton->setText(QApplication::translate("MainWindow", "Canny\345\244\204\347\220\206", Q_NULLPTR));
        overButton->setText(QApplication::translate("MainWindow", "\345\244\215\345\220\210\350\277\220\347\256\227", Q_NULLPTR));
        signButton->setText(QApplication::translate("MainWindow", "\346\225\260\345\255\227\347\255\276\345\220\215", Q_NULLPTR));
        saveimgButton->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\233\276\347\211\207", Q_NULLPTR));
        erButton->setText(QApplication::translate("MainWindow", "\344\272\214\345\200\274\345\214\226", Q_NULLPTR));
        gammaButton->setText(QApplication::translate("MainWindow", "\344\274\275\351\251\254\345\217\230\346\215\242", Q_NULLPTR));
        openVideoButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\350\247\206\351\242\221", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
