/********************************************************************************
** Form generated from reading UI file 'DuKeyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUKEYFORM_H
#define UI_DUKEYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DuKeyForm
{
public:

    void setupUi(QWidget *DuKeyForm)
    {
        if (DuKeyForm->objectName().isEmpty())
            DuKeyForm->setObjectName(QStringLiteral("DuKeyForm"));
        DuKeyForm->resize(400, 300);

        retranslateUi(DuKeyForm);

        QMetaObject::connectSlotsByName(DuKeyForm);
    } // setupUi

    void retranslateUi(QWidget *DuKeyForm)
    {
        DuKeyForm->setWindowTitle(QApplication::translate("DuKeyForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DuKeyForm: public Ui_DuKeyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUKEYFORM_H
