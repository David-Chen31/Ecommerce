/********************************************************************************
** Form generated from reading UI file 'promotion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOTION_H
#define UI_PROMOTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Promotion
{
public:
    QScrollArea *goodsScrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *advertisingLabel;
    QWidget *promotionWidget;
    QVBoxLayout *promotionLayout;
    QPushButton *SelectAll;
    QSpacerItem *verticalSpacer;
    QPushButton *SelectFlashSale;
    QSpacerItem *verticalSpacer_2;
    QPushButton *SelectDiscount;

    void setupUi(QWidget *Promotion)
    {
        if (Promotion->objectName().isEmpty())
            Promotion->setObjectName(QString::fromUtf8("Promotion"));
        Promotion->resize(2000, 1000);
        Promotion->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\256\276\347\275\256 */\n"
"QWidget {\n"
"    background-color: #FFFFFF;\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 20px;\n"
"}\n"
"\n"
"/* \345\225\206\345\223\201\346\273\232\345\212\250\345\214\272 */\n"
"QScrollArea {\n"
"    border: 1px solid #EEEEEE;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"QScrollArea QScrollBar:vertical {\n"
"    background: #F5F5F5;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollArea QScrollBar::handle:vertical {\n"
"    background: #FF6A00;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollArea QScrollBar::add-line:vertical, QScrollArea QScrollBar::sub-line:vertical {\n"
"    height: 0px;\n"
"}\n"
"\n"
"/* \345\267\246\344\276\247\345\271\277\345\221\212\345\233\276\347\211\207 */\n"
"QLabel#advertisingLabel {\n"
"    border: 2px solid #FF6A00;\n"
"    border-radius: 10px;\n"
"    margin: 10px;\n"
"}\n"
"\n"
"/* \345\225\206\345\223\201\346\240\207\347\255\276 */\n"
"QLabel {\n"
"    background-color: #FFF2E6;\n"
"    border: 1px "
                        "solid #FF6A00;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    text-align: center;\n"
"    font-size: 20px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: #FFEDD6;\n"
"}\n"
"\n"
"/* \346\264\273\345\212\250\346\214\211\351\222\256 */\n"
"QToolButton {\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 8px;\n"
"    margin: 5px;\n"
"    font-size: 20px;\n"
"}\n"
"\n"
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
"}"));
        goodsScrollArea = new QScrollArea(Promotion);
        goodsScrollArea->setObjectName(QString::fromUtf8("goodsScrollArea"));
        goodsScrollArea->setGeometry(QRect(340, 40, 1641, 941));
        goodsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1639, 939));
        goodsScrollArea->setWidget(scrollAreaWidgetContents);
        advertisingLabel = new QLabel(Promotion);
        advertisingLabel->setObjectName(QString::fromUtf8("advertisingLabel"));
        advertisingLabel->setGeometry(QRect(40, 80, 251, 571));
        advertisingLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/5.jpg")));
        advertisingLabel->setScaledContents(true);
        promotionWidget = new QWidget(Promotion);
        promotionWidget->setObjectName(QString::fromUtf8("promotionWidget"));
        promotionWidget->setGeometry(QRect(40, 690, 251, 281));
        promotionLayout = new QVBoxLayout(promotionWidget);
        promotionLayout->setObjectName(QString::fromUtf8("promotionLayout"));
        promotionLayout->setContentsMargins(0, 0, 0, 0);
        SelectAll = new QPushButton(promotionWidget);
        SelectAll->setObjectName(QString::fromUtf8("SelectAll"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SelectAll->sizePolicy().hasHeightForWidth());
        SelectAll->setSizePolicy(sizePolicy);

        promotionLayout->addWidget(SelectAll);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        promotionLayout->addItem(verticalSpacer);

        SelectFlashSale = new QPushButton(promotionWidget);
        SelectFlashSale->setObjectName(QString::fromUtf8("SelectFlashSale"));
        sizePolicy.setHeightForWidth(SelectFlashSale->sizePolicy().hasHeightForWidth());
        SelectFlashSale->setSizePolicy(sizePolicy);

        promotionLayout->addWidget(SelectFlashSale);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        promotionLayout->addItem(verticalSpacer_2);

        SelectDiscount = new QPushButton(promotionWidget);
        SelectDiscount->setObjectName(QString::fromUtf8("SelectDiscount"));
        sizePolicy.setHeightForWidth(SelectDiscount->sizePolicy().hasHeightForWidth());
        SelectDiscount->setSizePolicy(sizePolicy);

        promotionLayout->addWidget(SelectDiscount);


        retranslateUi(Promotion);

        QMetaObject::connectSlotsByName(Promotion);
    } // setupUi

    void retranslateUi(QWidget *Promotion)
    {
        Promotion->setWindowTitle(QCoreApplication::translate("Promotion", "\344\277\203\351\224\200\346\264\273\345\212\250", nullptr));
        SelectAll->setText(QCoreApplication::translate("Promotion", "\345\205\250\351\203\250", nullptr));
        SelectFlashSale->setText(QCoreApplication::translate("Promotion", "\351\231\220\346\227\266\347\247\222\346\235\200", nullptr));
        SelectDiscount->setText(QCoreApplication::translate("Promotion", "\351\231\220\346\227\266\346\212\230\346\211\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Promotion: public Ui_Promotion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOTION_H
