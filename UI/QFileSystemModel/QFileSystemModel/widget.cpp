#include "widget.h"
#include "ui_widget.h"
#include <QCompleter>
#include <QFileSystemModel>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QCompleter *cmpt;  // de completador
    QFileSystemModel *mo;
    mo = new QFileSystemModel(this);
    cmpt = new QCompleter(mo, this);
    mo->setRootPath(QDir::rootPath()); // Empiece a buscar desde el disco duro

    ui->lineEdit->setCompleter(cmpt); //Le añadimos al lineEdit el completador
                                      // Acuerdate en win empieza con C en mac con " / "
}

Widget::~Widget()
{
    delete ui;
}
