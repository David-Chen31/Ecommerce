/********************************************************************************
** Form generated from reading UI file 'itemdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMDISPLAY_H
#define UI_ITEMDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemDisplay
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QToolButton *JumpToDetailPage;
    QLabel *productName;

    void setupUi(QWidget *ItemDisplay)
    {
        if (ItemDisplay->objectName().isEmpty())
            ItemDisplay->setObjectName(QString::fromUtf8("ItemDisplay"));
        ItemDisplay->resize(268, 248);
        ItemDisplay->setStyleSheet(QString::fromUtf8("ItemDisplay {\n"
"    background-color: #f0f0f0;  /* Light gray background */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    padding: 10px;               /* Padding around the widget */\n"
"}\n"
"\n"
"#productName {\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    color: #333333;\n"
"}\n"
"\n"
"#productImage {\n"
"    width: 150px;\n"
"    height: 150px;\n"
"    border: 2px solid #ddd; /* Border around the image */\n"
"}\n"
"\n"
"#JumpToDetailPage {\n"
"\n"
"    color: white;\n"
"\n"
"    border-radius: 5px;\n"
"\n"
"    padding: 5px 15px;\n"
"\n"
"    font-size: 14px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"#JumpToDetailPage:hover {\n"
"	background-color: rgb(255, 182, 130);\n"
"    /* \347\247\273\351\231\244 cursor \345\261\236\346\200\247 */\n"
"}\n"
"\n"
"#JumpToDetailPage:pressed {\n"
"    background-color: rgb(255, 157, 0);\n"
"}\n"
"\n"
""));
        horizontalLayout = new QHBoxLayout(ItemDisplay);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        widget = new QWidget(ItemDisplay);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        JumpToDetailPage = new QToolButton(widget);
        JumpToDetailPage->setObjectName(QString::fromUtf8("JumpToDetailPage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JumpToDetailPage->sizePolicy().hasHeightForWidth());
        JumpToDetailPage->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(JumpToDetailPage);

        productName = new QLabel(widget);
        productName->setObjectName(QString::fromUtf8("productName"));

        verticalLayout->addWidget(productName);


        horizontalLayout->addWidget(widget);


        retranslateUi(ItemDisplay);

        QMetaObject::connectSlotsByName(ItemDisplay);
    } // setupUi

    void retranslateUi(QWidget *ItemDisplay)
    {
        ItemDisplay->setWindowTitle(QCoreApplication::translate("ItemDisplay", "Form", nullptr));
        JumpToDetailPage->setText(QCoreApplication::translate("ItemDisplay", "...", nullptr));
        productName->setText(QCoreApplication::translate("ItemDisplay", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemDisplay: public Ui_ItemDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMDISPLAY_H
