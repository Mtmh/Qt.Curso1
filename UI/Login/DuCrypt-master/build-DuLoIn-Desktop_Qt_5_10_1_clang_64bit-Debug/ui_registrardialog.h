/********************************************************************************
** Form generated from reading UI file 'registrardialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARDIALOG_H
#define UI_REGISTRARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_RegistrarDialog
{
public:

    void setupUi(QDialog *RegistrarDialog)
    {
        if (RegistrarDialog->objectName().isEmpty())
            RegistrarDialog->setObjectName(QStringLiteral("RegistrarDialog"));
        RegistrarDialog->resize(400, 300);

        retranslateUi(RegistrarDialog);

        QMetaObject::connectSlotsByName(RegistrarDialog);
    } // setupUi

    void retranslateUi(QDialog *RegistrarDialog)
    {
        RegistrarDialog->setWindowTitle(QApplication::translate("RegistrarDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrarDialog: public Ui_RegistrarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARDIALOG_H
