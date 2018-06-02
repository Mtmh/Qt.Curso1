/********************************************************************************
** Form generated from reading UI file 'VerClientesform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERCLIENTESFORM_H
#define UI_VERCLIENTESFORM_H

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

class Ui_VerClientesForm
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *recargarPushButton;

    void setupUi(QWidget *VerClientesForm)
    {
        if (VerClientesForm->objectName().isEmpty())
            VerClientesForm->setObjectName(QStringLiteral("VerClientesForm"));
        VerClientesForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(VerClientesForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(VerClientesForm);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        recargarPushButton = new QPushButton(VerClientesForm);
        recargarPushButton->setObjectName(QStringLiteral("recargarPushButton"));

        horizontalLayout->addWidget(recargarPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VerClientesForm);

        QMetaObject::connectSlotsByName(VerClientesForm);
    } // setupUi

    void retranslateUi(QWidget *VerClientesForm)
    {
        VerClientesForm->setWindowTitle(QApplication::translate("VerClientesForm", "Form", nullptr));
        recargarPushButton->setText(QApplication::translate("VerClientesForm", "Recargar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VerClientesForm: public Ui_VerClientesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERCLIENTESFORM_H
