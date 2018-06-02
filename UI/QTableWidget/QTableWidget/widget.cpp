#include "widget.h"
#include "ui_widget.h"
#include "personadialog.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList titulos;
    setWindowTitle("Empleados");
    ui->tableWidget->setColumnCount(3);//poner columnas
    titulos << "Nombre" << "Edad" << "Salario";
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_agregar_clicked()
{
    double salario;
    int res, edad, fila;
    QString nombre;
    PersonaDialog pd(this);
    pd.setWindowTitle("Captura de empleaddo");
    res = pd.exec();
    if (res == QDialog::Rejected)
        return;

    nombre  = pd.nombre();
    edad    = pd.edad();
    salario = pd.salario();
    
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());//inserta nueva fila alfinal
    fila = ui->tableWidget->rowCount() -1;
    ui->tableWidget->setItem(fila, NOMBRE,new QTableWidgetItem(nombre));
    ui->tableWidget->setItem(fila, EDAD, new QTableWidgetItem(QString::number(edad)));
    ui->tableWidget->setItem(fila,SALARIO, new QTableWidgetItem(QString::number(salario)));


}
