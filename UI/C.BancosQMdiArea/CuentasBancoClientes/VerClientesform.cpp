#include "VerClientesform.h"
#include "ui_VerClientesform.h"
#include "Dudefines.h"
#include "DuCliente.h"
#include <QFile>
#include <QDataStream>
#include <QMessageBox>

VerClientesForm::VerClientesForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VerClientesForm)
{
    ui->setupUi(this);

    layout()->setMargin(0);

    setWindowTitle("Ver clientes");

    ui->tableWidget->setColumnCount(4); // 4 columnas le imprementamos
    ui->tableWidget->setHorizontalHeaderLabels({"ID", "Nombre","Direccion", "Telefono"});

    on_recargarPushButton_clicked();


}

VerClientesForm::~VerClientesForm()
{
    delete ui;
}

void VerClientesForm::on_recargarPushButton_clicked()
{
    ui->tableWidget->setRowCount(0);


    QFile F(CLIENTES_FILENAME);

    if (F.open(QIODevice::ReadOnly)) // si  abre: (ReadOnly:Solo lectura)
    {
        QMessageBox::critical(this, "Error", F.errorString());
        return;
    }

    QDataStream in(&F);
    in.setVersion((QDataStream::Qt_5_10));
    DuCliente cliente;
    while (!in.atEnd()) { // mientras no este en el final del archivo
        in >> cliente; // lectura de cliente
        const int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row); //insertamos  Row: es filas
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(cliente.id())));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(cliente.nombre()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(cliente.direccion()));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(cliente.telefono()));

    }

    F.close();
}
