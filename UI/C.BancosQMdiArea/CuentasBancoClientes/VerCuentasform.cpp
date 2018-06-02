#include "VerCuentasform.h"
#include "ui_VerCuentasform.h"
#include "DuCuenta.h"
#include "Dudefines.h"
#include <QFile>
#include <QDataStream>
#include <QMessageBox>

VerCuentasForm::VerCuentasForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VerCuentasForm)
{
    ui->setupUi(this);

    layout()->setMargin(0);

    setWindowTitle("Ver cuentas");

    ui->tableWidget->setColumnCount(3); // Columnas 3
    ui->tableWidget->setHorizontalHeaderLabels({"ID", "ID cliente", "Saldo"});

    on_recargarPushButton_clicked();

}

VerCuentasForm::~VerCuentasForm()
{
    delete ui;
}

void VerCuentasForm::on_recargarPushButton_clicked()
{
    ui->tableWidget->setRowCount(0);


    QFile F(CUENTAS_FILENAME);

    if (!F.open(QIODevice::ReadOnly))
    {
       QMessageBox::critical(this, "Error", F.errorString());
               return;
    }

    QDataStream in(&F);
    in.setVersion(QDataStream::Qt_5_10);

    DuCuenta cuenta;
    while (!in.atEnd()) //Mientras no estemos en el final
    {
        in >> cuenta;
        const int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row); // inserta columna row
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(cuenta.id())));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(cuenta.idCliente())));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(cuenta.saldo())));
    }


    F.close();

}
