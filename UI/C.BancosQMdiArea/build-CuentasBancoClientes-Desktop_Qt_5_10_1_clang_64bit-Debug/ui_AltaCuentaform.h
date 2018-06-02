/********************************************************************************
** Form generated from reading UI file 'AltaCuentaform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTACUENTAFORM_H
#define UI_ALTACUENTAFORM_H

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

class Ui_AltaCuentaForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *alta2PushButton;

    void setupUi(QWidget *AltaCuentaForm)
    {
        if (AltaCuentaForm->objectName().isEmpty())
            AltaCuentaForm->setObjectName(QStringLiteral("AltaCuentaForm"));
        AltaCuentaForm->resize(394, 160);
        verticalLayout = new QVBoxLayout(AltaCuentaForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(AltaCuentaForm);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        alta2PushButton = new QPushButton(AltaCuentaForm);
        alta2PushButton->setObjectName(QStringLiteral("alta2PushButton"));

        horizontalLayout->addWidget(alta2PushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AltaCuentaForm);

        QMetaObject::connectSlotsByName(AltaCuentaForm);
    } // setupUi

    void retranslateUi(QWidget *AltaCuentaForm)
    {
        AltaCuentaForm->setWindowTitle(QApplication::translate("AltaCuentaForm", "Form", nullptr));
        alta2PushButton->setText(QApplication::translate("AltaCuentaForm", "Alta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AltaCuentaForm: public Ui_AltaCuentaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTACUENTAFORM_H
