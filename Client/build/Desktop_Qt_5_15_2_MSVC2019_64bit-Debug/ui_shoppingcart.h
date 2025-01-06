/********************************************************************************
** Form generated from reading UI file 'shoppingcart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGCART_H
#define UI_SHOPPINGCART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShoppingCart
{
public:
    QHBoxLayout *mainLayout;
    QVBoxLayout *leftPanelLayout;
    QHBoxLayout *headerLayout;
    QLabel *headerLabel_5;
    QLabel *headerLabel_4;
    QLabel *headerLabel_3;
    QLabel *headerLabel_2;
    QLabel *headerLabel;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *cartItemLayout;
    QVBoxLayout *rightPanelLayout;
    QLabel *Title;
    QLabel *clientpingCartLogo;
    QHBoxLayout *selectedLayout;
    QLabel *SelectedNumber;
    QLabel *selectedValue;
    QHBoxLayout *totalLayout;
    QLabel *Total;
    QLabel *TotalValue;
    QRadioButton *checkAll;
    QPushButton *Settle;

    void setupUi(QWidget *ShoppingCart)
    {
        if (ShoppingCart->objectName().isEmpty())
            ShoppingCart->setObjectName(QString::fromUtf8("ShoppingCart"));
        ShoppingCart->resize(2000, 1000);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setBold(false);
        font.setKerning(false);
        ShoppingCart->setFont(font);
        ShoppingCart->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\203\214\346\231\257\350\211\262 */\n"
"QWidget {\n"
"    background-color: #f5f5f5;\n"
"    font-family: \"Microsoft YaHei\", Arial, sans-serif;\n"
"    font-size: 20px;\n"
"}\n"
"\n"
"/* \346\240\207\351\242\230\346\240\267\345\274\217 */\n"
"QLabel#Title {\n"
"    font-size: 22px;\n"
"    color: #333333;\n"
"    font-weight: bold;\n"
"    margin-bottom: 20px;\n"
"}\n"
"/* \346\240\207\347\255\276\350\241\214\346\240\267\345\274\217 */\n"
"QLabel#headerLabel {\n"
"    font-size: 20px;\n"
"    color: #555555;\n"
"    font-weight: bold;\n"
"    padding: 6px 0;\n"
"    border-bottom: 1px solid #dddddd;\n"
"    background-color: #f9f9f9;\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\345\214\272\345\237\237\346\240\267\345\274\217 */\n"
"QScrollArea {\n"
"    border: 1px solid #dddddd;\n"
"    background-color: #ffffff;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QScrollArea QWidget {\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"/* \345\233\276\347\211\207"
                        " LOGO \346\240\267\345\274\217 */\n"
"QLabel#clientpingCartLogo {\n"
"    border: 1px solid #dddddd;\n"
"    border-radius: 8px;\n"
"    margin: 10px;\n"
"}\n"
"\n"
"/* \345\267\262\351\200\211\345\225\206\345\223\201\346\225\260\351\207\217\345\222\214\346\200\273\344\273\267\345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"QLabel#SelectedNumber, QLabel#Total {\n"
"    font-size: 20px;\n"
"    color: #555555;\n"
"}\n"
"\n"
"QLabel#selectedValue, QLabel#TotalValue {\n"
"    font-size: 20px;\n"
"    color: #0078D7;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton#Settle {\n"
"    background-color: #0078D7;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton#Settle:hover {\n"
"    background-color: #005EA6;\n"
"    border: 1px solid #004A8C;\n"
"}\n"
"\n"
"QPushButton#Settle:pressed {\n"
"    background-color: #004A8C;\n"
"}\n"
"\n"
"/* \345\205\250\351\200\211\346\214\211"
                        "\351\222\256\346\240\267\345\274\217 */\n"
"QRadioButton#checkAll {\n"
"    font-size: 20px;\n"
"    color: #555555;\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234\346\225\210\346\236\234 */\n"
"QLabel:hover {\n"
"    color: #0078D7;\n"
"    text-decoration: underline;\n"
"}\n"
""));
        mainLayout = new QHBoxLayout(ShoppingCart);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        leftPanelLayout = new QVBoxLayout();
        leftPanelLayout->setObjectName(QString::fromUtf8("leftPanelLayout"));
        headerLayout = new QHBoxLayout();
        headerLayout->setObjectName(QString::fromUtf8("headerLayout"));
        headerLabel_5 = new QLabel(ShoppingCart);
        headerLabel_5->setObjectName(QString::fromUtf8("headerLabel_5"));

        headerLayout->addWidget(headerLabel_5);

        headerLabel_4 = new QLabel(ShoppingCart);
        headerLabel_4->setObjectName(QString::fromUtf8("headerLabel_4"));

        headerLayout->addWidget(headerLabel_4);

        headerLabel_3 = new QLabel(ShoppingCart);
        headerLabel_3->setObjectName(QString::fromUtf8("headerLabel_3"));

        headerLayout->addWidget(headerLabel_3);

        headerLabel_2 = new QLabel(ShoppingCart);
        headerLabel_2->setObjectName(QString::fromUtf8("headerLabel_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setBold(false);
        headerLabel_2->setFont(font1);

        headerLayout->addWidget(headerLabel_2);

        headerLabel = new QLabel(ShoppingCart);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));
        headerLabel->setEnabled(true);

        headerLayout->addWidget(headerLabel);

        horizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        headerLayout->addItem(horizontalSpacer);


        leftPanelLayout->addLayout(headerLayout);

        scrollArea = new QScrollArea(ShoppingCart);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1670, 930));
        cartItemLayout = new QVBoxLayout(scrollAreaWidgetContents);
        cartItemLayout->setObjectName(QString::fromUtf8("cartItemLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        leftPanelLayout->addWidget(scrollArea);


        mainLayout->addLayout(leftPanelLayout);

        rightPanelLayout = new QVBoxLayout();
        rightPanelLayout->setObjectName(QString::fromUtf8("rightPanelLayout"));
        Title = new QLabel(ShoppingCart);
        Title->setObjectName(QString::fromUtf8("Title"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setBold(true);
        Title->setFont(font2);
        Title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        rightPanelLayout->addWidget(Title);

        clientpingCartLogo = new QLabel(ShoppingCart);
        clientpingCartLogo->setObjectName(QString::fromUtf8("clientpingCartLogo"));
        clientpingCartLogo->setMinimumSize(QSize(300, 300));
        clientpingCartLogo->setMaximumSize(QSize(300, 300));
        clientpingCartLogo->setPixmap(QPixmap(QString::fromUtf8(":/image/9.jpg")));
        clientpingCartLogo->setScaledContents(true);

        rightPanelLayout->addWidget(clientpingCartLogo);

        selectedLayout = new QHBoxLayout();
        selectedLayout->setObjectName(QString::fromUtf8("selectedLayout"));
        SelectedNumber = new QLabel(ShoppingCart);
        SelectedNumber->setObjectName(QString::fromUtf8("SelectedNumber"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        SelectedNumber->setFont(font3);

        selectedLayout->addWidget(SelectedNumber);

        selectedValue = new QLabel(ShoppingCart);
        selectedValue->setObjectName(QString::fromUtf8("selectedValue"));
        selectedValue->setFont(font2);

        selectedLayout->addWidget(selectedValue);


        rightPanelLayout->addLayout(selectedLayout);

        totalLayout = new QHBoxLayout();
        totalLayout->setObjectName(QString::fromUtf8("totalLayout"));
        Total = new QLabel(ShoppingCart);
        Total->setObjectName(QString::fromUtf8("Total"));
        Total->setFont(font2);

        totalLayout->addWidget(Total);

        TotalValue = new QLabel(ShoppingCart);
        TotalValue->setObjectName(QString::fromUtf8("TotalValue"));
        TotalValue->setFont(font2);

        totalLayout->addWidget(TotalValue);


        rightPanelLayout->addLayout(totalLayout);

        checkAll = new QRadioButton(ShoppingCart);
        checkAll->setObjectName(QString::fromUtf8("checkAll"));
        checkAll->setFont(font3);

        rightPanelLayout->addWidget(checkAll);

        Settle = new QPushButton(ShoppingCart);
        Settle->setObjectName(QString::fromUtf8("Settle"));
        Settle->setMinimumSize(QSize(300, 50));
        Settle->setFont(font2);

        rightPanelLayout->addWidget(Settle);


        mainLayout->addLayout(rightPanelLayout);


        retranslateUi(ShoppingCart);

        QMetaObject::connectSlotsByName(ShoppingCart);
    } // setupUi

    void retranslateUi(QWidget *ShoppingCart)
    {
        ShoppingCart->setWindowTitle(QCoreApplication::translate("ShoppingCart", "\350\264\255\347\211\251\350\275\246", nullptr));
        headerLabel_5->setText(QCoreApplication::translate("ShoppingCart", "\345\225\206\345\223\201\345\233\276\347\211\207", nullptr));
        headerLabel_4->setText(QCoreApplication::translate("ShoppingCart", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        headerLabel_3->setText(QCoreApplication::translate("ShoppingCart", "\345\225\206\345\223\201\347\261\273\345\236\213", nullptr));
        headerLabel_2->setText(QCoreApplication::translate("ShoppingCart", "\350\264\255\344\271\260\346\225\260\351\207\217", nullptr));
        headerLabel->setText(QCoreApplication::translate("ShoppingCart", "\345\225\206\345\223\201\344\273\267\346\240\274", nullptr));
        Title->setText(QCoreApplication::translate("ShoppingCart", "\350\264\255\347\211\251\350\275\246", nullptr));
        SelectedNumber->setText(QCoreApplication::translate("ShoppingCart", "\345\267\262\351\200\211\345\225\206\345\223\201\357\274\232", nullptr));
        selectedValue->setText(QCoreApplication::translate("ShoppingCart", "0", nullptr));
        Total->setText(QCoreApplication::translate("ShoppingCart", "\346\200\273\344\273\267\357\274\232", nullptr));
        TotalValue->setText(QCoreApplication::translate("ShoppingCart", "\302\2450.00", nullptr));
        checkAll->setText(QCoreApplication::translate("ShoppingCart", "\345\205\250\351\200\211", nullptr));
        Settle->setText(QCoreApplication::translate("ShoppingCart", "\345\216\273\347\273\223\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShoppingCart: public Ui_ShoppingCart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGCART_H
