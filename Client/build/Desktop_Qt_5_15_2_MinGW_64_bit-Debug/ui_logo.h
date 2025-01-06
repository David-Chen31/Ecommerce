/********************************************************************************
** Form generated from reading UI file 'logo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGO_H
#define UI_LOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Logo
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *Logo)
    {
        if (Logo->objectName().isEmpty())
            Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->resize(1430, 1018);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Logo->sizePolicy().hasHeightForWidth());
        Logo->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Logo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Logo);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/logo.jpg")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(Logo);

        QMetaObject::connectSlotsByName(Logo);
    } // setupUi

    void retranslateUi(QWidget *Logo)
    {
        Logo->setWindowTitle(QCoreApplication::translate("Logo", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Logo: public Ui_Logo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGO_H
