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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_S;
    QAction *action_O;
    QAction *action_A;
    QAction *action_X;
    QAction *action_V;
    QAction *action_A_2;
    QAction *action_M;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QMenuBar *menuBar;
    QMenu *menu_G;
    QMenu *menu_H;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(538, 419);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QStringLiteral(""));
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QStringLiteral("action_N"));
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QStringLiteral("action_S"));
        action_O = new QAction(MainWindow);
        action_O->setObjectName(QStringLiteral("action_O"));
        action_A = new QAction(MainWindow);
        action_A->setObjectName(QStringLiteral("action_A"));
        action_X = new QAction(MainWindow);
        action_X->setObjectName(QStringLiteral("action_X"));
        action_V = new QAction(MainWindow);
        action_V->setObjectName(QStringLiteral("action_V"));
        action_A_2 = new QAction(MainWindow);
        action_A_2->setObjectName(QStringLiteral("action_A_2"));
        action_M = new QAction(MainWindow);
        action_M->setObjectName(QStringLiteral("action_M"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("#centralWidget{background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.0284091 rgba(107, 101, 187, 255), stop:0.454545 rgba(212, 223, 223, 236), stop:1 rgba(164, 157, 255, 255));}"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("#widget{background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.0284091 rgba(107, 101, 187, 255), stop:0.454545 rgba(212, 223, 223, 236), stop:1 rgba(164, 157, 255, 255));\n"
"border-color: rgb(107, 114, 161);}\n"
"\n"
""));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));

        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 538, 23));
        menu_G = new QMenu(menuBar);
        menu_G->setObjectName(QStringLiteral("menu_G"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_G->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_G->addAction(action_N);
        menu_G->addSeparator();
        menu_G->addAction(action_S);
        menu_G->addAction(action_O);
        menu_G->addAction(action_A);
        menu_G->addSeparator();
        menu_G->addAction(action_X);
        menu_H->addAction(action_V);
        menu_H->addSeparator();
        menu_H->addAction(action_A_2);
        menu_H->addSeparator();
        menu_H->addAction(action_M);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_N->setText(QApplication::translate("MainWindow", "\346\226\260\346\270\270\346\210\217(&N)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_N->setShortcut(QApplication::translate("MainWindow", "F2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_S->setText(QApplication::translate("MainWindow", "\347\273\237\350\256\241\344\277\241\346\201\257(&S)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_S->setShortcut(QApplication::translate("MainWindow", "F4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_O->setText(QApplication::translate("MainWindow", "\351\200\211\351\241\271(&O)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_O->setShortcut(QApplication::translate("MainWindow", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_A->setText(QApplication::translate("MainWindow", "\346\233\264\346\224\271\345\244\226\350\247\202(&A)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_A->setShortcut(QApplication::translate("MainWindow", "F7", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_X->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", Q_NULLPTR));
        action_V->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251(&V)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_V->setShortcut(QApplication::translate("MainWindow", "F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_A_2->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\211\253\351\233\267(&A)", Q_NULLPTR));
        action_M->setText(QApplication::translate("MainWindow", "\350\201\224\346\234\272\350\216\267\345\217\226\346\233\264\345\244\232\344\277\241\346\201\257(&M)", Q_NULLPTR));
        menu_G->setTitle(QApplication::translate("MainWindow", "\346\270\270\346\210\217(&G)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
