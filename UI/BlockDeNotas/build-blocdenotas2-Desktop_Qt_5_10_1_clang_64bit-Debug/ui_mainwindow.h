/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar_como;
    QAction *actionQuitar;
    QAction *actionCopiar;
    QAction *actionCortar;
    QAction *actionPegar;
    QAction *actionAcerca_de;
    QAction *actionAcerca_de_QT;
    QAction *actionImprimir;
    QAction *actionColor_Fuente;
    QAction *actionTipo_Fuente;
    QAction *actionColor_Fondo;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuAbrir;
    QMenu *menuEdicion;
    QMenu *menuFuente;
    QMenu *menuFondo;
    QMenu *menuAyuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(445, 300);
        QIcon icon;
        icon.addFile(QStringLiteral("acerca_de.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionGuardar_como = new QAction(MainWindow);
        actionGuardar_como->setObjectName(QStringLiteral("actionGuardar_como"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/guardar_como.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar_como->setIcon(icon2);
        actionQuitar = new QAction(MainWindow);
        actionQuitar->setObjectName(QStringLiteral("actionQuitar"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/quitar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitar->setIcon(icon3);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName(QStringLiteral("actionCopiar"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/copiar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon4);
        actionCortar = new QAction(MainWindow);
        actionCortar->setObjectName(QStringLiteral("actionCortar"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/cortar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCortar->setIcon(icon5);
        actionPegar = new QAction(MainWindow);
        actionPegar->setObjectName(QStringLiteral("actionPegar"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/pegar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPegar->setIcon(icon6);
        actionAcerca_de = new QAction(MainWindow);
        actionAcerca_de->setObjectName(QStringLiteral("actionAcerca_de"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/acerca_de.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAcerca_de->setIcon(icon7);
        actionAcerca_de_QT = new QAction(MainWindow);
        actionAcerca_de_QT->setObjectName(QStringLiteral("actionAcerca_de_QT"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/acerca_de_Qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAcerca_de_QT->setIcon(icon8);
        actionImprimir = new QAction(MainWindow);
        actionImprimir->setObjectName(QStringLiteral("actionImprimir"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons8-imprimir-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimir->setIcon(icon9);
        actionColor_Fuente = new QAction(MainWindow);
        actionColor_Fuente->setObjectName(QStringLiteral("actionColor_Fuente"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons8-paleta-de-pintura-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor_Fuente->setIcon(icon10);
        actionTipo_Fuente = new QAction(MainWindow);
        actionTipo_Fuente->setObjectName(QStringLiteral("actionTipo_Fuente"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons8-formato-de-estilo-de-fuente-filled-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTipo_Fuente->setIcon(icon11);
        actionColor_Fondo = new QAction(MainWindow);
        actionColor_Fondo->setObjectName(QStringLiteral("actionColor_Fondo"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons8-monitor-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor_Fondo->setIcon(icon12);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 445, 22));
        menuAbrir = new QMenu(menuBar);
        menuAbrir->setObjectName(QStringLiteral("menuAbrir"));
        menuEdicion = new QMenu(menuBar);
        menuEdicion->setObjectName(QStringLiteral("menuEdicion"));
        menuFuente = new QMenu(menuEdicion);
        menuFuente->setObjectName(QStringLiteral("menuFuente"));
        menuFondo = new QMenu(menuEdicion);
        menuFondo->setObjectName(QStringLiteral("menuFondo"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAbrir->menuAction());
        menuBar->addAction(menuEdicion->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuAbrir->addAction(actionAbrir);
        menuAbrir->addSeparator();
        menuAbrir->addAction(actionGuardar_como);
        menuAbrir->addSeparator();
        menuAbrir->addAction(actionImprimir);
        menuAbrir->addSeparator();
        menuAbrir->addAction(actionQuitar);
        menuEdicion->addAction(actionCopiar);
        menuEdicion->addSeparator();
        menuEdicion->addAction(actionCortar);
        menuEdicion->addSeparator();
        menuEdicion->addAction(actionPegar);
        menuEdicion->addSeparator();
        menuEdicion->addAction(menuFuente->menuAction());
        menuEdicion->addSeparator();
        menuEdicion->addAction(menuFondo->menuAction());
        menuEdicion->addSeparator();
        menuFuente->addAction(actionColor_Fuente);
        menuFuente->addSeparator();
        menuFuente->addAction(actionTipo_Fuente);
        menuFuente->addSeparator();
        menuFondo->addAction(actionColor_Fondo);
        menuFondo->addSeparator();
        menuAyuda->addAction(actionAcerca_de);
        menuAyuda->addSeparator();
        menuAyuda->addAction(actionAcerca_de_QT);
        mainToolBar->addAction(actionAbrir);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionGuardar_como);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopiar);
        mainToolBar->addAction(actionCortar);
        mainToolBar->addAction(actionPegar);
        mainToolBar->addAction(actionImprimir);
        mainToolBar->addAction(actionQuitar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Notepad", nullptr));
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAbrir->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionGuardar_como->setText(QApplication::translate("MainWindow", "Guardar como", nullptr));
#ifndef QT_NO_SHORTCUT
        actionGuardar_como->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_NO_SHORTCUT
        actionQuitar->setText(QApplication::translate("MainWindow", "Quitar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuitar->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopiar->setText(QApplication::translate("MainWindow", "Copiar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopiar->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionCortar->setText(QApplication::translate("MainWindow", "Cortar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCortar->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionPegar->setText(QApplication::translate("MainWindow", "Pegar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPegar->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionAcerca_de->setText(QApplication::translate("MainWindow", "Acerca  de", nullptr));
        actionAcerca_de_QT->setText(QApplication::translate("MainWindow", "Acerca de QT", nullptr));
        actionImprimir->setText(QApplication::translate("MainWindow", "Imprimir", nullptr));
        actionColor_Fuente->setText(QApplication::translate("MainWindow", "Color Fuente", nullptr));
        actionTipo_Fuente->setText(QApplication::translate("MainWindow", "Tipo Fuente", nullptr));
        actionColor_Fondo->setText(QApplication::translate("MainWindow", "Color Fondo", nullptr));
        menuAbrir->setTitle(QApplication::translate("MainWindow", "Archivo", nullptr));
        menuEdicion->setTitle(QApplication::translate("MainWindow", "Edicion", nullptr));
        menuFuente->setTitle(QApplication::translate("MainWindow", "Fuente", nullptr));
        menuFondo->setTitle(QApplication::translate("MainWindow", "Fondo", nullptr));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Ayuda", nullptr));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Herramientas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
