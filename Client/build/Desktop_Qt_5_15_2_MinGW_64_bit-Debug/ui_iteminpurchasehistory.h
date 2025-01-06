/********************************************************************************
** Form generated from reading UI file 'iteminpurchasehistory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMINPURCHASEHISTORY_H
#define UI_ITEMINPURCHASEHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemInPurchaseHistory
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *productDetailsLayout_2;
    QLabel *productImage;
    QLabel *productName;
    QLabel *productStyle;
    QLabel *productQuantity;
    QLabel *productPrice;
    QSpacerItem *horizontalSpacer;
    QPushButton *refund;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *deleteButton;

    void setupUi(QWidget *ItemInPurchaseHistory)
    {
        if (ItemInPurchaseHistory->objectName().isEmpty())
            ItemInPurchaseHistory->setObjectName(QString::fromUtf8("ItemInPurchaseHistory"));
        ItemInPurchaseHistory->resize(1804, 160);
        ItemInPurchaseHistory->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\256\276\347\275\256 */\n"
"QWidget {\n"
"    background-color: #FFFFFF;\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* \345\225\206\345\223\201\345\220\215\347\247\260\345\255\227\344\275\223 */\n"
"QLabel {\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    color: #333333;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #FF6A00;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #FF4500;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #CC3700;\n"
"}\n"
"\n"
"/* \345\225\206\345\223\201\345\233\276\347\211\207 */\n"
"QLabel[name=\"productImage\"] {\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"/* \345\225\206\345\223\201\346\225\260\351\207\217\345\222\214\344\273\267\346\240\274\346\240\207"
                        "\347\255\276 */\n"
"QLabel[name=\"productQuantity\"],\n"
"QLabel[name=\"productPrice\"] {\n"
"    font-size: 14px;\n"
"    color: #555555;\n"
"}\n"
"\n"
"/* \345\210\240\351\231\244\346\214\211\351\222\256 */\n"
"QPushButton[name=\"deleteButton\"] {\n"
"    background-color: #FF4C00;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 6px 12px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton[name=\"deleteButton\"]:hover {\n"
"    background-color: #FF3200;\n"
"}\n"
"\n"
"QPushButton[name=\"deleteButton\"]:pressed {\n"
"    background-color: #CC2600;\n"
"}\n"
"\n"
"/* \345\213\276\351\200\211\346\241\206\346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #FF6A00;\n"
"    border: 2px solid #FF6A00;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: #FFFFFF;\n"
""
                        "    border: 2px solid #CCCCCC;\n"
"}\n"
"\n"
"/* \346\225\264\344\275\223\345\270\203\345\261\200\350\256\276\347\275\256 */\n"
"QHBoxLayout {\n"
"    spacing: 10px; /* \346\216\247\344\273\266\351\227\264\350\267\235 */\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(ItemInPurchaseHistory);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        productDetailsLayout_2 = new QHBoxLayout();
        productDetailsLayout_2->setObjectName(QString::fromUtf8("productDetailsLayout_2"));
        productImage = new QLabel(ItemInPurchaseHistory);
        productImage->setObjectName(QString::fromUtf8("productImage"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(99);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(productImage->sizePolicy().hasHeightForWidth());
        productImage->setSizePolicy(sizePolicy);
        productImage->setMinimumSize(QSize(290, 0));
        productImage->setMaximumSize(QSize(273, 165));
        productImage->setScaledContents(true);

        productDetailsLayout_2->addWidget(productImage);

        productName = new QLabel(ItemInPurchaseHistory);
        productName->setObjectName(QString::fromUtf8("productName"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(productName->sizePolicy().hasHeightForWidth());
        productName->setSizePolicy(sizePolicy1);
        productName->setMinimumSize(QSize(320, 0));
        productName->setMaximumSize(QSize(273, 16777215));

        productDetailsLayout_2->addWidget(productName);

        productStyle = new QLabel(ItemInPurchaseHistory);
        productStyle->setObjectName(QString::fromUtf8("productStyle"));
        productStyle->setMinimumSize(QSize(320, 0));
        productStyle->setMaximumSize(QSize(273, 16777215));

        productDetailsLayout_2->addWidget(productStyle);

        productQuantity = new QLabel(ItemInPurchaseHistory);
        productQuantity->setObjectName(QString::fromUtf8("productQuantity"));
        productQuantity->setMinimumSize(QSize(320, 0));
        productQuantity->setMaximumSize(QSize(273, 16777215));

        productDetailsLayout_2->addWidget(productQuantity);

        productPrice = new QLabel(ItemInPurchaseHistory);
        productPrice->setObjectName(QString::fromUtf8("productPrice"));
        productPrice->setMinimumSize(QSize(320, 0));

        productDetailsLayout_2->addWidget(productPrice);


        horizontalLayout->addLayout(productDetailsLayout_2);

        horizontalSpacer = new QSpacerItem(134, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        refund = new QPushButton(ItemInPurchaseHistory);
        refund->setObjectName(QString::fromUtf8("refund"));

        horizontalLayout->addWidget(refund);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        deleteButton = new QPushButton(ItemInPurchaseHistory);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);


        retranslateUi(ItemInPurchaseHistory);

        QMetaObject::connectSlotsByName(ItemInPurchaseHistory);
    } // setupUi

    void retranslateUi(QWidget *ItemInPurchaseHistory)
    {
        ItemInPurchaseHistory->setWindowTitle(QCoreApplication::translate("ItemInPurchaseHistory", "Form", nullptr));
        productName->setText(QCoreApplication::translate("ItemInPurchaseHistory", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        productStyle->setText(QCoreApplication::translate("ItemInPurchaseHistory", "\346\254\276\345\274\217", nullptr));
        productQuantity->setText(QCoreApplication::translate("ItemInPurchaseHistory", "\346\225\260\351\207\217: 1", nullptr));
        productPrice->setText(QCoreApplication::translate("ItemInPurchaseHistory", "\344\273\267\346\240\274: 100\345\205\203", nullptr));
        refund->setText(QCoreApplication::translate("ItemInPurchaseHistory", "\351\200\200\350\264\247\351\200\200\346\254\276", nullptr));
        deleteButton->setText(QCoreApplication::translate("ItemInPurchaseHistory", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemInPurchaseHistory: public Ui_ItemInPurchaseHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMINPURCHASEHISTORY_H
