#include "widget.h"
#include "ui_widget.h"
#include <QInputDialog>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this); // this (padre)
    ui->resultado->setText(""); // se cambia Lavel y  se deja en blanco
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    int n = QInputDialog::getInt(this, "Entrada", "Ingrese un valor: "); // Entrada si queremos int pero hay muchas mas poniendo get y lo que quieras

    ui->resultado->setText(QString::number(n)); // Salida
}
