/********************************************************************************
** Form generated from reading UI file 'Agregarform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARFORM_H
#define UI_AGREGARFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AgregarForm
{
public:
    QVBoxLayout *verticalLayout;
    QColumnView *columnView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *agregarPushButton;

    void setupUi(QWidget *AgregarForm)
    {
        if (AgregarForm->objectName().isEmpty())
            AgregarForm->setObjectName(QStringLiteral("AgregarForm"));
        AgregarForm->resize(684, 223);
        verticalLayout = new QVBoxLayout(AgregarForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        columnView = new QColumnView(AgregarForm);
        columnView->setObjectName(QStringLiteral("columnView"));

        verticalLayout->addWidget(columnView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        agregarPushButton = new QPushButton(AgregarForm);
        agregarPushButton->setObjectName(QStringLiteral("agregarPushButton"));

        horizontalLayout->addWidget(agregarPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AgregarForm);

        QMetaObject::connectSlotsByName(AgregarForm);
    } // setupUi

    void retranslateUi(QWidget *AgregarForm)
    {
        AgregarForm->setWindowTitle(QApplication::translate("AgregarForm", "Form", nullptr));
        agregarPushButton->setText(QApplication::translate("AgregarForm", "Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AgregarForm: public Ui_AgregarForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARFORM_H
