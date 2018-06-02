#include "widget.h"
#include "ui_widget.h"
#include <QCompleter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QCompleter *cmpt;  // de completador
    QStringList lista;

    lista << "amigo" << "avion" << "avestruz" << "burro" << "bizarro";
    lista << "Amigo" << "Avion" << "Avestruz" << "Burro" << "Bizarro";
    lista << "conejo" << "camaron" << "comida" << "campo";
    lista << "Conejo" << "Camaron" << "Comida" << "Campo";
    lista << "diente" << "duna" <<"dona" << "dinero";
    lista << "Diente" << "Duna" <<"Dona" << "Dinero";

    cmpt = new QCompleter(lista, this);

    ui->lineEdit->setCompleter(cmpt); //Le añadimos al lineEdit el completador
}

Widget::~Widget()
{
    delete ui;
}
