/********************************************************************************
** Form generated from reading UI file 'product_selection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_SELECTION_H
#define UI_PRODUCT_SELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductSelection
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *searchLayout;
    QLineEdit *searchBox;
    QPushButton *searchButton;
    QScrollArea *goodsScrollArea;
    QWidget *productListWidget;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirmSelectionButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ProductSelection)
    {
        if (ProductSelection->objectName().isEmpty())
            ProductSelection->setObjectName(QString::fromUtf8("ProductSelection"));
        ProductSelection->resize(2010, 1060);
        ProductSelection->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262\357\274\214\345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260\350\211\262 */\n"
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
"    border: 2px solid #1E90FF; /* \345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #63B8FF; /* \350\201\232\347\204\246\346\227\266\346\265\205\345\244\251\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* QPushButton \346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #1E90FF; /* \345\244\251\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    col"
                        "or: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 20px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    transition: background-color 0.3s ease, transform 0.2s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF; /* \346\265\205\345\244\251\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    transform: scale(1.05); /* \346\224\276\345\244\247\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #4682B4; /* \346\267\261\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    transform: scale(0.95); /* \347\274\251\345\260\217\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* QScrollArea \346\240\267\345\274\217 */\n"
"QScrollArea {\n"
"    border: 1px solid #1E90FF;\n"
"    background-color: #F5F5F5; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QScrollArea > QWidget {\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    background: #E0E0E0; /* \346\273\232\345\212"
                        "\250\346\235\241\350\203\214\346\231\257\346\265\205\347\201\260\350\211\262 */\n"
"    width: 14px;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #1E90FF; /* \346\273\232\345\212\250\346\235\241\345\244\251\350\223\235\350\211\262 */\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: #63B8FF; /* \346\202\254\346\265\256\346\227\266\346\273\232\345\212\250\346\235\241\346\265\205\345\244\251\350\223\235\350\211\262 */\n"
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
"/* QPushButton \345\270\203\345\261\200\351\227\264\350\267\235 */\n"
"QHBoxLayout > QPushButton {\n"
"    margin: 8px;\n"
"}\n"
""));
        gridLayout = new QGridLayout(ProductSelection);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        searchLayout = new QHBoxLayout();
        searchLayout->setObjectName(QString::fromUtf8("searchLayout"));
        searchBox = new QLineEdit(ProductSelection);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        searchLayout->addWidget(searchBox);

        searchButton = new QPushButton(ProductSelection);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        searchLayout->addWidget(searchButton);


        gridLayout->addLayout(searchLayout, 0, 0, 1, 1);

        goodsScrollArea = new QScrollArea(ProductSelection);
        goodsScrollArea->setObjectName(QString::fromUtf8("goodsScrollArea"));
        goodsScrollArea->setWidgetResizable(true);
        productListWidget = new QWidget();
        productListWidget->setObjectName(QString::fromUtf8("productListWidget"));
        productListWidget->setGeometry(QRect(0, 0, 1998, 930));
        goodsScrollArea->setWidget(productListWidget);

        gridLayout->addWidget(goodsScrollArea, 1, 0, 1, 1);

        widget = new QWidget(ProductSelection);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        confirmSelectionButton = new QPushButton(widget);
        confirmSelectionButton->setObjectName(QString::fromUtf8("confirmSelectionButton"));

        gridLayout_2->addWidget(confirmSelectionButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(ProductSelection);

        QMetaObject::connectSlotsByName(ProductSelection);
    } // setupUi

    void retranslateUi(QWidget *ProductSelection)
    {
        ProductSelection->setWindowTitle(QCoreApplication::translate("ProductSelection", "\345\225\206\345\223\201\351\200\211\346\213\251", nullptr));
        searchBox->setPlaceholderText(QCoreApplication::translate("ProductSelection", "\350\276\223\345\205\245\345\225\206\345\223\201\345\220\215\347\247\260\346\210\226\345\205\263\351\224\256\350\257\215\350\277\233\350\241\214\346\220\234\347\264\242...", nullptr));
        searchButton->setText(QCoreApplication::translate("ProductSelection", "\346\220\234\347\264\242", nullptr));
        confirmSelectionButton->setText(QCoreApplication::translate("ProductSelection", "\347\241\256\350\256\244\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductSelection: public Ui_ProductSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_SELECTION_H
