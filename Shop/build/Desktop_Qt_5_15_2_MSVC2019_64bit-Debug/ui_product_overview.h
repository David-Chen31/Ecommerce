/********************************************************************************
** Form generated from reading UI file 'product_overview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_OVERVIEW_H
#define UI_PRODUCT_OVERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductOverview
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *searchLayout;
    QLineEdit *searchBox;
    QPushButton *filterButton;
    QScrollArea *goodsScrollArea;
    QWidget *scrollContent;
    QGridLayout *productGridLayout;

    void setupUi(QWidget *ProductOverview)
    {
        if (ProductOverview->objectName().isEmpty())
            ProductOverview->setObjectName(QString::fromUtf8("ProductOverview"));
        ProductOverview->resize(2010, 1060);
        ProductOverview->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262\357\274\214\345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260\350\211\262 */\n"
"QWidget {\n"
"    background-color: #FFFFFF;\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"/* QLineEdit \346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    background-color: #F5F5F5;\n"
"    border: 1px solid #1E90FF; /* \345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    padding: 8px;\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #63B8FF; /* \350\201\232\347\204\246\346\227\266\347\232\204\346\265\205\345\244\251\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* QPushButton \346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #1E90FF; /* \345\244\251\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    colo"
                        "r: white;\n"
"    border-radius: 5px;\n"
"    padding: 8px 15px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF; /* \346\265\205\345\244\251\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #4682B4; /* \346\267\261\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* QScrollArea \346\240\267\345\274\217 */\n"
"QScrollArea {\n"
"    border: none;\n"
"    background: #FFFFFF;\n"
"}\n"
"\n"
"QScrollArea > QWidget > QScrollBar {\n"
"    background-color: #F5F5F5; /* \346\265\205\347\201\260\350\211\262\346\273\232\345\212\250\346\235\241\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\346\235\241\346\240\267\345\274\217 */\n"
"QScrollBar:vertical {\n"
"    background: #E0E0E0; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    width: 12px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #1E90FF; /* \345"
                        "\244\251\350\223\235\350\211\262\346\273\232\345\212\250\346\235\241 */\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: #63B8FF; /* \346\202\254\346\265\256\346\227\266\345\217\230\346\265\205 */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: transparent;\n"
"    border: none;\n"
"    height: 0px;\n"
"}\n"
"\n"
"/* QScrollArea \345\206\205\351\203\250\345\206\205\345\256\271\346\240\267\345\274\217 */\n"
"QScrollArea QWidget {\n"
"    background-color: #FFFFFF;\n"
"    border: none;\n"
"}\n"
"\n"
"/* \344\272\247\345\223\201\347\275\221\346\240\274\345\270\203\345\261\200\345\206\205\345\256\271\346\240\267\345\274\217 */\n"
"QGridLayout > QWidget {\n"
"    border: 1px solid #DDDDDD;\n"
"    background-color: #F9F9F9;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QGridLayout > QWidget:hover {\n"
"    background-color: #F0F8FF; /* \346\265\205\350\223\235\350\211\262\346\202\254\346\265\256\346"
                        "\225\210\346\236\234 */\n"
"}\n"
""));
        mainLayout = new QVBoxLayout(ProductOverview);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        searchLayout = new QHBoxLayout();
        searchLayout->setObjectName(QString::fromUtf8("searchLayout"));
        searchBox = new QLineEdit(ProductOverview);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        searchLayout->addWidget(searchBox);

        filterButton = new QPushButton(ProductOverview);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));

        searchLayout->addWidget(filterButton);


        mainLayout->addLayout(searchLayout);

        goodsScrollArea = new QScrollArea(ProductOverview);
        goodsScrollArea->setObjectName(QString::fromUtf8("goodsScrollArea"));
        goodsScrollArea->setWidgetResizable(true);
        scrollContent = new QWidget();
        scrollContent->setObjectName(QString::fromUtf8("scrollContent"));
        scrollContent->setGeometry(QRect(0, 0, 1998, 997));
        productGridLayout = new QGridLayout(scrollContent);
        productGridLayout->setObjectName(QString::fromUtf8("productGridLayout"));
        goodsScrollArea->setWidget(scrollContent);

        mainLayout->addWidget(goodsScrollArea);


        retranslateUi(ProductOverview);

        QMetaObject::connectSlotsByName(ProductOverview);
    } // setupUi

    void retranslateUi(QWidget *ProductOverview)
    {
        ProductOverview->setWindowTitle(QCoreApplication::translate("ProductOverview", "\345\225\206\345\223\201\346\200\273\350\247\210", nullptr));
        searchBox->setPlaceholderText(QCoreApplication::translate("ProductOverview", "\346\220\234\347\264\242\345\225\206\345\223\201...", nullptr));
        filterButton->setText(QCoreApplication::translate("ProductOverview", "\347\255\233\351\200\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductOverview: public Ui_ProductOverview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_OVERVIEW_H
