#include "widget.h"
#include "ui_widget.h"
#include <QResizeEvent>
#include <QDebug>

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

void Widget::resizeEvent(QResizeEvent *e)
{
    qDebug() << e->size(); //Aqui puedes redimensionar el tamaño
    QWidget::resizeEvent(e);// asi sabes el tamaño que implantar
}
