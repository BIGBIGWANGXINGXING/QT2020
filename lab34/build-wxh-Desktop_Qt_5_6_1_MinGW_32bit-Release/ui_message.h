/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_message
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *message)
    {
        if (message->objectName().isEmpty())
            message->setObjectName(QStringLiteral("message"));
        message->resize(271, 185);
        pushButton = new QPushButton(message);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 130, 75, 23));
        label = new QLabel(message);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 121, 16));
        label_2 = new QLabel(message);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 80, 111, 16));

        retranslateUi(message);
        QObject::connect(pushButton, SIGNAL(clicked()), message, SLOT(close()));

        QMetaObject::connectSlotsByName(message);
    } // setupUi

    void retranslateUi(QDialog *message)
    {
        message->setWindowTitle(QApplication::translate("message", "Dialog", 0));
        pushButton->setText(QApplication::translate("message", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("message", "\345\247\223\345\220\215\357\274\232\347\216\213\346\230\237\346\205\247", 0));
        label_2->setText(QApplication::translate("message", "\345\255\246\345\217\267\357\274\232189051002", 0));
    } // retranslateUi

};

namespace Ui {
    class message: public Ui_message {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
