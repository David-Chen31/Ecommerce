/********************************************************************************
** Form generated from reading UI file 'order_management.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_MANAGEMENT_H
#define UI_ORDER_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderManagement
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *topLayout;
    QLineEdit *searchBox;
    QPushButton *searchButton;
    QHBoxLayout *filterLayout;
    QPushButton *shippedButton;
    QPushButton *unshippedButton;
    QPushButton *returnInProgressButton;
    QPushButton *returnCompleteButton;
    QScrollArea *orderScrollArea;
    QWidget *orderScrollWidget;

    void setupUi(QWidget *OrderManagement)
    {
        if (OrderManagement->objectName().isEmpty())
            OrderManagement->setObjectName(QString::fromUtf8("OrderManagement"));
        OrderManagement->resize(2010, 1060);
        OrderManagement->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262\357\274\214\345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260\350\211\262 */\n"
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
"/* Checkable QPushButton \346\240\267\345\274\217 */\n"
"QPushButton:checked {\n"
"    background-color: #4682B4; /* \346\267\261\350\223\235\350\211\262\351\200\211\344\270\255\350\203\214\346\231\257 */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border: 1px solid #1E90FF;\n"
"}\n"
"\n"
"/* QScrollArea \346\240\267\345\274\217 */\n"
"QScrollArea {\n"
"    border: none;\n"
"    background: #FFFFFF;\n"
"}\n"
"\n"
"QScrollArea > QWidget > QScrollBar {\n"
"    background-color: #F5F5F5; /* \346\265\205\347\201\260\350\211\262\346\273\232\345\212\250\346\235\241\350\203\214\346\231\257 */"
                        "\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\346\235\241\346\240\267\345\274\217 */\n"
"QScrollBar:vertical {\n"
"    background: #E0E0E0; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    width: 12px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #1E90FF; /* \345\244\251\350\223\235\350\211\262\346\273\232\345\212\250\346\235\241 */\n"
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
"/* \346\214\211\351\222\256\345\270\203\345\261\200\351\227\264\347\232\204\351\227\264\351\232\224 */\n"
"QHBoxL"
                        "ayout > QPushButton {\n"
"    margin: 5px;\n"
"}\n"
""));
        mainLayout = new QVBoxLayout(OrderManagement);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        topLayout = new QHBoxLayout();
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        searchBox = new QLineEdit(OrderManagement);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        topLayout->addWidget(searchBox);

        searchButton = new QPushButton(OrderManagement);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        topLayout->addWidget(searchButton);


        mainLayout->addLayout(topLayout);

        filterLayout = new QHBoxLayout();
        filterLayout->setObjectName(QString::fromUtf8("filterLayout"));
        shippedButton = new QPushButton(OrderManagement);
        shippedButton->setObjectName(QString::fromUtf8("shippedButton"));
        shippedButton->setCheckable(true);

        filterLayout->addWidget(shippedButton);

        unshippedButton = new QPushButton(OrderManagement);
        unshippedButton->setObjectName(QString::fromUtf8("unshippedButton"));
        unshippedButton->setCheckable(true);

        filterLayout->addWidget(unshippedButton);

        returnInProgressButton = new QPushButton(OrderManagement);
        returnInProgressButton->setObjectName(QString::fromUtf8("returnInProgressButton"));
        returnInProgressButton->setCheckable(true);

        filterLayout->addWidget(returnInProgressButton);

        returnCompleteButton = new QPushButton(OrderManagement);
        returnCompleteButton->setObjectName(QString::fromUtf8("returnCompleteButton"));
        returnCompleteButton->setCheckable(true);

        filterLayout->addWidget(returnCompleteButton);


        mainLayout->addLayout(filterLayout);

        orderScrollArea = new QScrollArea(OrderManagement);
        orderScrollArea->setObjectName(QString::fromUtf8("orderScrollArea"));
        orderScrollArea->setWidgetResizable(true);
        orderScrollWidget = new QWidget();
        orderScrollWidget->setObjectName(QString::fromUtf8("orderScrollWidget"));
        orderScrollWidget->setGeometry(QRect(0, 0, 1992, 936));
        orderScrollArea->setWidget(orderScrollWidget);

        mainLayout->addWidget(orderScrollArea);


        retranslateUi(OrderManagement);

        QMetaObject::connectSlotsByName(OrderManagement);
    } // setupUi

    void retranslateUi(QWidget *OrderManagement)
    {
        OrderManagement->setWindowTitle(QCoreApplication::translate("OrderManagement", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
        searchBox->setPlaceholderText(QCoreApplication::translate("OrderManagement", "\350\257\267\350\276\223\345\205\245\350\256\242\345\215\225\345\217\267\346\210\226\345\256\242\346\210\267\345\220\215\347\247\260...", nullptr));
        searchButton->setText(QCoreApplication::translate("OrderManagement", "\346\220\234\347\264\242", nullptr));
        shippedButton->setText(QCoreApplication::translate("OrderManagement", "\345\267\262\345\217\221\350\264\247", nullptr));
        unshippedButton->setText(QCoreApplication::translate("OrderManagement", "\346\234\252\345\217\221\350\264\247", nullptr));
        returnInProgressButton->setText(QCoreApplication::translate("OrderManagement", "\351\200\200\350\264\247\345\244\204\347\220\206\344\270\255", nullptr));
        returnCompleteButton->setText(QCoreApplication::translate("OrderManagement", "\351\200\200\350\264\247\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderManagement: public Ui_OrderManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_MANAGEMENT_H
