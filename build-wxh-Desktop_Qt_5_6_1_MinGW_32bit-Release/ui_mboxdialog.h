/********************************************************************************
** Form generated from reading UI file 'mboxdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MBOXDIALOG_H
#define UI_MBOXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MBoxDialog
{
public:
    QLabel *label;
    QPushButton *QuestionBtn;
    QPushButton *AboutBtn;
    QPushButton *WarningBtn;
    QPushButton *InformationBtn;
    QPushButton *AboutQTBtn;
    QPushButton *CustomBtn;
    QPushButton *CriticalBtn;

    void setupUi(QDialog *MBoxDialog)
    {
        if (MBoxDialog->objectName().isEmpty())
            MBoxDialog->setObjectName(QStringLiteral("MBoxDialog"));
        MBoxDialog->resize(400, 300);
        label = new QLabel(MBoxDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 281, 41));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        QuestionBtn = new QPushButton(MBoxDialog);
        QuestionBtn->setObjectName(QStringLiteral("QuestionBtn"));
        QuestionBtn->setGeometry(QRect(70, 90, 75, 23));
        AboutBtn = new QPushButton(MBoxDialog);
        AboutBtn->setObjectName(QStringLiteral("AboutBtn"));
        AboutBtn->setGeometry(QRect(160, 150, 75, 23));
        WarningBtn = new QPushButton(MBoxDialog);
        WarningBtn->setObjectName(QStringLiteral("WarningBtn"));
        WarningBtn->setGeometry(QRect(160, 90, 75, 23));
        InformationBtn = new QPushButton(MBoxDialog);
        InformationBtn->setObjectName(QStringLiteral("InformationBtn"));
        InformationBtn->setGeometry(QRect(70, 210, 75, 23));
        AboutQTBtn = new QPushButton(MBoxDialog);
        AboutQTBtn->setObjectName(QStringLiteral("AboutQTBtn"));
        AboutQTBtn->setGeometry(QRect(70, 150, 75, 23));
        CustomBtn = new QPushButton(MBoxDialog);
        CustomBtn->setObjectName(QStringLiteral("CustomBtn"));
        CustomBtn->setGeometry(QRect(250, 150, 75, 23));
        CriticalBtn = new QPushButton(MBoxDialog);
        CriticalBtn->setObjectName(QStringLiteral("CriticalBtn"));
        CriticalBtn->setGeometry(QRect(250, 90, 75, 23));

        retranslateUi(MBoxDialog);

        QMetaObject::connectSlotsByName(MBoxDialog);
    } // setupUi

    void retranslateUi(QDialog *MBoxDialog)
    {
        MBoxDialog->setWindowTitle(QApplication::translate("MBoxDialog", "Dialog", 0));
        label->setText(QApplication::translate("MBoxDialog", "MessageBox", 0));
        QuestionBtn->setText(QApplication::translate("MBoxDialog", "Question", 0));
        AboutBtn->setText(QApplication::translate("MBoxDialog", "AboutBtn", 0));
        WarningBtn->setText(QApplication::translate("MBoxDialog", "Warning", 0));
        InformationBtn->setText(QApplication::translate("MBoxDialog", "Information", 0));
        AboutQTBtn->setText(QApplication::translate("MBoxDialog", "AboutQT", 0));
        CustomBtn->setText(QApplication::translate("MBoxDialog", "Custom", 0));
        CriticalBtn->setText(QApplication::translate("MBoxDialog", "Critical", 0));
    } // retranslateUi

};

namespace Ui {
    class MBoxDialog: public Ui_MBoxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MBOXDIALOG_H
