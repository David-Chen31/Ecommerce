/********************************************************************************
** Form generated from reading UI file 'product_card_promotion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_CARD_PROMOTION_H
#define UI_PRODUCT_CARD_PROMOTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductCardPromotion
{
public:
    QVBoxLayout *mainLayout;
    QLabel *productImageLabel;
    QLabel *discountLabel;
    QLabel *productNameLabel;
    QHBoxLayout *priceLayout;
    QLabel *originalPriceLabel;
    QLabel *currentPriceLabel;

    void setupUi(QWidget *ProductCardPromotion)
    {
        if (ProductCardPromotion->objectName().isEmpty())
            ProductCardPromotion->setObjectName(QString::fromUtf8("ProductCardPromotion"));
        ProductCardPromotion->resize(250, 350);
        ProductCardPromotion->setStyleSheet(QString::fromUtf8("\n"
"    QWidget {\n"
"        background-color: #FFFFFF; /* \347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"        border: 1px solid #87CEFA; /* \346\265\205\345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"        border-radius: 10px;\n"
"    }\n"
"    QWidget:hover {\n"
"        background-color: #E0F7FF; /* \346\265\205\345\244\251\350\223\235\350\211\262\350\203\214\346\231\257\357\274\210\346\202\254\345\201\234\346\227\266\357\274\211 */\n"
"    }\n"
"   "));
        mainLayout = new QVBoxLayout(ProductCardPromotion);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        productImageLabel = new QLabel(ProductCardPromotion);
        productImageLabel->setObjectName(QString::fromUtf8("productImageLabel"));
        productImageLabel->setMinimumSize(QSize(200, 200));
        productImageLabel->setStyleSheet(QString::fromUtf8("\n"
"       QLabel {\n"
"           border: 1px solid #87CEFA; /* \346\265\205\345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"           border-radius: 10px;\n"
"           background-color: #F5F5F5; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"       }\n"
"      "));
        productImageLabel->setScaledContents(true);
        productImageLabel->setAlignment(Qt::AlignCenter);

        mainLayout->addWidget(productImageLabel);

        discountLabel = new QLabel(ProductCardPromotion);
        discountLabel->setObjectName(QString::fromUtf8("discountLabel"));
        discountLabel->setStyleSheet(QString::fromUtf8("\n"
"       QLabel {\n"
"           font-size: 18px;\n"
"           font-weight: bold;\n"
"           color: #4682B4; /* \346\267\261\345\244\251\350\223\235\350\211\262\345\255\227\344\275\223 */\n"
"           background-color: #D6F5FF; /* \346\265\205\345\244\251\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"           padding: 5px 10px;\n"
"           border-radius: 5px;\n"
"           text-align: center;\n"
"       }\n"
"      "));
        discountLabel->setAlignment(Qt::AlignCenter);

        mainLayout->addWidget(discountLabel);

        productNameLabel = new QLabel(ProductCardPromotion);
        productNameLabel->setObjectName(QString::fromUtf8("productNameLabel"));
        productNameLabel->setStyleSheet(QString::fromUtf8("\n"
"       QLabel {\n"
"           font-size: 20px;\n"
"           font-weight: bold;\n"
"           color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"           text-align: center;\n"
"       }\n"
"      "));
        productNameLabel->setAlignment(Qt::AlignCenter);

        mainLayout->addWidget(productNameLabel);

        priceLayout = new QHBoxLayout();
        priceLayout->setObjectName(QString::fromUtf8("priceLayout"));
        originalPriceLabel = new QLabel(ProductCardPromotion);
        originalPriceLabel->setObjectName(QString::fromUtf8("originalPriceLabel"));
        originalPriceLabel->setStyleSheet(QString::fromUtf8("\n"
"         QLabel {\n"
"             font-size: 16px;\n"
"             color: #B0C4DE; /* \346\265\205\347\201\260\350\223\235\350\211\262\345\255\227\344\275\223 */\n"
"             text-decoration: line-through; /* \345\210\240\351\231\244\347\272\277 */\n"
"         }\n"
"        "));
        originalPriceLabel->setAlignment(Qt::AlignCenter);

        priceLayout->addWidget(originalPriceLabel);

        currentPriceLabel = new QLabel(ProductCardPromotion);
        currentPriceLabel->setObjectName(QString::fromUtf8("currentPriceLabel"));
        currentPriceLabel->setStyleSheet(QString::fromUtf8("\n"
"         QLabel {\n"
"             font-size: 18px;\n"
"             font-weight: bold;\n"
"             color: #4682B4; /* \346\267\261\345\244\251\350\223\235\350\211\262\345\255\227\344\275\223 */\n"
"         }\n"
"        "));
        currentPriceLabel->setAlignment(Qt::AlignCenter);

        priceLayout->addWidget(currentPriceLabel);


        mainLayout->addLayout(priceLayout);


        retranslateUi(ProductCardPromotion);

        QMetaObject::connectSlotsByName(ProductCardPromotion);
    } // setupUi

    void retranslateUi(QWidget *ProductCardPromotion)
    {
        productImageLabel->setText(QCoreApplication::translate("ProductCardPromotion", "\345\225\206\345\223\201\345\233\276\347\211\207", nullptr));
        discountLabel->setText(QCoreApplication::translate("ProductCardPromotion", "\346\212\230\346\211\243 50%", nullptr));
        productNameLabel->setText(QCoreApplication::translate("ProductCardPromotion", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        originalPriceLabel->setText(QCoreApplication::translate("ProductCardPromotion", "\302\245200.00", nullptr));
        currentPriceLabel->setText(QCoreApplication::translate("ProductCardPromotion", "\302\245100.00", nullptr));
        (void)ProductCardPromotion;
    } // retranslateUi

};

namespace Ui {
    class ProductCardPromotion: public Ui_ProductCardPromotion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_CARD_PROMOTION_H
