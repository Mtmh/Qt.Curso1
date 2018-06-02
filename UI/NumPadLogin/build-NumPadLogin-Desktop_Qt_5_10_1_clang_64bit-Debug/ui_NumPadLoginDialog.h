/********************************************************************************
** Form generated from reading UI file 'NumPadLoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMPADLOGINDIALOG_H
#define UI_NUMPADLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <DuNumericKeyPushButton.h>

QT_BEGIN_NAMESPACE

class Ui_NumPadLoginDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    DuNumericKeyPushButton *sietePushButton;
    DuNumericKeyPushButton *cuatroPushButton;
    DuNumericKeyPushButton *unoPushButton;
    QPushButton *clearPushButton;
    QVBoxLayout *verticalLayout_2;
    DuNumericKeyPushButton *ochoPushButton;
    DuNumericKeyPushButton *cincoPushButton;
    DuNumericKeyPushButton *dosPushButton;
    DuNumericKeyPushButton *ceroPushButton;
    QVBoxLayout *verticalLayout;
    DuNumericKeyPushButton *nuevePushButton;
    DuNumericKeyPushButton *seisPushButton;
    DuNumericKeyPushButton *tresPushButton;
    QPushButton *enterPushButton;

    void setupUi(QDialog *NumPadLoginDialog)
    {
        if (NumPadLoginDialog->objectName().isEmpty())
            NumPadLoginDialog->setObjectName(QStringLiteral("NumPadLoginDialog"));
        NumPadLoginDialog->resize(408, 364);
        verticalLayout_4 = new QVBoxLayout(NumPadLoginDialog);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lcdNumber = new QLCDNumber(NumPadLoginDialog);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        verticalLayout_4->addWidget(lcdNumber);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        sietePushButton = new DuNumericKeyPushButton(NumPadLoginDialog);
        sietePushButton->setObjectName(QStringLiteral("sietePushButton"));

        verticalLayout_3->addWidget(sietePushButton);

        cuatroPushButton = new DuNumericKeyPushButton(NumPadLoginDialog);
        cuatroPushButton->setObjectName(QStringLiteral("cuatroPushButton"));

        verticalLayout_3->addWidget(cuatroPushButton);

        unoPushButton = new DuNumericKeyPushButton(NumPadLoginDialog);
        unoPushButton->setObjectName(QStringLiteral("unoPushButton"));

        verticalLayout_3->addWidget(unoPushButton);

        clearPushButton = new QPushButton(NumPadLoginDialog);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout_3->addWidget(clearPushButton);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ochoPushButton = new DuNumericKeyPushButton(NumPadLoginDialog);
        ochoPushButton->setObjectName(QStringLiteral("ochoPushButton"));

        verticalLayout_2->addWidget(ochoPushButton);

        cincoPushButton = new DuNumericKeyPushButton(NumPadLoginDialog);
        cincoPushButton->setObjectName(QStringLiteral("cincoPushButton"));

        verticalLayout_2->addWidget(cincoPushButton);

        dosPushButton = new DuNumericKeyPushButton(NumPadLoginDialog);
        dosPushButton->setObjectName(QStringLiteral("dosPushButton"));

        verticalLayout_2->addWidget(dosPushButton);

        ceroPushButton = new DuNumericKeyPushButton(NumPadLoginDialog);
        ceroPushButton->setObjectName(QStringLiteral("ceroPushButton"));

        verticalLayout_2->addWidget(ceroPushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nuevePushButton = new DuNumericKeyPushButton(NumPadLoginDialog);
        nuevePushButton->setObjectName(QStringLiteral("nuevePushButton"));

        verticalLayout->addWidget(nuevePushButton);

        seisPushButton = new DuNumericKeyPushButton(NumPadLoginDialog);
        seisPushButton->setObjectName(QStringLiteral("seisPushButton"));

        verticalLayout->addWidget(seisPushButton);

        tresPushButton = new DuNumericKeyPushButton(NumPadLoginDialog);
        tresPushButton->setObjectName(QStringLiteral("tresPushButton"));

        verticalLayout->addWidget(tresPushButton);

        enterPushButton = new QPushButton(NumPadLoginDialog);
        enterPushButton->setObjectName(QStringLiteral("enterPushButton"));

        verticalLayout->addWidget(enterPushButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(NumPadLoginDialog);

        QMetaObject::connectSlotsByName(NumPadLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *NumPadLoginDialog)
    {
        NumPadLoginDialog->setWindowTitle(QApplication::translate("NumPadLoginDialog", "NumPadLoginDialog", nullptr));
        sietePushButton->setText(QApplication::translate("NumPadLoginDialog", "7", nullptr));
        cuatroPushButton->setText(QApplication::translate("NumPadLoginDialog", "4", nullptr));
        unoPushButton->setText(QApplication::translate("NumPadLoginDialog", "1", nullptr));
        clearPushButton->setText(QApplication::translate("NumPadLoginDialog", "CLEAR", nullptr));
        ochoPushButton->setText(QApplication::translate("NumPadLoginDialog", "8", nullptr));
        cincoPushButton->setText(QApplication::translate("NumPadLoginDialog", "5", nullptr));
        dosPushButton->setText(QApplication::translate("NumPadLoginDialog", "2", nullptr));
        ceroPushButton->setText(QApplication::translate("NumPadLoginDialog", "0", nullptr));
        nuevePushButton->setText(QApplication::translate("NumPadLoginDialog", "9", nullptr));
        seisPushButton->setText(QApplication::translate("NumPadLoginDialog", "6", nullptr));
        tresPushButton->setText(QApplication::translate("NumPadLoginDialog", "3", nullptr));
        enterPushButton->setText(QApplication::translate("NumPadLoginDialog", "ENTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumPadLoginDialog: public Ui_NumPadLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMPADLOGINDIALOG_H
