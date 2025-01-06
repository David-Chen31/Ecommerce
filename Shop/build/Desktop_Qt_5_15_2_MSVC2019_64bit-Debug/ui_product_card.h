/********************************************************************************
** Form generated from reading UI file 'product_card.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_CARD_H
#define UI_PRODUCT_CARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductCard
{
public:
    QVBoxLayout *mainLayout;
    QPushButton *JumpToEditPage;
    QLabel *productNameLabel;
    QLabel *productPriceLabel;

    void setupUi(QWidget *ProductCard)
    {
        if (ProductCard->objectName().isEmpty())
            ProductCard->setObjectName(QString::fromUtf8("ProductCard"));
        ProductCard->resize(218, 300);
        mainLayout = new QVBoxLayout(ProductCard);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        JumpToEditPage = new QPushButton(ProductCard);
        JumpToEditPage->setObjectName(QString::fromUtf8("JumpToEditPage"));
        JumpToEditPage->setMinimumSize(QSize(200, 200));
        JumpToEditPage->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"           border: none;\n"
"           background-color: #FFFFFF;\n"
"       }\n"
"       QPushButton:hover {\n"
"           background-color: rgb(174, 255, 252);\n"
"       }\n"
"      "));

        mainLayout->addWidget(JumpToEditPage);

        productNameLabel = new QLabel(ProductCard);
        productNameLabel->setObjectName(QString::fromUtf8("productNameLabel"));
        productNameLabel->setStyleSheet(QString::fromUtf8("\n"
"       QLabel {\n"
"           font-size: 20px;\n"
"           font-weight: bold;\n"
"           color: #333333;\n"
"       }\n"
"      "));
        productNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        mainLayout->addWidget(productNameLabel);

        productPriceLabel = new QLabel(ProductCard);
        productPriceLabel->setObjectName(QString::fromUtf8("productPriceLabel"));
        productPriceLabel->setStyleSheet(QString::fromUtf8("\n"
"       QLabel {\n"
"           font-size: 20px;\n"
"           color: #FF4500;\n"
"       }\n"
"      "));
        productPriceLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        mainLayout->addWidget(productPriceLabel);


        retranslateUi(ProductCard);

        QMetaObject::connectSlotsByName(ProductCard);
    } // setupUi

    void retranslateUi(QWidget *ProductCard)
    {
        productNameLabel->setText(QCoreApplication::translate("ProductCard", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        productPriceLabel->setText(QCoreApplication::translate("ProductCard", "\302\245100.00", nullptr));
        (void)ProductCard;
    } // retranslateUi

};

namespace Ui {
    class ProductCard: public Ui_ProductCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_CARD_H
