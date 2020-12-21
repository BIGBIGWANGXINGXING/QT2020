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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nononon
{
public:
    QWidget *centralwidget;
    QPushButton *trydemoBtn;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nononon)
    {
        if (nononon->objectName().isEmpty())
            nononon->setObjectName(QStringLiteral("nononon"));
        nononon->resize(800, 600);
        centralwidget = new QWidget(nononon);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        trydemoBtn = new QPushButton(centralwidget);
        trydemoBtn->setObjectName(QStringLiteral("trydemoBtn"));
        trydemoBtn->setGeometry(QRect(330, 90, 75, 23));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 190, 75, 23));
        nononon->setCentralWidget(centralwidget);
        menubar = new QMenuBar(nononon);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        nononon->setMenuBar(menubar);
        statusbar = new QStatusBar(nononon);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        nononon->setStatusBar(statusbar);

        retranslateUi(nononon);

        QMetaObject::connectSlotsByName(nononon);
    } // setupUi

    void retranslateUi(QMainWindow *nononon)
    {
        nononon->setWindowTitle(QApplication::translate("nononon", "189051002\347\216\213\346\230\237\346\205\247\343\200\201", Q_NULLPTR));
        trydemoBtn->setText(QApplication::translate("nononon", "\350\257\225\344\270\200\350\257\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("nononon", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class nononon: public Ui_nononon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
