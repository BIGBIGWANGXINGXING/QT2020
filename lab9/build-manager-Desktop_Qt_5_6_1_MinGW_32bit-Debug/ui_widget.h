/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *sellBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *buyBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *queryBtn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *passwordBtn;
    QSpacerItem *horizontalSpacer_6;
    QStackedWidget *stackedWidget;
    QWidget *sellPage;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_65;
    QLabel *label_67;
    QLabel *label_70;
    QPushButton *sellCancelBtn;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *sellPriceLineEdit;
    QSpinBox *sellNumSpinBox;
    QLabel *label_69;
    QLabel *label_66;
    QLabel *label;
    QLabel *label_71;
    QPushButton *sellOkBtn;
    QComboBox *sellTypeComboBox;
    QSpacerItem *verticalSpacer_4;
    QLabel *sellLastNumLabel;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_68;
    QSpacerItem *verticalSpacer_7;
    QComboBox *sellBrandComboBox;
    QLineEdit *sellSumLineEdit;
    QSpacerItem *verticalSpacer_27;
    QSpacerItem *verticalSpacer_28;
    QSpacerItem *verticalSpacer_30;
    QSpacerItem *verticalSpacer_29;
    QSpacerItem *verticalSpacer_31;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_12;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_18;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_12;
    QPushButton *goodsCancelBtn;
    QSpacerItem *verticalSpacer_9;
    QComboBox *goodsBrandComboBox;
    QLineEdit *goodsPriceLineEdit;
    QLineEdit *goodsSumLineEdit;
    QSpacerItem *verticalSpacer_11;
    QComboBox *goodsTypeComboBox;
    QSpacerItem *verticalSpacer_13;
    QPushButton *goodsOkBtn;
    QSpinBox *goodsNumSpinBox;
    QLabel *label_11;
    QLabel *label_17;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_14;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_16;
    QSpacerItem *verticalSpacer_17;
    QSpacerItem *verticalSpacer_19;
    QLabel *label_20;
    QLabel *label_22;
    QLabel *label_19;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_21;
    QLineEdit *newBrandLineEdit;
    QSpinBox *newNumSpinBox;
    QPushButton *newOkBtn;
    QSpacerItem *verticalSpacer_18;
    QSpinBox *newPriceSpinBox;
    QLabel *label_24;
    QLabel *label_25;
    QComboBox *newTypeComboBox;
    QPushButton *newCancelBtn;
    QLineEdit *newSumLineEdit;
    QSpacerItem *verticalSpacer_20;
    QSpacerItem *verticalSpacer_21;
    QWidget *page_3;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *queryBrandComboBox;
    QLabel *label_33;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_22;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *queryTypeComboBox;
    QPushButton *queryPushButton;
    QLabel *label_35;
    QTableView *tableView;
    QLabel *label_29;
    QWidget *page_4;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QLabel *label_62;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *oldPwdLineEdit;
    QLabel *label_61;
    QLineEdit *newPwdLineEdit;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *changePwdBtn;
    QSpacerItem *verticalSpacer_25;
    QSpacerItem *verticalSpacer_24;
    QSpacerItem *verticalSpacer_26;
    QSpacerItem *verticalSpacer_23;
    QLabel *label_63;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(700, 410);
        Widget->setMinimumSize(QSize(700, 410));
        Widget->setMaximumSize(QSize(700, 410));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        sellBtn = new QPushButton(Widget);
        sellBtn->setObjectName(QStringLiteral("sellBtn"));
        sellBtn->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(sellBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buyBtn = new QPushButton(Widget);
        buyBtn->setObjectName(QStringLiteral("buyBtn"));
        buyBtn->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(buyBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        addBtn = new QPushButton(Widget);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(addBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        queryBtn = new QPushButton(Widget);
        queryBtn->setObjectName(QStringLiteral("queryBtn"));
        queryBtn->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(queryBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        passwordBtn = new QPushButton(Widget);
        passwordBtn->setObjectName(QStringLiteral("passwordBtn"));
        passwordBtn->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(passwordBtn);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(50, 50));
        sellPage = new QWidget();
        sellPage->setObjectName(QStringLiteral("sellPage"));
        gridLayout_3 = new QGridLayout(sellPage);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_65 = new QLabel(sellPage);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_65, 14, 0, 1, 2);

        label_67 = new QLabel(sellPage);
        label_67->setObjectName(QStringLiteral("label_67"));

        gridLayout_2->addWidget(label_67, 8, 4, 1, 2);

        label_70 = new QLabel(sellPage);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_70, 11, 0, 1, 2);

        sellCancelBtn = new QPushButton(sellPage);
        sellCancelBtn->setObjectName(QStringLiteral("sellCancelBtn"));
        sellCancelBtn->setMinimumSize(QSize(150, 0));
        sellCancelBtn->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(sellCancelBtn, 17, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 16, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 7, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 13, 2, 1, 1);

        sellPriceLineEdit = new QLineEdit(sellPage);
        sellPriceLineEdit->setObjectName(QStringLiteral("sellPriceLineEdit"));

        gridLayout_2->addWidget(sellPriceLineEdit, 8, 2, 1, 2);

        sellNumSpinBox = new QSpinBox(sellPage);
        sellNumSpinBox->setObjectName(QStringLiteral("sellNumSpinBox"));

        gridLayout_2->addWidget(sellNumSpinBox, 11, 2, 1, 2);

        label_69 = new QLabel(sellPage);
        label_69->setObjectName(QStringLiteral("label_69"));

        gridLayout_2->addWidget(label_69, 14, 4, 1, 2);

        label_66 = new QLabel(sellPage);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_66, 5, 0, 1, 2);

        label = new QLabel(sellPage);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(12);
        label->setFont(font);
        label->setFrameShape(QFrame::StyledPanel);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 6);

        label_71 = new QLabel(sellPage);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_71, 2, 0, 1, 2);

        sellOkBtn = new QPushButton(sellPage);
        sellOkBtn->setObjectName(QStringLiteral("sellOkBtn"));
        sellOkBtn->setMinimumSize(QSize(150, 0));
        sellOkBtn->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(sellOkBtn, 17, 2, 1, 1);

        sellTypeComboBox = new QComboBox(sellPage);
        sellTypeComboBox->setObjectName(QStringLiteral("sellTypeComboBox"));

        gridLayout_2->addWidget(sellTypeComboBox, 2, 2, 1, 2);

        verticalSpacer_4 = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 10, 2, 1, 1);

        sellLastNumLabel = new QLabel(sellPage);
        sellLastNumLabel->setObjectName(QStringLiteral("sellLastNumLabel"));

        gridLayout_2->addWidget(sellLastNumLabel, 11, 4, 1, 2);

        verticalSpacer_2 = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 2, 1, 1);

        label_68 = new QLabel(sellPage);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_68, 8, 0, 1, 2);

        verticalSpacer_7 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 18, 2, 1, 1);

        sellBrandComboBox = new QComboBox(sellPage);
        sellBrandComboBox->setObjectName(QStringLiteral("sellBrandComboBox"));

        gridLayout_2->addWidget(sellBrandComboBox, 5, 2, 1, 2);

        sellSumLineEdit = new QLineEdit(sellPage);
        sellSumLineEdit->setObjectName(QStringLiteral("sellSumLineEdit"));

        gridLayout_2->addWidget(sellSumLineEdit, 14, 2, 1, 2);

        verticalSpacer_27 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_27, 3, 2, 1, 1);

        verticalSpacer_28 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_28, 6, 2, 1, 1);

        verticalSpacer_30 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_30, 12, 2, 1, 1);

        verticalSpacer_29 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_29, 9, 2, 1, 1);

        verticalSpacer_31 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_31, 15, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(sellPage);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_12, 7, 1, 1, 1);

        label_16 = new QLabel(page_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 10, 3, 1, 1);

        label_15 = new QLabel(page_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_15, 4, 0, 1, 1);

        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_13, 8, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_8, 13, 1, 1, 1);

        label_18 = new QLabel(page_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_18, 10, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_10, 3, 1, 1, 1);

        label_12 = new QLabel(page_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 6, 3, 1, 1);

        goodsCancelBtn = new QPushButton(page_2);
        goodsCancelBtn->setObjectName(QStringLiteral("goodsCancelBtn"));

        gridLayout_4->addWidget(goodsCancelBtn, 12, 2, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_9, 1, 1, 1, 1);

        goodsBrandComboBox = new QComboBox(page_2);
        goodsBrandComboBox->setObjectName(QStringLiteral("goodsBrandComboBox"));

        gridLayout_4->addWidget(goodsBrandComboBox, 4, 1, 1, 2);

        goodsPriceLineEdit = new QLineEdit(page_2);
        goodsPriceLineEdit->setObjectName(QStringLiteral("goodsPriceLineEdit"));

        gridLayout_4->addWidget(goodsPriceLineEdit, 6, 1, 1, 2);

        goodsSumLineEdit = new QLineEdit(page_2);
        goodsSumLineEdit->setObjectName(QStringLiteral("goodsSumLineEdit"));

        gridLayout_4->addWidget(goodsSumLineEdit, 10, 1, 1, 2);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_11, 5, 1, 1, 1);

        goodsTypeComboBox = new QComboBox(page_2);
        goodsTypeComboBox->setObjectName(QStringLiteral("goodsTypeComboBox"));

        gridLayout_4->addWidget(goodsTypeComboBox, 2, 1, 1, 2);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_13, 9, 1, 1, 1);

        goodsOkBtn = new QPushButton(page_2);
        goodsOkBtn->setObjectName(QStringLiteral("goodsOkBtn"));

        gridLayout_4->addWidget(goodsOkBtn, 12, 1, 1, 1);

        goodsNumSpinBox = new QSpinBox(page_2);
        goodsNumSpinBox->setObjectName(QStringLiteral("goodsNumSpinBox"));

        gridLayout_4->addWidget(goodsNumSpinBox, 8, 1, 1, 2);

        label_11 = new QLabel(page_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setFrameShape(QFrame::StyledPanel);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_11, 0, 0, 1, 4);

        label_17 = new QLabel(page_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_17, 2, 0, 1, 1);

        label_10 = new QLabel(page_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_10, 6, 0, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_14, 11, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalSpacer_15 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_15, 15, 1, 1, 1);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_16, 3, 1, 1, 1);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_17, 6, 1, 1, 1);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_19, 13, 1, 1, 1);

        label_20 = new QLabel(page);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font);
        label_20->setFrameShape(QFrame::StyledPanel);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_20, 0, 0, 1, 4);

        label_22 = new QLabel(page);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_22, 10, 0, 1, 1);

        label_19 = new QLabel(page);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_19, 8, 0, 1, 1);

        label_26 = new QLabel(page);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_26, 2, 0, 1, 1);

        label_27 = new QLabel(page);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_27, 12, 0, 1, 1);

        label_21 = new QLabel(page);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_6->addWidget(label_21, 8, 3, 1, 1);

        newBrandLineEdit = new QLineEdit(page);
        newBrandLineEdit->setObjectName(QStringLiteral("newBrandLineEdit"));

        gridLayout_6->addWidget(newBrandLineEdit, 5, 1, 1, 2);

        newNumSpinBox = new QSpinBox(page);
        newNumSpinBox->setObjectName(QStringLiteral("newNumSpinBox"));

        gridLayout_6->addWidget(newNumSpinBox, 10, 1, 1, 2);

        newOkBtn = new QPushButton(page);
        newOkBtn->setObjectName(QStringLiteral("newOkBtn"));

        gridLayout_6->addWidget(newOkBtn, 14, 1, 1, 1);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_18, 9, 1, 1, 1);

        newPriceSpinBox = new QSpinBox(page);
        newPriceSpinBox->setObjectName(QStringLiteral("newPriceSpinBox"));

        gridLayout_6->addWidget(newPriceSpinBox, 8, 1, 1, 2);

        label_24 = new QLabel(page);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_24, 5, 0, 1, 1);

        label_25 = new QLabel(page);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_6->addWidget(label_25, 12, 3, 1, 1);

        newTypeComboBox = new QComboBox(page);
        newTypeComboBox->setObjectName(QStringLiteral("newTypeComboBox"));

        gridLayout_6->addWidget(newTypeComboBox, 2, 1, 1, 2);

        newCancelBtn = new QPushButton(page);
        newCancelBtn->setObjectName(QStringLiteral("newCancelBtn"));

        gridLayout_6->addWidget(newCancelBtn, 14, 2, 1, 1);

        newSumLineEdit = new QLineEdit(page);
        newSumLineEdit->setObjectName(QStringLiteral("newSumLineEdit"));

        gridLayout_6->addWidget(newSumLineEdit, 12, 1, 1, 2);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_20, 11, 1, 1, 1);

        verticalSpacer_21 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_21, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_9 = new QGridLayout(page_3);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 2, 3, 1, 1);

        queryBrandComboBox = new QComboBox(page_3);
        queryBrandComboBox->setObjectName(QStringLiteral("queryBrandComboBox"));
        queryBrandComboBox->setMinimumSize(QSize(400, 0));

        gridLayout_8->addWidget(queryBrandComboBox, 3, 1, 1, 2);

        label_33 = new QLabel(page_3);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_33, 3, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_9, 2, 6, 1, 1);

        verticalSpacer_22 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_22, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 3, 3, 1, 1);

        queryTypeComboBox = new QComboBox(page_3);
        queryTypeComboBox->setObjectName(QStringLiteral("queryTypeComboBox"));
        queryTypeComboBox->setMinimumSize(QSize(400, 0));

        gridLayout_8->addWidget(queryTypeComboBox, 2, 1, 1, 2);

        queryPushButton = new QPushButton(page_3);
        queryPushButton->setObjectName(QStringLiteral("queryPushButton"));
        queryPushButton->setMinimumSize(QSize(50, 50));

        gridLayout_8->addWidget(queryPushButton, 2, 4, 2, 1);

        label_35 = new QLabel(page_3);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_35, 2, 0, 1, 1);

        tableView = new QTableView(page_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(0, 500));

        gridLayout_8->addWidget(tableView, 4, 0, 1, 7);

        label_29 = new QLabel(page_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFont(font);
        label_29->setFrameShape(QFrame::StyledPanel);
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_29, 0, 0, 1, 7);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_11 = new QGridLayout(page_4);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_62 = new QLabel(page_4);
        label_62->setObjectName(QStringLiteral("label_62"));

        gridLayout_10->addWidget(label_62, 3, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_11, 3, 4, 1, 1);

        oldPwdLineEdit = new QLineEdit(page_4);
        oldPwdLineEdit->setObjectName(QStringLiteral("oldPwdLineEdit"));

        gridLayout_10->addWidget(oldPwdLineEdit, 3, 3, 1, 1);

        label_61 = new QLabel(page_4);
        label_61->setObjectName(QStringLiteral("label_61"));

        gridLayout_10->addWidget(label_61, 5, 1, 1, 1);

        newPwdLineEdit = new QLineEdit(page_4);
        newPwdLineEdit->setObjectName(QStringLiteral("newPwdLineEdit"));

        gridLayout_10->addWidget(newPwdLineEdit, 5, 3, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_10, 3, 0, 1, 1);

        changePwdBtn = new QPushButton(page_4);
        changePwdBtn->setObjectName(QStringLiteral("changePwdBtn"));

        gridLayout_10->addWidget(changePwdBtn, 7, 1, 1, 3);

        verticalSpacer_25 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_25, 4, 3, 1, 1);

        verticalSpacer_24 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_24, 2, 3, 1, 1);

        verticalSpacer_26 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_26, 6, 3, 1, 1);

        verticalSpacer_23 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_23, 8, 3, 1, 1);

        label_63 = new QLabel(page_4);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setFont(font);
        label_63->setFrameShape(QFrame::StyledPanel);
        label_63->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_63, 1, 0, 1, 5);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\346\225\260\346\215\256\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        sellBtn->setText(QApplication::translate("Widget", "\345\207\272\345\224\256\345\225\206\345\223\201", 0));
        buyBtn->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\345\205\245\345\272\223", 0));
        addBtn->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\345\225\206\345\223\201", 0));
        queryBtn->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\346\237\245\350\257\242", 0));
        passwordBtn->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        label_65->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", 0));
        label_67->setText(QApplication::translate("Widget", "\345\205\203", 0));
        label_70->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", 0));
        sellCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0));
        sellPriceLineEdit->setText(QString());
        label_69->setText(QApplication::translate("Widget", "\345\205\203", 0));
        label_66->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0));
        label->setText(QApplication::translate("Widget", "\345\207\272\345\224\256\345\225\206\345\223\201", 0));
        label_71->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0));
        sellOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0));
        sellLastNumLabel->setText(QApplication::translate("Widget", "\345\211\251\344\275\231\346\225\260\351\207\217\357\274\232000", 0));
        label_68->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", 0));
        sellSumLineEdit->setText(QString());
        label_16->setText(QApplication::translate("Widget", "\345\205\203", 0));
        label_15->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0));
        label_13->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", 0));
        label_18->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", 0));
        label_12->setText(QApplication::translate("Widget", "\345\205\203", 0));
        goodsCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0));
        goodsOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0));
        label_11->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\345\205\245\345\272\223", 0));
        label_17->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0));
        label_10->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", 0));
        label_20->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\345\225\206\345\223\201", 0));
        label_22->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", 0));
        label_19->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", 0));
        label_26->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0));
        label_27->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", 0));
        label_21->setText(QApplication::translate("Widget", "\345\205\203", 0));
        newOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0));
        label_24->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0));
        label_25->setText(QApplication::translate("Widget", "\345\205\203", 0));
        newCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0));
        newSumLineEdit->setText(QString());
        label_33->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0));
        queryPushButton->setText(QApplication::translate("Widget", "\346\237\245\350\257\242", 0));
        label_35->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0));
        label_29->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\346\237\245\350\257\242", 0));
        label_62->setText(QApplication::translate("Widget", "\345\216\237\345\257\206\347\240\201\357\274\232", 0));
        oldPwdLineEdit->setText(QString());
        label_61->setText(QApplication::translate("Widget", "\346\226\260\345\257\206\347\240\201\357\274\232", 0));
        newPwdLineEdit->setText(QString());
        changePwdBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0));
        label_63->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
