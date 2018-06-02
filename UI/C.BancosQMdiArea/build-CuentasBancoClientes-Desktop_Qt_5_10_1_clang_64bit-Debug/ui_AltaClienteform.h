/********************************************************************************
** Form generated from reading UI file 'AltaClienteform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTACLIENTEFORM_H
#define UI_ALTACLIENTEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AltaClienteForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *altaPushButton;

    void setupUi(QWidget *AltaClienteForm)
    {
        if (AltaClienteForm->objectName().isEmpty())
            AltaClienteForm->setObjectName(QStringLiteral("AltaClienteForm"));
        AltaClienteForm->resize(395, 115);
        verticalLayout = new QVBoxLayout(AltaClienteForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(AltaClienteForm);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        altaPushButton = new QPushButton(AltaClienteForm);
        altaPushButton->setObjectName(QStringLiteral("altaPushButton"));

        horizontalLayout->addWidget(altaPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AltaClienteForm);

        QMetaObject::connectSlotsByName(AltaClienteForm);
    } // setupUi

    void retranslateUi(QWidget *AltaClienteForm)
    {
        AltaClienteForm->setWindowTitle(QApplication::translate("AltaClienteForm", "Form", nullptr));
        altaPushButton->setText(QApplication::translate("AltaClienteForm", "Alta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AltaClienteForm: public Ui_AltaClienteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTACLIENTEFORM_H
