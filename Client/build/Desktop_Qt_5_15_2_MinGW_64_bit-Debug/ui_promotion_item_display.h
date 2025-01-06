/********************************************************************************
** Form generated from reading UI file 'promotion_item_display.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOTION_ITEM_DISPLAY_H
#define UI_PROMOTION_ITEM_DISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PromotionItemDisplay
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayoutContent;
    QToolButton *JumpToDetailPage;
    QLabel *productName;
    QLabel *productDiscount;

    void setupUi(QWidget *PromotionItemDisplay)
    {
        if (PromotionItemDisplay->objectName().isEmpty())
            PromotionItemDisplay->setObjectName(QString::fromUtf8("PromotionItemDisplay"));
        PromotionItemDisplay->resize(268, 232);
        PromotionItemDisplay->setStyleSheet(QString::fromUtf8("PromotionItemDisplay {\n"
"\n"
"    background-color: #f0f0f0;  /* Light gray background */\n"
"\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"\n"
"    padding: 10px;               /* Padding around the widget */\n"
"\n"
"}\n"
"\n"
"\n"
"#productDiscount {\n"
"\n"
"    font-size: 14px;\n"
"\n"
"    font-weight: bold;\n"
"\n"
"    color: #d9534f; /* Red color for discount text */\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"#productName {\n"
"\n"
"    font-size: 16px;\n"
"\n"
"    font-weight: bold;\n"
"\n"
"    color: #333333;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"#productImage {\n"
"\n"
"    width: 150px;\n"
"\n"
"    height: 150px;\n"
"\n"
"    border: 2px solid #ddd; /* Border around the image */\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"#JumpToDetailPage {\n"
"\n"
"\n"
"\n"
"    color: white;\n"
"\n"
"\n"
"\n"
"    border-radius: 5px;\n"
"\n"
"\n"
"\n"
"    padding: 5px 15px;\n"
"\n"
"\n"
"\n"
"    font-size: 14px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"#JumpToDetailPage:hover {\n"
"\n"
"    background-color: rgb"
                        "(255, 182, 130);\n"
"\n"
"    /* \347\247\273\351\231\244 cursor \345\261\236\346\200\247 */\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"#JumpToDetailPage:pressed {\n"
"\n"
"	background-color: rgb(255, 157, 0);\n"
"\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(PromotionItemDisplay);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        widget = new QWidget(PromotionItemDisplay);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayoutContent = new QVBoxLayout(widget);
        verticalLayoutContent->setObjectName(QString::fromUtf8("verticalLayoutContent"));
        JumpToDetailPage = new QToolButton(widget);
        JumpToDetailPage->setObjectName(QString::fromUtf8("JumpToDetailPage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JumpToDetailPage->sizePolicy().hasHeightForWidth());
        JumpToDetailPage->setSizePolicy(sizePolicy);
        JumpToDetailPage->setIconSize(QSize(150, 150));

        verticalLayoutContent->addWidget(JumpToDetailPage);

        productName = new QLabel(widget);
        productName->setObjectName(QString::fromUtf8("productName"));

        verticalLayoutContent->addWidget(productName);

        productDiscount = new QLabel(widget);
        productDiscount->setObjectName(QString::fromUtf8("productDiscount"));

        verticalLayoutContent->addWidget(productDiscount);


        verticalLayout->addWidget(widget);


        retranslateUi(PromotionItemDisplay);

        QMetaObject::connectSlotsByName(PromotionItemDisplay);
    } // setupUi

    void retranslateUi(QWidget *PromotionItemDisplay)
    {
        PromotionItemDisplay->setWindowTitle(QCoreApplication::translate("PromotionItemDisplay", "Promotion Item Display", nullptr));
        JumpToDetailPage->setText(QCoreApplication::translate("PromotionItemDisplay", "View Details", nullptr));
        productName->setText(QCoreApplication::translate("PromotionItemDisplay", "Product Name", nullptr));
        productDiscount->setText(QCoreApplication::translate("PromotionItemDisplay", "Discount: 20%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PromotionItemDisplay: public Ui_PromotionItemDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOTION_ITEM_DISPLAY_H
