/********************************************************************************
** Form generated from reading UI file 'root.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOT_H
#define UI_ROOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Root
{
public:
    QWidget *navigation;
    QHBoxLayout *navigationLayout;
    QPushButton *homeButton;
    QPushButton *SkipToFindGoodCommodities;
    QPushButton *SkipToPromotion;
    QPushButton *SkipToShoppingCart;
    QPushButton *SkipToPurchaseHistory;
    QPushButton *SkipToMessage;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton;
    QToolButton *toolButton_6;
    QToolButton *RefreshButton;
    QWidget *FunctionZone;
    QLabel *LogoWidget;

    void setupUi(QWidget *Root)
    {
        if (Root->objectName().isEmpty())
            Root->setObjectName(QString::fromUtf8("Root"));
        Root->resize(2050, 1107);
        Root->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\346\240\267\345\274\217 */\n"
"QWidget {\n"
"    background-color: #FFFFFF;\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 20px;\n"
"}\n"
"\n"
"/* \345\257\274\350\210\252\346\240\217\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton, QToolButton {\n"
"    background-color: #FF6A00;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QPushButton:hover, QToolButton:hover {\n"
"    background-color: #FF4500;\n"
"}\n"
"\n"
"QPushButton:pressed, QToolButton:pressed {\n"
"    background-color: #CC3700;\n"
"}\n"
"\n"
"/* \345\257\274\350\210\252\346\240\217\350\203\214\346\231\257 */\n"
"QWidget#navigation {\n"
"    \n"
"   \n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* Logo \346\240\267\345\274\217 */\n"
"QLabel#LogoWidget {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #FF6A00;\n"
"    background-color"
                        ": #FFFFFF;\n"
"    border: 2px solid #FF6A00;\n"
"    border-radius: 8px;\n"
"    padding: 20px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* \345\212\237\350\203\275\345\214\272\350\203\214\346\231\257 */\n"
"QWidget#FunctionZone {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #EEEEEE;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"}\n"
""));
        navigation = new QWidget(Root);
        navigation->setObjectName(QString::fromUtf8("navigation"));
        navigation->setGeometry(QRect(270, 10, 1741, 61));
        navigationLayout = new QHBoxLayout(navigation);
        navigationLayout->setObjectName(QString::fromUtf8("navigationLayout"));
        navigationLayout->setContentsMargins(0, 0, 0, 0);
        homeButton = new QPushButton(navigation);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));

        navigationLayout->addWidget(homeButton);

        SkipToFindGoodCommodities = new QPushButton(navigation);
        SkipToFindGoodCommodities->setObjectName(QString::fromUtf8("SkipToFindGoodCommodities"));

        navigationLayout->addWidget(SkipToFindGoodCommodities);

        SkipToPromotion = new QPushButton(navigation);
        SkipToPromotion->setObjectName(QString::fromUtf8("SkipToPromotion"));

        navigationLayout->addWidget(SkipToPromotion);

        SkipToShoppingCart = new QPushButton(navigation);
        SkipToShoppingCart->setObjectName(QString::fromUtf8("SkipToShoppingCart"));

        navigationLayout->addWidget(SkipToShoppingCart);

        SkipToPurchaseHistory = new QPushButton(navigation);
        SkipToPurchaseHistory->setObjectName(QString::fromUtf8("SkipToPurchaseHistory"));

        navigationLayout->addWidget(SkipToPurchaseHistory);

        SkipToMessage = new QPushButton(navigation);
        SkipToMessage->setObjectName(QString::fromUtf8("SkipToMessage"));

        navigationLayout->addWidget(SkipToMessage);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        navigationLayout->addItem(horizontalSpacer);

        toolButton = new QToolButton(navigation);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        navigationLayout->addWidget(toolButton);

        toolButton_6 = new QToolButton(navigation);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));

        navigationLayout->addWidget(toolButton_6);

        RefreshButton = new QToolButton(navigation);
        RefreshButton->setObjectName(QString::fromUtf8("RefreshButton"));

        navigationLayout->addWidget(RefreshButton);

        FunctionZone = new QWidget(Root);
        FunctionZone->setObjectName(QString::fromUtf8("FunctionZone"));
        FunctionZone->setGeometry(QRect(30, 89, 2000, 1001));
        LogoWidget = new QLabel(Root);
        LogoWidget->setObjectName(QString::fromUtf8("LogoWidget"));
        LogoWidget->setGeometry(QRect(61, 11, 121, 71));
        LogoWidget->setScaledContents(true);
        LogoWidget->setAlignment(Qt::AlignCenter);

        retranslateUi(Root);

        QMetaObject::connectSlotsByName(Root);
    } // setupUi

    void retranslateUi(QWidget *Root)
    {
        Root->setWindowTitle(QCoreApplication::translate("Root", "\344\270\273\347\225\214\351\235\242", nullptr));
        homeButton->setText(QCoreApplication::translate("Root", "\344\270\273\351\241\265", nullptr));
        SkipToFindGoodCommodities->setText(QCoreApplication::translate("Root", "\345\217\221\347\216\260\345\245\275\350\264\247", nullptr));
        SkipToPromotion->setText(QCoreApplication::translate("Root", "\344\277\203\351\224\200\346\264\273\345\212\250", nullptr));
        SkipToShoppingCart->setText(QCoreApplication::translate("Root", "\350\264\255\347\211\251\350\275\246", nullptr));
        SkipToPurchaseHistory->setText(QCoreApplication::translate("Root", "\350\264\255\344\271\260\350\256\260\345\275\225", nullptr));
        SkipToMessage->setText(QCoreApplication::translate("Root", "\346\266\210\346\201\257", nullptr));
        toolButton->setText(QCoreApplication::translate("Root", "\346\210\221\347\232\204", nullptr));
        toolButton_6->setText(QCoreApplication::translate("Root", "\350\256\276\347\275\256", nullptr));
        RefreshButton->setText(QCoreApplication::translate("Root", "\345\210\267\346\226\260", nullptr));
        LogoWidget->setText(QCoreApplication::translate("Root", "LOGO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Root: public Ui_Root {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOT_H
