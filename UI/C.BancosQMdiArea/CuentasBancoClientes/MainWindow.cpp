#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "AltaClienteform.h"
#include "AltaCuentaform.h"
#include "VerClientesform.h"
#include "VerCuentasform.h"
#include <QMdiSubWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->mdiArea);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAlta_clientes_triggered()
{
    loadSubWindow(new AltaClienteForm(this));
}

void MainWindow::on_actionAlta_de_cuentas_triggered()
{
    loadSubWindow(new AltaCuentaForm(this));
}

void MainWindow::on_actionVer_clientes_triggered()
{
    loadSubWindow(new VerClientesForm(this));
}

void MainWindow::on_actionVer_cuentas_triggered()
{
    loadSubWindow(new VerCuentasForm(this));
}

void MainWindow::on_actionSalir_triggered()
{
    close();
}

void MainWindow::loadSubWindow(QWidget *widget)
{
    int x, y, w, h;
    x = geometry().x() / 2;
    y = geometry().y() / 2;
    w = widget->sizeHint().width() + 30; // sizeHint: tamaño recomendado, width : anchura
    h = widget->sizeHint().height() + 30; // height : altura



    auto window = ui->mdiArea->addSubWindow(widget); // Adjuntamos el widget
    window->setWindowTitle(widget->windowTitle());  // le ponemos el titulo
    window->setWindowIcon(widget->windowIcon());   //  le adjuntamos el icon

    window->setGeometry(x, y, w, h); // geometria para centrar la ventana
    window->show(); // iniciar ventana
}
