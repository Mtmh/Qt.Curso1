#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_agregar_clicked()
{
    QString nombre;
    nombre = ui->nombre->text();

    if (nombre.isEmpty())
        return;

    ui->listWidget->addItem(nombre);
}

void Widget::on_eliminar_clicked()
{
    delete ui->listWidget->currentItem();
}
