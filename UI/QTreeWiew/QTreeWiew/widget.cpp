#include "widget.h"
#include "ui_widget.h"
#include <QFileSystemModel>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QFileSystemModel *modelo = new QFileSystemModel(this);
    modelo->setRootPath(QDir::rootPath());

    ui->treeView->setModel(modelo); // Nos pone las carpeta como el QColumnWiew
                                    // en modo arbol

}

Widget::~Widget()
{
    delete ui;
}
