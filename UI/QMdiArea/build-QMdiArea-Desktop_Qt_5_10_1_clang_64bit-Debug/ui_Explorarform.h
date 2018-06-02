/********************************************************************************
** Form generated from reading UI file 'Explorarform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPLORARFORM_H
#define UI_EXPLORARFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExplorarForm
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *EliminarPushButton;

    void setupUi(QWidget *ExplorarForm)
    {
        if (ExplorarForm->objectName().isEmpty())
            ExplorarForm->setObjectName(QStringLiteral("ExplorarForm"));
        ExplorarForm->resize(306, 528);
        verticalLayout = new QVBoxLayout(ExplorarForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(ExplorarForm);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        EliminarPushButton = new QPushButton(ExplorarForm);
        EliminarPushButton->setObjectName(QStringLiteral("EliminarPushButton"));

        horizontalLayout->addWidget(EliminarPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ExplorarForm);

        QMetaObject::connectSlotsByName(ExplorarForm);
    } // setupUi

    void retranslateUi(QWidget *ExplorarForm)
    {
        ExplorarForm->setWindowTitle(QApplication::translate("ExplorarForm", "Form", nullptr));
        EliminarPushButton->setText(QApplication::translate("ExplorarForm", "Eliminar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExplorarForm: public Ui_ExplorarForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPLORARFORM_H
