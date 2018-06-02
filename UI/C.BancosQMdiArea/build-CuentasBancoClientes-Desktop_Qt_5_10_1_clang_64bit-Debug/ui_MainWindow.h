/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAlta_clientes;
    QAction *actionAlta_de_cuentas;
    QAction *actionVer_clientes;
    QAction *actionVer_cuentas;
    QAction *actionSalir;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(707, 484);
        actionAlta_clientes = new QAction(MainWindow);
        actionAlta_clientes->setObjectName(QStringLiteral("actionAlta_clientes"));
        actionAlta_de_cuentas = new QAction(MainWindow);
        actionAlta_de_cuentas->setObjectName(QStringLiteral("actionAlta_de_cuentas"));
        actionVer_clientes = new QAction(MainWindow);
        actionVer_clientes->setObjectName(QStringLiteral("actionVer_clientes"));
        actionVer_cuentas = new QAction(MainWindow);
        actionVer_cuentas->setObjectName(QStringLiteral("actionVer_cuentas"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 707, 22));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionAlta_clientes);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionAlta_de_cuentas);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionVer_clientes);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionVer_cuentas);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuArchivo->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAlta_clientes->setText(QApplication::translate("MainWindow", "Alta clientes", nullptr));
        actionAlta_de_cuentas->setText(QApplication::translate("MainWindow", "Alta de cuentas", nullptr));
        actionVer_clientes->setText(QApplication::translate("MainWindow", "Ver clientes", nullptr));
        actionVer_cuentas->setText(QApplication::translate("MainWindow", "Ver cuentas", nullptr));
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", nullptr));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
