/********************************************************************************
** Form generated from reading UI file 'IntroducirOrdenMatricesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCIRORDENMATRICESDIALOG_H
#define UI_INTRODUCIRORDENMATRICESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IntroducirOrdenMatricesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *numeroDeFilasSpinBox;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QSpinBox *numerosDeColumnasSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IntroducirOrdenMatricesDialog)
    {
        if (IntroducirOrdenMatricesDialog->objectName().isEmpty())
            IntroducirOrdenMatricesDialog->setObjectName(QStringLiteral("IntroducirOrdenMatricesDialog"));
        IntroducirOrdenMatricesDialog->resize(452, 126);
        verticalLayout = new QVBoxLayout(IntroducirOrdenMatricesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(IntroducirOrdenMatricesDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        numeroDeFilasSpinBox = new QSpinBox(IntroducirOrdenMatricesDialog);
        numeroDeFilasSpinBox->setObjectName(QStringLiteral("numeroDeFilasSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, numeroDeFilasSpinBox);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(IntroducirOrdenMatricesDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        numerosDeColumnasSpinBox = new QSpinBox(IntroducirOrdenMatricesDialog);
        numerosDeColumnasSpinBox->setObjectName(QStringLiteral("numerosDeColumnasSpinBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, numerosDeColumnasSpinBox);


        verticalLayout->addLayout(formLayout_2);

        buttonBox = new QDialogButtonBox(IntroducirOrdenMatricesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(IntroducirOrdenMatricesDialog);

        QMetaObject::connectSlotsByName(IntroducirOrdenMatricesDialog);
    } // setupUi

    void retranslateUi(QDialog *IntroducirOrdenMatricesDialog)
    {
        IntroducirOrdenMatricesDialog->setWindowTitle(QApplication::translate("IntroducirOrdenMatricesDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("IntroducirOrdenMatricesDialog", "Numero de Filas", nullptr));
        label_2->setText(QApplication::translate("IntroducirOrdenMatricesDialog", "Numero de Columnas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntroducirOrdenMatricesDialog: public Ui_IntroducirOrdenMatricesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCIRORDENMATRICESDIALOG_H
