/********************************************************************************
** Form generated from reading UI file 'purchasehistory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEHISTORY_H
#define UI_PURCHASEHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PurchaseHistory
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *mainContentLayout;
    QHBoxLayout *searchLayout;
    QLabel *labelSearch;
    QLineEdit *lineEditSearch;
    QPushButton *btnSearch;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *headerLabel_4;
    QLabel *headerLabel_3;
    QLabel *headerLabel_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *headerLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *PurchaseHistory)
    {
        if (PurchaseHistory->objectName().isEmpty())
            PurchaseHistory->setObjectName(QString::fromUtf8("PurchaseHistory"));
        PurchaseHistory->resize(2000, 972);
        PurchaseHistory->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\346\240\267\345\274\217 */\n"
"QWidget {\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 20px;\n"
"    background-color: #F9F9F9;\n"
"}\n"
"\n"
"QLabel {\n"
"    font-size: 20px;\n"
"    padding: 5px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #FF6A00;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 8px;\n"
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
"QLineEdit {\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    border: 1px solid #DDDDDD;\n"
"    gridline-color: #EEEEEE;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #FFECB3;\n"
"    color: black"
                        ";\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(PurchaseHistory);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mainContentLayout = new QVBoxLayout();
        mainContentLayout->setObjectName(QString::fromUtf8("mainContentLayout"));
        searchLayout = new QHBoxLayout();
        searchLayout->setObjectName(QString::fromUtf8("searchLayout"));
        labelSearch = new QLabel(PurchaseHistory);
        labelSearch->setObjectName(QString::fromUtf8("labelSearch"));

        searchLayout->addWidget(labelSearch);

        lineEditSearch = new QLineEdit(PurchaseHistory);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));

        searchLayout->addWidget(lineEditSearch);

        btnSearch = new QPushButton(PurchaseHistory);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));

        searchLayout->addWidget(btnSearch);


        mainContentLayout->addLayout(searchLayout);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        mainContentLayout->addItem(verticalSpacer_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        headerLabel_4 = new QLabel(PurchaseHistory);
        headerLabel_4->setObjectName(QString::fromUtf8("headerLabel_4"));

        horizontalLayout_2->addWidget(headerLabel_4);

        headerLabel_3 = new QLabel(PurchaseHistory);
        headerLabel_3->setObjectName(QString::fromUtf8("headerLabel_3"));

        horizontalLayout_2->addWidget(headerLabel_3);

        headerLabel_2 = new QLabel(PurchaseHistory);
        headerLabel_2->setObjectName(QString::fromUtf8("headerLabel_2"));

        horizontalLayout_2->addWidget(headerLabel_2);

        label = new QLabel(PurchaseHistory);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(PurchaseHistory);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        headerLabel = new QLabel(PurchaseHistory);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));

        horizontalLayout_2->addWidget(headerLabel);


        mainContentLayout->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(PurchaseHistory);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1978, 808));
        scrollArea->setWidget(scrollAreaWidgetContents);

        mainContentLayout->addWidget(scrollArea);


        horizontalLayout->addLayout(mainContentLayout);


        retranslateUi(PurchaseHistory);

        QMetaObject::connectSlotsByName(PurchaseHistory);
    } // setupUi

    void retranslateUi(QWidget *PurchaseHistory)
    {
        PurchaseHistory->setWindowTitle(QCoreApplication::translate("PurchaseHistory", "\350\264\255\347\211\251\350\256\260\345\275\225\347\225\214\351\235\242", nullptr));
        labelSearch->setText(QCoreApplication::translate("PurchaseHistory", "\350\256\242\345\215\225\346\220\234\347\264\242\357\274\232", nullptr));
        btnSearch->setText(QCoreApplication::translate("PurchaseHistory", "\346\220\234\347\264\242", nullptr));
        headerLabel_4->setText(QCoreApplication::translate("PurchaseHistory", "\345\225\206\345\223\201\345\233\276\347\211\207", nullptr));
        headerLabel_3->setText(QCoreApplication::translate("PurchaseHistory", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        headerLabel_2->setText(QCoreApplication::translate("PurchaseHistory", "\345\225\206\345\223\201\347\261\273\345\236\213", nullptr));
        label->setText(QCoreApplication::translate("PurchaseHistory", "\350\264\255\344\271\260\346\225\260\351\207\217", nullptr));
        label_2->setText(QCoreApplication::translate("PurchaseHistory", "\345\225\206\345\223\201\351\207\221\351\242\235", nullptr));
        headerLabel->setText(QCoreApplication::translate("PurchaseHistory", "\346\223\215\344\275\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PurchaseHistory: public Ui_PurchaseHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEHISTORY_H
