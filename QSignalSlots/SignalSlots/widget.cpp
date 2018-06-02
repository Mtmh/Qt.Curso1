#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //connect(ui->pushButton, &QPushButton::clicked, this, &Widget::close);
    //Metodo1 conectar boton cerrar
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(cerrarApp()));
    // Metodo2 tradicional con funcion y declarado en widget.h

}

Widget::~Widget()
{
    delete ui;
}

void Widget::cerrarApp()
{
   close();
}
