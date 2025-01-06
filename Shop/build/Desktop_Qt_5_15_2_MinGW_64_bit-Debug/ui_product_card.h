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
    QPushButton *productImageButton;
    QLabel *productNameLabel;
    QLabel *productPriceLabel;

    void setupUi(QWidget *ProductCard)
    {
        if (ProductCard->objectName().isEmpty())
            ProductCard->setObjectName(QString::fromUtf8("ProductCard"));
        ProductCard->resize(200, 300);
        mainLayout = new QVBoxLayout(ProductCard);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        productImageButton = new QPushButton(ProductCard);
        productImageButton->setObjectName(QString::fromUtf8("productImageButton"));
        productImageButton->setMinimumSize(QSize(200, 200));

        mainLayout->addWidget(productImageButton);

        productNameLabel = new QLabel(ProductCard);
        productNameLabel->setObjectName(QString::fromUtf8("productNameLabel"));
        productNameLabel->setAlignment(Qt::AlignCenter);

        mainLayout->addWidget(productNameLabel);

        productPriceLabel = new QLabel(ProductCard);
        productPriceLabel->setObjectName(QString::fromUtf8("productPriceLabel"));
        productPriceLabel->setAlignment(Qt::AlignCenter);

        mainLayout->addWidget(productPriceLabel);


        retranslateUi(ProductCard);

        QMetaObject::connectSlotsByName(ProductCard);
    } // setupUi

    void retranslateUi(QWidget *ProductCard)
    {
        productImageButton->setStyleSheet(QCoreApplication::translate("ProductCard", "\n"
"       QPushButton {\n"
"           border: none;\n"
"           background-color: #FFFFFF;\n"
"       }\n"
"       QPushButton:hover {\n"
"           background-color: #FFEDD6;\n"
"       }\n"
"      ", nullptr));
        productNameLabel->setText(QCoreApplication::translate("ProductCard", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        productNameLabel->setStyleSheet(QCoreApplication::translate("ProductCard", "\n"
"       QLabel {\n"
"           font-size: 14px;\n"
"           font-weight: bold;\n"
"           color: #333333;\n"
"       }\n"
"      ", nullptr));
        productPriceLabel->setText(QCoreApplication::translate("ProductCard", "\302\245100.00", nullptr));
        productPriceLabel->setStyleSheet(QCoreApplication::translate("ProductCard", "\n"
"       QLabel {\n"
"           font-size: 14px;\n"
"           color: #FF4500;\n"
"       }\n"
"      ", nullptr));
        (void)ProductCard;
    } // retranslateUi

};

namespace Ui {
    class ProductCard: public Ui_ProductCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_CARD_H
