/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableViewA;
    QTableView *tableViewB;
    QFrame *line;
    QTableView *tableViewResultado;
    QHBoxLayout *horizontalLayout;
    QPushButton *introducirMatricesPushButton;
    QPushButton *calcularSumaDeMatricesPushButton;
    QPushButton *salirAplicacionPushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(864, 436);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableViewA = new QTableView(Widget);
        tableViewA->setObjectName(QStringLiteral("tableViewA"));

        horizontalLayout_2->addWidget(tableViewA);

        tableViewB = new QTableView(Widget);
        tableViewB->setObjectName(QStringLiteral("tableViewB"));

        horizontalLayout_2->addWidget(tableViewB);

        line = new QFrame(Widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        tableViewResultado = new QTableView(Widget);
        tableViewResultado->setObjectName(QStringLiteral("tableViewResultado"));

        horizontalLayout_2->addWidget(tableViewResultado);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        introducirMatricesPushButton = new QPushButton(Widget);
        introducirMatricesPushButton->setObjectName(QStringLiteral("introducirMatricesPushButton"));

        horizontalLayout->addWidget(introducirMatricesPushButton);

        calcularSumaDeMatricesPushButton = new QPushButton(Widget);
        calcularSumaDeMatricesPushButton->setObjectName(QStringLiteral("calcularSumaDeMatricesPushButton"));

        horizontalLayout->addWidget(calcularSumaDeMatricesPushButton);

        salirAplicacionPushButton = new QPushButton(Widget);
        salirAplicacionPushButton->setObjectName(QStringLiteral("salirAplicacionPushButton"));

        horizontalLayout->addWidget(salirAplicacionPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        introducirMatricesPushButton->setText(QApplication::translate("Widget", "Introducir matrices", nullptr));
        calcularSumaDeMatricesPushButton->setText(QApplication::translate("Widget", "Calcular la suma de matrices", nullptr));
        salirAplicacionPushButton->setText(QApplication::translate("Widget", "Salir de aplicacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
