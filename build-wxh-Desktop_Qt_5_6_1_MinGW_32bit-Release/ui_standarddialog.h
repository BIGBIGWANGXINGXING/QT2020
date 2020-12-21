/********************************************************************************
** Form generated from reading UI file 'standarddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARDDIALOG_H
#define UI_STANDARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StandardDialog
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *fileLineEdit;
    QLineEdit *fontLineEdit;
    QFrame *colorFrame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *StandardDialog)
    {
        if (StandardDialog->objectName().isEmpty())
            StandardDialog->setObjectName(QStringLiteral("StandardDialog"));
        StandardDialog->resize(400, 240);
        centralWidget = new QWidget(StandardDialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 40, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 90, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 140, 75, 23));
        fileLineEdit = new QLineEdit(centralWidget);
        fileLineEdit->setObjectName(QStringLiteral("fileLineEdit"));
        fileLineEdit->setGeometry(QRect(130, 40, 221, 21));
        fontLineEdit = new QLineEdit(centralWidget);
        fontLineEdit->setObjectName(QStringLiteral("fontLineEdit"));
        fontLineEdit->setEnabled(true);
        fontLineEdit->setGeometry(QRect(130, 140, 221, 21));
        colorFrame = new QFrame(centralWidget);
        colorFrame->setObjectName(QStringLiteral("colorFrame"));
        colorFrame->setEnabled(true);
        colorFrame->setGeometry(QRect(130, 90, 221, 21));
        colorFrame->setAutoFillBackground(true);
        colorFrame->setFrameShape(QFrame::Panel);
        colorFrame->setFrameShadow(QFrame::Plain);
        StandardDialog->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(StandardDialog);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        StandardDialog->setMenuBar(menuBar);
        mainToolBar = new QToolBar(StandardDialog);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        StandardDialog->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(StandardDialog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        StandardDialog->setStatusBar(statusBar);

        retranslateUi(StandardDialog);

        QMetaObject::connectSlotsByName(StandardDialog);
    } // setupUi

    void retranslateUi(QMainWindow *StandardDialog)
    {
        StandardDialog->setWindowTitle(QApplication::translate("StandardDialog", "StandardDialog", 0));
        pushButton->setText(QApplication::translate("StandardDialog", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", 0));
        pushButton_2->setText(QApplication::translate("StandardDialog", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", 0));
        pushButton_3->setText(QApplication::translate("StandardDialog", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", 0));
    } // retranslateUi

};

namespace Ui {
    class StandardDialog: public Ui_StandardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARDDIALOG_H
