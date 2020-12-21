/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *putChangeButton;
    QPushButton *cancleChangeButton;
    QPushButton *insertButton;
    QPushButton *deleteButton;
    QPushButton *upbyidButton;
    QPushButton *downbyidButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *selectButton;
    QPushButton *showAllButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(562, 354);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        putChangeButton = new QPushButton(centralWidget);
        putChangeButton->setObjectName(QStringLiteral("putChangeButton"));

        verticalLayout->addWidget(putChangeButton);

        cancleChangeButton = new QPushButton(centralWidget);
        cancleChangeButton->setObjectName(QStringLiteral("cancleChangeButton"));

        verticalLayout->addWidget(cancleChangeButton);

        insertButton = new QPushButton(centralWidget);
        insertButton->setObjectName(QStringLiteral("insertButton"));

        verticalLayout->addWidget(insertButton);

        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        upbyidButton = new QPushButton(centralWidget);
        upbyidButton->setObjectName(QStringLiteral("upbyidButton"));

        verticalLayout->addWidget(upbyidButton);

        downbyidButton = new QPushButton(centralWidget);
        downbyidButton->setObjectName(QStringLiteral("downbyidButton"));

        verticalLayout->addWidget(downbyidButton);


        gridLayout->addLayout(verticalLayout, 0, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 2);

        selectButton = new QPushButton(centralWidget);
        selectButton->setObjectName(QStringLiteral("selectButton"));

        gridLayout->addWidget(selectButton, 2, 1, 1, 1);

        showAllButton = new QPushButton(centralWidget);
        showAllButton->setObjectName(QStringLiteral("showAllButton"));

        gridLayout->addWidget(showAllButton, 2, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 562, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        putChangeButton->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244\344\277\256\346\224\271", 0));
        cancleChangeButton->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200\344\277\256\346\224\271", 0));
        insertButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\260\345\275\225", 0));
        deleteButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", 0));
        upbyidButton->setText(QApplication::translate("MainWindow", "\346\214\211id\345\215\207\345\272\217\346\216\222\345\210\227", 0));
        downbyidButton->setText(QApplication::translate("MainWindow", "\346\214\211id\351\231\215\345\272\217\346\216\222\345\210\227", 0));
        label->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", 0));
        selectButton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        showAllButton->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\205\250\351\203\250", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
