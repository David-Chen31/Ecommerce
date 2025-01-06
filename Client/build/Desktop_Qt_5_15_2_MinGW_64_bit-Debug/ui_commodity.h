/********************************************************************************
** Form generated from reading UI file 'commodity.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMODITY_H
#define UI_COMMODITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Commodity
{
public:
    QWidget *widget;
    QLabel *productImage;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *previousPage;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *page;
    QPushButton *nextPage;
    QWidget *merchantWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *EnterClient;
    QPushButton *ContactBusiness;
    QLabel *ClientLabel;
    QLabel *label_2;
    QPushButton *Return;
    QWidget *productInfoWidget;
    QVBoxLayout *verticalLayout;
    QLabel *productName;
    QLabel *productPrice;
    QLabel *delivery;
    QLabel *guarantee;
    QSpinBox *productQuantity;
    QSpacerItem *verticalSpacer;
    QComboBox *styleComboBox;
    QPushButton *addToShoppingCart;
    QPushButton *purchase;
    QPushButton *pushButton;

    void setupUi(QWidget *Commodity)
    {
        if (Commodity->objectName().isEmpty())
            Commodity->setObjectName(QString::fromUtf8("Commodity"));
        Commodity->resize(2000, 1000);
        Commodity->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\256\276\347\275\256 */\n"
"QWidget {\n"
"    background-color: #FFFFFF; /* \347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* \346\240\207\351\242\230\345\255\227\344\275\223 */\n"
"QLabel {\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\357\274\214\347\241\256\344\277\235\350\211\257\345\245\275\347\232\204\345\217\257\350\257\273\346\200\247 */\n"
"}\n"
"\n"
"/* \345\225\206\345\223\201\346\240\207\351\242\230 */\n"
"#commodity_title {\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    color: #FF6A00; /* \346\251\230\350\211\262 */\n"
"    margin: 20px 0;\n"
"}\n"
"\n"
"/* \345\225\206\345\223\201\345\233\276\347\211\207 */\n"
"#commodity_image {\n"
"    border: 1px solid #FF6A00; /* \346\251\230\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 10px;\n"
"    margin-bottom: 20px;\n"
"}\n"
"\n"
"/* \345\225"
                        "\206\345\223\201\344\273\267\346\240\274 */\n"
"#commodity_price {\n"
"    font-size: 25px;\n"
"    color: #FF4500; /* \346\251\230\347\272\242\350\211\262 */\n"
"    font-weight: bold;\n"
"    margin: 10px 0;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #FF6A00; /* \346\251\230\350\211\262 */\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #FF4500; /* \346\251\230\347\272\242\350\211\262\346\202\254\345\201\234\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #CC3700; /* \346\267\261\346\251\230\350\211\262\346\214\211\344\270\213\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    border: 1px solid #CCCCCC; /* \347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
""
                        "    font-size: 14px;\n"
"    background-color: #FAFAFA; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \346\240\267\345\274\217\351\200\211\346\213\251\344\270\213\346\213\211\346\241\206 */\n"
"QComboBox {\n"
"    border: 1px solid #FF6A00; /* \346\251\230\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    background-color: #FAFAFA; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 1px solid #FF4500; /* \346\251\230\347\272\242\350\211\262\350\276\271\346\241\206\346\202\254\345\201\234\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #FF6A00; /* \346\251\230\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"/* \345\225\206\345\256\266\345\244\264\350\241\224 */\n"
"#seller_title {\n"
"    font-size: 25px;\n"
"    color: #FF6A00; /* \346\251\230\350\211"
                        "\262 */\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* \345\225\206\345\223\201\346\224\266\350\227\217\346\214\211\351\222\256 */\n"
"#collect_button {\n"
"    background-color: #FF6A00; /* \346\251\230\350\211\262\350\203\214\346\231\257 */\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 8px 16px;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"#collect_button:hover {\n"
"    background-color: #FF4500; /* \346\251\230\350\211\262\346\202\254\345\201\234\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"#collect_button:pressed {\n"
"    background-color: #CC3700; /* \346\251\230\350\211\262\346\214\211\344\270\213\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* \347\252\227\345\217\243\344\270\255\347\232\204\345\210\206\345\211\262\347\272\277 */\n"
"QFrame {\n"
"    border: 1px solid #FF6A00; /* \346\251\230\350\211\262\345\210\206\345\211\262\347\272\277 */\n"
"    margin: 20px 0;\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\345\214\272\345\237\237\346\240\267\345\274"
                        "\217 */\n"
"QScrollArea {\n"
"    border: 1px solid #EEEEEE; /* \347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    background-color: #FFFFFF; /* \347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QScrollArea QScrollBar:vertical {\n"
"    background: #F5F5F5; /* \346\265\205\347\201\260\350\211\262 */\n"
"    width: 10px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QScrollArea QScrollBar::handle:vertical {\n"
"    background: #FF6A00; /* \346\251\230\350\211\262\346\273\232\345\212\250\346\235\241\346\273\221\345\235\227 */\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"/* ToolButton \346\240\267\345\274\217 */\n"
"QToolButton {\n"
"    background-color: #FF6A00; /* \346\251\230\350\211\262\350\203\214\346\231\257 */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 8px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: #FF4500; /* \346\251\230\347\272\242\350\211\262\346\202\254\345\201\234\346\225\210\346\236\234 */\n"
""
                        "}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: #CC3700; /* \346\267\261\346\251\230\350\211\262\346\214\211\344\270\213\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* \345\225\206\345\223\201\347\261\273\345\236\213\351\200\211\346\213\251\345\214\272\345\237\237 */\n"
"#product_type {\n"
"    background-color: #FAFAFA; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    border: 1px solid #FF6A00; /* \346\251\230\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* \346\240\267\345\274\217\351\200\211\346\213\251\346\240\207\347\255\276 */\n"
"#style_label {\n"
"    font-size: 25px;\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262 */\n"
"    margin-right: 10px;\n"
"}\n"
"\n"
"\n"
"QSpinBox {\n"
"    background-color: #FFFFFF; /* \344\270\273\344\275\223\350\203\214\346\231\257\344\270\272\347\231\275\350\211\262 */\n"
"    border: 1px solid #FF6A00; /* \344\270\273\344\275\223\350\276\271\346\241\206\344\270\272"
                        "\346\251\230\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    padding: 5px; /* \345\206\205\351\203\250\346\226\207\345\255\227\344\270\216\350\276\271\346\241\206\347\232\204\351\227\264\350\267\235 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260\350\211\262 */\n"
"}\n"
"\n"
"QSpinBox::up-button, QSpinBox::down-button {\n"
"    background-color: #FF6A00; /* \346\214\211\351\222\256\350\203\214\346\231\257\344\270\272\346\251\230\350\211\262 */\n"
"    subcontrol-origin: border; /* \345\255\220\346\216\247\344\273\266\345\237\272\344\272\216\350\276\271\346\241\206\345\270\203\345\261\200 */\n"
"    border: none; /* \345\216\273\346\216\211\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"    width: 20px; /* \346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    border-radius: 3px; /* \350\276\271\350"
                        "\247\222\345\234\206\346\266\246 */\n"
"}\n"
"\n"
"QSpinBox::up-arrow, QSpinBox::down-arrow {\n"
"    width: 8px; /* \347\256\255\345\244\264\345\256\275\345\272\246 */\n"
"    height: 8px; /* \347\256\255\345\244\264\351\253\230\345\272\246 */\n"
"    color: #FFFFFF; /* \347\256\255\345\244\264\344\270\272\347\231\275\350\211\262 */\n"
"    image: none; /* \344\275\277\347\224\250\351\273\230\350\256\244\347\232\204\347\273\230\345\210\266\346\226\271\345\274\217 */\n"
"}\n"
"\n"
"QSpinBox::up-arrow {\n"
"    margin: 2px; /* \345\220\221\344\270\212\347\256\255\345\244\264\344\270\216\346\214\211\351\222\256\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QSpinBox::down-arrow {\n"
"    margin: 2px; /* \345\220\221\344\270\213\347\256\255\345\244\264\344\270\216\346\214\211\351\222\256\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QSpinBox::up-button:hover, QSpinBox::down-button:hover {\n"
"    background-color: #FF4500; /* \346\202\254\345\201\234\346\227\266\346\214\211\351\222\256\345\217\230\344\270\272\346\251\230\347"
                        "\272\242\350\211\262 */\n"
"}\n"
"\n"
"QSpinBox::up-button:pressed, QSpinBox::down-button:pressed {\n"
"    background-color: #CC3700; /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\345\217\230\344\270\272\346\267\261\346\251\230\350\211\262 */\n"
"}\n"
""));
        widget = new QWidget(Commodity);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(170, 110, 801, 841));
        productImage = new QLabel(widget);
        productImage->setObjectName(QString::fromUtf8("productImage"));
        productImage->setGeometry(QRect(70, 30, 701, 681));
        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(220, 730, 361, 101));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        previousPage = new QPushButton(widget_4);
        previousPage->setObjectName(QString::fromUtf8("previousPage"));

        horizontalLayout_2->addWidget(previousPage);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        page = new QLabel(widget_5);
        page->setObjectName(QString::fromUtf8("page"));

        horizontalLayout_3->addWidget(page);


        horizontalLayout_2->addWidget(widget_5);

        nextPage = new QPushButton(widget_4);
        nextPage->setObjectName(QString::fromUtf8("nextPage"));

        horizontalLayout_2->addWidget(nextPage);

        merchantWidget = new QWidget(Commodity);
        merchantWidget->setObjectName(QString::fromUtf8("merchantWidget"));
        merchantWidget->setGeometry(QRect(40, 10, 1901, 101));
        gridLayout = new QGridLayout(merchantWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(merchantWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        EnterClient = new QPushButton(merchantWidget);
        EnterClient->setObjectName(QString::fromUtf8("EnterClient"));

        gridLayout->addWidget(EnterClient, 0, 4, 1, 1);

        ContactBusiness = new QPushButton(merchantWidget);
        ContactBusiness->setObjectName(QString::fromUtf8("ContactBusiness"));

        gridLayout->addWidget(ContactBusiness, 0, 3, 1, 1);

        ClientLabel = new QLabel(merchantWidget);
        ClientLabel->setObjectName(QString::fromUtf8("ClientLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setBold(true);
        ClientLabel->setFont(font);
        ClientLabel->setPixmap(QPixmap(QString::fromUtf8(":/Images/business.jpg")));
        ClientLabel->setScaledContents(true);

        gridLayout->addWidget(ClientLabel, 0, 0, 1, 1);

        label_2 = new QLabel(merchantWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        Return = new QPushButton(Commodity);
        Return->setObjectName(QString::fromUtf8("Return"));
        Return->setGeometry(QRect(50, 110, 91, 71));
        productInfoWidget = new QWidget(Commodity);
        productInfoWidget->setObjectName(QString::fromUtf8("productInfoWidget"));
        productInfoWidget->setGeometry(QRect(1070, 150, 831, 421));
        verticalLayout = new QVBoxLayout(productInfoWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        productName = new QLabel(productInfoWidget);
        productName->setObjectName(QString::fromUtf8("productName"));

        verticalLayout->addWidget(productName);

        productPrice = new QLabel(productInfoWidget);
        productPrice->setObjectName(QString::fromUtf8("productPrice"));

        verticalLayout->addWidget(productPrice);

        delivery = new QLabel(productInfoWidget);
        delivery->setObjectName(QString::fromUtf8("delivery"));

        verticalLayout->addWidget(delivery);

        guarantee = new QLabel(productInfoWidget);
        guarantee->setObjectName(QString::fromUtf8("guarantee"));

        verticalLayout->addWidget(guarantee);

        productQuantity = new QSpinBox(productInfoWidget);
        productQuantity->setObjectName(QString::fromUtf8("productQuantity"));
        productQuantity->setMinimum(1);
        productQuantity->setMaximum(1000);
        productQuantity->setSingleStep(1);
        productQuantity->setValue(1);

        verticalLayout->addWidget(productQuantity);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        styleComboBox = new QComboBox(productInfoWidget);
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->setObjectName(QString::fromUtf8("styleComboBox"));

        verticalLayout->addWidget(styleComboBox);

        addToShoppingCart = new QPushButton(Commodity);
        addToShoppingCart->setObjectName(QString::fromUtf8("addToShoppingCart"));
        addToShoppingCart->setGeometry(QRect(1390, 800, 211, 71));
        purchase = new QPushButton(Commodity);
        purchase->setObjectName(QString::fromUtf8("purchase"));
        purchase->setGeometry(QRect(1110, 800, 201, 71));
        pushButton = new QPushButton(Commodity);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1820, 800, 71, 61));

        retranslateUi(Commodity);

        QMetaObject::connectSlotsByName(Commodity);
    } // setupUi

    void retranslateUi(QWidget *Commodity)
    {
        Commodity->setWindowTitle(QCoreApplication::translate("Commodity", "\345\225\206\345\223\201\350\257\246\347\273\206\351\241\265", nullptr));
        productImage->setText(QCoreApplication::translate("Commodity", "\345\225\206\345\223\201\345\233\276\347\211\207\345\261\225\347\244\272\345\214\272\345\237\237", nullptr));
        previousPage->setText(QCoreApplication::translate("Commodity", "\344\270\212\344\270\200\351\241\265", nullptr));
        page->setText(QCoreApplication::translate("Commodity", "\351\241\265\347\240\201", nullptr));
        nextPage->setText(QCoreApplication::translate("Commodity", "\344\270\213\344\270\200\351\241\265", nullptr));
        label->setText(QCoreApplication::translate("Commodity", "\345\272\227\351\223\272\345\220\215\347\247\260\357\274\232  \345\276\267\350\212\231", nullptr));
        EnterClient->setText(QCoreApplication::translate("Commodity", "\350\277\233\345\205\245\345\272\227\351\223\272", nullptr));
        ContactBusiness->setText(QCoreApplication::translate("Commodity", "\350\201\224\347\263\273\345\225\206\345\256\266", nullptr));
        ClientLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("Commodity", "\350\207\252\350\220\245           \351\207\221\346\240\207\350\256\244\350\257\201            8\345\271\264\350\200\201\345\272\227	           905.2\344\272\272\345\205\263\346\263\250", nullptr));
        Return->setText(QCoreApplication::translate("Commodity", "\350\277\224\345\233\236", nullptr));
        productName->setText(QCoreApplication::translate("Commodity", "\345\225\206\345\223\201\345\220\215\347\247\260	", nullptr));
        productPrice->setText(QCoreApplication::translate("Commodity", "\344\273\267\346\240\274", nullptr));
        delivery->setText(QCoreApplication::translate("Commodity", "\351\205\215\351\200\201", nullptr));
        guarantee->setText(QCoreApplication::translate("Commodity", "\344\277\235\351\232\234", nullptr));
#if QT_CONFIG(tooltip)
        productQuantity->setToolTip(QCoreApplication::translate("Commodity", "\351\200\211\346\213\251\345\225\206\345\223\201\346\225\260\351\207\217", nullptr));
#endif // QT_CONFIG(tooltip)
        styleComboBox->setItemText(0, QCoreApplication::translate("Commodity", "\347\273\277\350\211\262\346\254\276", nullptr));
        styleComboBox->setItemText(1, QCoreApplication::translate("Commodity", "\347\201\260\350\211\262\346\254\276", nullptr));
        styleComboBox->setItemText(2, QCoreApplication::translate("Commodity", "\351\273\221\350\211\262\346\254\276", nullptr));

        styleComboBox->setCurrentText(QCoreApplication::translate("Commodity", "\347\273\277\350\211\262\346\254\276", nullptr));
        addToShoppingCart->setText(QCoreApplication::translate("Commodity", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", nullptr));
        purchase->setText(QCoreApplication::translate("Commodity", "\347\233\264\346\216\245\350\264\255\344\271\260", nullptr));
        pushButton->setText(QCoreApplication::translate("Commodity", "\346\224\266\350\227\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Commodity: public Ui_Commodity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMODITY_H
