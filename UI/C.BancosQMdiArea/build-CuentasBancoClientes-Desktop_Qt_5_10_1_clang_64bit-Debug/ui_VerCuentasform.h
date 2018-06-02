/********************************************************************************
** Form generated from reading UI file 'VerCuentasform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERCUENTASFORM_H
#define UI_VERCUENTASFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerCuentasForm
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *recargarPushButton;

    void setupUi(QWidget *VerCuentasForm)
    {
        if (VerCuentasForm->objectName().isEmpty())
            VerCuentasForm->setObjectName(QStringLiteral("VerCuentasForm"));
        VerCuentasForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(VerCuentasForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(VerCuentasForm);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        recargarPushButton = new QPushButton(VerCuentasForm);
        recargarPushButton->setObjectName(QStringLiteral("recargarPushButton"));

        horizontalLayout->addWidget(recargarPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VerCuentasForm);

        QMetaObject::connectSlotsByName(VerCuentasForm);
    } // setupUi

    void retranslateUi(QWidget *VerCuentasForm)
    {
        VerCuentasForm->setWindowTitle(QApplication::translate("VerCuentasForm", "Form", nullptr));
        recargarPushButton->setText(QApplication::translate("VerCuentasForm", "Recargar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VerCuentasForm: public Ui_VerCuentasForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERCUENTASFORM_H
