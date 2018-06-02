#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{

    ui->setupUi(this);

    //connect(ui->quitar,SIGNAL(clicked()), this, SLOT(close())); // Metodo corto

// QObject::connect(ui->quitar,SIGNAL(clicked()), this, SLOT(close())); //Metodo abreviado


/*ui->setupUi(this);

    QPushButton *ptr = ui->quitar; // crear botton quitar

    QObject::connect(ptr,SIGNAL(clicked()), this, SLOT(close())); // conectamos (ptr que es el puntero con todo para cerrar

    ********Esto es el metodo largo*************
*/

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_quitar_clicked()
{
    close();
}
