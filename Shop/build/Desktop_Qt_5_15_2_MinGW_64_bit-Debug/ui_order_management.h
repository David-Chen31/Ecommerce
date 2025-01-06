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
        OrderManagement->resize(1200, 800);
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
        orderScrollWidget->setGeometry(QRect(0, 0, 1186, 688));
        orderScrollArea->setWidget(orderScrollWidget);

        mainLayout->addWidget(orderScrollArea);


        retranslateUi(OrderManagement);

        QMetaObject::connectSlotsByName(OrderManagement);
    } // setupUi

    void retranslateUi(QWidget *OrderManagement)
    {
        OrderManagement->setWindowTitle(QCoreApplication::translate("OrderManagement", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
        searchBox->setStyleSheet(QCoreApplication::translate("OrderManagement", "\n"
"         QLineEdit {\n"
"             font-size: 20px;\n"
"             padding: 8px;\n"
"             border: 1px solid #FF6A00;\n"
"             border-radius: 5px;\n"
"         }\n"
"        ", nullptr));
        searchBox->setPlaceholderText(QCoreApplication::translate("OrderManagement", "\350\257\267\350\276\223\345\205\245\350\256\242\345\215\225\345\217\267\346\210\226\345\256\242\346\210\267\345\220\215\347\247\260...", nullptr));
        searchButton->setStyleSheet(QCoreApplication::translate("OrderManagement", "\n"
"         QPushButton {\n"
"             background-color: #FF6A00;\n"
"             color: white;\n"
"             font-size: 20px;\n"
"             padding: 8px 16px;\n"
"             border-radius: 5px;\n"
"         }\n"
"         QPushButton:hover {\n"
"             background-color: #FF4500;\n"
"         }\n"
"        ", nullptr));
        searchButton->setText(QCoreApplication::translate("OrderManagement", "\346\220\234\347\264\242", nullptr));
        shippedButton->setStyleSheet(QCoreApplication::translate("OrderManagement", "\n"
"         QPushButton {\n"
"             background-color: #F5F5F5;\n"
"             font-size: 18px;\n"
"             border: 1px solid #DDDDDD;\n"
"             border-radius: 5px;\n"
"             padding: 8px;\n"
"         }\n"
"         QPushButton:hover {\n"
"             background-color: #FFEDD6;\n"
"         }\n"
"         QPushButton:checked {\n"
"             background-color: #FF6A00;\n"
"             color: white;\n"
"         }\n"
"        ", nullptr));
        shippedButton->setText(QCoreApplication::translate("OrderManagement", "\345\267\262\345\217\221\350\264\247", nullptr));
        unshippedButton->setStyleSheet(QCoreApplication::translate("OrderManagement", "\n"
"         QPushButton {\n"
"             background-color: #F5F5F5;\n"
"             font-size: 18px;\n"
"             border: 1px solid #DDDDDD;\n"
"             border-radius: 5px;\n"
"             padding: 8px;\n"
"         }\n"
"         QPushButton:hover {\n"
"             background-color: #FFEDD6;\n"
"         }\n"
"         QPushButton:checked {\n"
"             background-color: #FF6A00;\n"
"             color: white;\n"
"         }\n"
"        ", nullptr));
        unshippedButton->setText(QCoreApplication::translate("OrderManagement", "\346\234\252\345\217\221\350\264\247", nullptr));
        returnInProgressButton->setStyleSheet(QCoreApplication::translate("OrderManagement", "\n"
"         QPushButton {\n"
"             background-color: #F5F5F5;\n"
"             font-size: 18px;\n"
"             border: 1px solid #DDDDDD;\n"
"             border-radius: 5px;\n"
"             padding: 8px;\n"
"         }\n"
"         QPushButton:hover {\n"
"             background-color: #FFEDD6;\n"
"         }\n"
"         QPushButton:checked {\n"
"             background-color: #FF6A00;\n"
"             color: white;\n"
"         }\n"
"        ", nullptr));
        returnInProgressButton->setText(QCoreApplication::translate("OrderManagement", "\351\200\200\350\264\247\345\244\204\347\220\206\344\270\255", nullptr));
        returnCompleteButton->setStyleSheet(QCoreApplication::translate("OrderManagement", "\n"
"         QPushButton {\n"
"             background-color: #F5F5F5;\n"
"             font-size: 18px;\n"
"             border: 1px solid #DDDDDD;\n"
"             border-radius: 5px;\n"
"             padding: 8px;\n"
"         }\n"
"         QPushButton:hover {\n"
"             background-color: #FFEDD6;\n"
"         }\n"
"         QPushButton:checked {\n"
"             background-color: #FF6A00;\n"
"             color: white;\n"
"         }\n"
"        ", nullptr));
        returnCompleteButton->setText(QCoreApplication::translate("OrderManagement", "\351\200\200\350\264\247\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderManagement: public Ui_OrderManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_MANAGEMENT_H
