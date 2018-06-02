#include "widget.h"
#include "ui_widget.h"
#include <QPainter>


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

void Widget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);

    /*painter.setPen(Qt::blue);//poner azulito
    painter.setBrush(Qt::red);// relleno red
    painter.drawEllipse(10, 0, 100, 300);// es un circulo pero puedes poner mas con draw*/

    QPixmap img(":/fotos-curiosas-rana-montando-escarabajo-rinoceronte-520x350.jpg");
    resize(img.size()); //la ajustas el tamaño ala foto
    painter.drawPixmap(0, 0, img); //bordes y archivo

    QWidget::paintEvent(e);

}
