#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

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

void Widget::on_aceptar_clicked()
{
   QString msj; // mensaje

   QStringList ciudades; // Lista de Ciudades

   if (ui->mexico->isChecked()) // Si es Mexico chequeamos
       ciudades << ui->mexico->text();

   if (ui->madrid->isChecked())
       ciudades << ui->madrid->text();

   if (ui->losAngeles->isChecked())
       ciudades << ui->losAngeles->text();

   if (ui->buenosAires->isChecked())
       ciudades << ui->buenosAires->text();

   msj = ciudades.join(',');
   msj.insert(0, "Las ciudades elegidas por usted son: ");
   QMessageBox::information(this, "Ciudades", msj);

}
