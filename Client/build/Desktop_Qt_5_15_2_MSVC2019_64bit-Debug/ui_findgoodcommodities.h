/********************************************************************************
** Form generated from reading UI file 'findgoodcommodities.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDGOODCOMMODITIES_H
#define UI_FINDGOODCOMMODITIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindGoodCommodities
{
public:
    QWidget *goods_category;
    QVBoxLayout *categoryLayout;
    QPushButton *btn_clothing;
    QPushButton *btn_furniture;
    QPushButton *btn_pet;
    QWidget *search_widget;
    QLineEdit *productSearch;
    QPushButton *searchButton;
    QScrollArea *goodsScrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *FindGoodCommodities)
    {
        if (FindGoodCommodities->objectName().isEmpty())
            FindGoodCommodities->setObjectName(QString::fromUtf8("FindGoodCommodities"));
        FindGoodCommodities->resize(2000, 1000);
        FindGoodCommodities->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\256\276\347\275\256 */\n"
"QWidget {\n"
"    background-color: #FFFFFF;\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 20px;\n"
"}\n"
"\n"
"/* \346\240\207\351\242\230\345\255\227\344\275\223 */\n"
"QLabel {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #FF6A00;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
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
"\n"
"/* \346\220\234\347\264\242\346\240\217\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    border: 2px solid #FF6A00;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 20px;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #AAAAAA;\n"
"}\n"
"\n"
"\n"
"\n"
"/* \346\273\232\345"
                        "\212\250\345\214\272\346\240\267\345\274\217 */\n"
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
"\n"
"/* \345\225\206\345\223\201\346\250\241\345\235\227\346\240\267\345\274\217 */\n"
"QLabel {\n"
"    background-color: #FFF2E6;\n"
"    border: 1px solid #FF6A00;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: #FFEDD6;\n"
"}"));
        goods_category = new QWidget(FindGoodCommodities);
        goods_category->setObjectName(QString::fromUtf8("goods_category"));
        goods_category->setGeometry(QRect(30, 50, 201, 871));
        categoryLayout = new QVBoxLayout(goods_category);
        categoryLayout->setObjectName(QString::fromUtf8("categoryLayout"));
        btn_clothing = new QPushButton(goods_category);
        btn_clothing->setObjectName(QString::fromUtf8("btn_clothing"));

        categoryLayout->addWidget(btn_clothing);

        btn_furniture = new QPushButton(goods_category);
        btn_furniture->setObjectName(QString::fromUtf8("btn_furniture"));

        categoryLayout->addWidget(btn_furniture);

        btn_pet = new QPushButton(goods_category);
        btn_pet->setObjectName(QString::fromUtf8("btn_pet"));

        categoryLayout->addWidget(btn_pet);

        search_widget = new QWidget(FindGoodCommodities);
        search_widget->setObjectName(QString::fromUtf8("search_widget"));
        search_widget->setGeometry(QRect(380, 0, 1270, 80));
        productSearch = new QLineEdit(search_widget);
        productSearch->setObjectName(QString::fromUtf8("productSearch"));
        productSearch->setGeometry(QRect(10, 10, 1141, 51));
        searchButton = new QPushButton(search_widget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(1160, 10, 91, 51));
        goodsScrollArea = new QScrollArea(FindGoodCommodities);
        goodsScrollArea->setObjectName(QString::fromUtf8("goodsScrollArea"));
        goodsScrollArea->setGeometry(QRect(260, 100, 1720, 890));
        goodsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1718, 888));
        goodsScrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(FindGoodCommodities);

        QMetaObject::connectSlotsByName(FindGoodCommodities);
    } // setupUi

    void retranslateUi(QWidget *FindGoodCommodities)
    {
        FindGoodCommodities->setWindowTitle(QCoreApplication::translate("FindGoodCommodities", "\345\225\206\345\223\201\346\265\217\350\247\210", nullptr));
        btn_clothing->setText(QCoreApplication::translate("FindGoodCommodities", "\347\262\276\345\223\201\345\245\263\350\243\205", nullptr));
        btn_furniture->setText(QCoreApplication::translate("FindGoodCommodities", "\345\256\266\345\205\267", nullptr));
        btn_pet->setText(QCoreApplication::translate("FindGoodCommodities", "\345\256\240\347\211\251", nullptr));
        searchButton->setText(QCoreApplication::translate("FindGoodCommodities", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindGoodCommodities: public Ui_FindGoodCommodities {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDGOODCOMMODITIES_H
