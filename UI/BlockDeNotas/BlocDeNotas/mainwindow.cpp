#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPrintDialog> // impresora dialogo
#include <QFontDialog> // fuentes
#include <QColorDialog> // color dialogo fondo
#include <QMessageBox>
#include <QFileDialog> //Abrir archivo
#include <QTextStream> //Leer archivos
#include <QPrinter> // impresora
#include <QFile> //Archivos

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);//Quitar bordes de las paredes con texEdit
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbrir_triggered()
{
    QFile arch;
    QTextStream io;
    QString nombreArch;
    nombreArch = QFileDialog::getOpenFileName(this, "Abrir");

    if (nombreArch.isEmpty())//si esta vacio
        return;

    arch.setFileName(nombreArch);
    arch.open(QIODevice::ReadOnly | QIODevice::Text);
    if (!arch.isOpen()){
        QMessageBox::critical(this, "Error", arch.errorString());
        return;
    }
    // Si esta bien ponemos:

    io.setDevice(&arch);
    ui->textEdit->setText(io.readAll());
    // No Limpiamos porque es entrada
    arch.close();// Cerramos


}

void MainWindow::on_actionGuardar_como_triggered()
{

    QFile arch;
    QTextStream io;
    QString nombreArch;
    nombreArch = QFileDialog::getSaveFileName(this, "Guardar");

    if (nombreArch.isEmpty()) // Si esta vacio
        return; // retornamos

    arch.setFileName(nombreArch);
    arch.open(QIODevice::WriteOnly | QIODevice::Text);
    if (!arch.isOpen()) {
        QMessageBox::critical(this,"Error", arch.errorString());
        return;
    }

    // Si esta bien ponemos:

    io.setDevice(&arch);
    io << ui->textEdit->toPlainText();// Pedir el texto
    arch.flush(); // limpiamos
    arch.close(); // cerramos

}

void MainWindow::on_actionQuitar_triggered()
{
    close();
}

void MainWindow::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPegar_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionAcerca_de_triggered()
{
    QString txt;
    txt = "Autor: DuarteCorporation_Tiziano_Martin\n";
    txt += "Fecha: 22 de Marzo del 2018\n"; // Para agregar +=
    txt += "Software: (C) Notepad (R)";

    QMessageBox::about(this, "Notepad", txt);
}

void MainWindow::on_actionAcerca_de_QT_triggered()
{
    QMessageBox::aboutQt(this, "Qt");
}

void MainWindow::on_actionCortar_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionImprimir_triggered()
{
    QPrinter *impresora;
    QPrintDialog pd(this);
    if (pd.exec() == QDialog::Rejected)
        return;
    impresora = pd.printer();

    ui->textEdit->print(impresora);
}

void MainWindow::on_actionColor_Fuente_triggered()
{
    QColor color;
    color = QColorDialog::getColor(Qt::white,this);
    ui ->textEdit->setTextColor(color);
}

void MainWindow::on_actionTipo_Fuente_triggered()
{
    bool ok;
    QFont fuente;
    fuente = QFontDialog::getFont(&ok, this);
    if (!ok)
        return;
    ui ->textEdit->setFontPointSize(fuente.pointSizeF());
    ui ->textEdit->setFontFamily(fuente.family());
}

void MainWindow::on_actionColor_Fondo_triggered()
{
    QColor color;
    color = QColorDialog::getColor(Qt::white, this);
    ui ->textEdit->setPalette(color);
}
