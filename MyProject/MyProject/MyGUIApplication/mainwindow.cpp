#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <mysharedlib.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuitar_triggered()
{
    close();
}

void MainWindow::on_actionHola_mundo_triggered()
{
    MySharedLib mySharedLib;
    mySharedLib.sayHelloWorld();
}
