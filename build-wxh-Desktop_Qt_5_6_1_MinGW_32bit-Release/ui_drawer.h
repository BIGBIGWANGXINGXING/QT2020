/********************************************************************************
** Form generated from reading UI file 'drawer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWER_H
#define UI_DRAWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLayout>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Drawer
{
public:
    QWidget *Strangers;

    void setupUi(QToolBox *Drawer)
    {
        if (Drawer->objectName().isEmpty())
            Drawer->setObjectName(QStringLiteral("Drawer"));
        Drawer->resize(190, 258);
        Strangers = new QWidget();
        Strangers->setObjectName(QStringLiteral("Strangers"));
        Strangers->setGeometry(QRect(0, 0, 190, 232));
        Drawer->addItem(Strangers, QStringLiteral(""));

        retranslateUi(Drawer);

        Drawer->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Drawer);
    } // setupUi

    void retranslateUi(QToolBox *Drawer)
    {
        Drawer->setWindowTitle(QApplication::translate("Drawer", "ToolBox", 0));
        Drawer->setItemText(Drawer->indexOf(Strangers), QString());
    } // retranslateUi

};

namespace Ui {
    class Drawer: public Ui_Drawer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWER_H
