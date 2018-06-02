/********************************************************************************
** Form generated from reading UI file 'personadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONADIALOG_H
#define UI_PERSONADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PersonaDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nombre;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *edad;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *salario;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PersonaDialog)
    {
        if (PersonaDialog->objectName().isEmpty())
            PersonaDialog->setObjectName(QStringLiteral("PersonaDialog"));
        PersonaDialog->resize(368, 150);
        verticalLayout = new QVBoxLayout(PersonaDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(PersonaDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        nombre = new QLineEdit(PersonaDialog);
        nombre->setObjectName(QStringLiteral("nombre"));

        horizontalLayout->addWidget(nombre);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(PersonaDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        edad = new QSpinBox(PersonaDialog);
        edad->setObjectName(QStringLiteral("edad"));

        formLayout->setWidget(0, QFormLayout::FieldRole, edad);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_3 = new QLabel(PersonaDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        salario = new QDoubleSpinBox(PersonaDialog);
        salario->setObjectName(QStringLiteral("salario"));
        salario->setMaximum(1e+12);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, salario);


        verticalLayout->addLayout(formLayout_2);

        buttonBox = new QDialogButtonBox(PersonaDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PersonaDialog);

        QMetaObject::connectSlotsByName(PersonaDialog);
    } // setupUi

    void retranslateUi(QDialog *PersonaDialog)
    {
        PersonaDialog->setWindowTitle(QApplication::translate("PersonaDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("PersonaDialog", "Nombre:", nullptr));
        label_2->setText(QApplication::translate("PersonaDialog", "Edad:", nullptr));
        label_3->setText(QApplication::translate("PersonaDialog", "Salario:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonaDialog: public Ui_PersonaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONADIALOG_H
