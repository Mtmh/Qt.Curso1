#include "widget.h"
#include "ui_widget.h"
#include <QSettings>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QSize  tamanyo;
    QPoint posicion;

    tamanyo  =  cargaAjustes("TAMANYO", "VENTANA", size()).value<QSize>();
    posicion =  cargaAjustes("POSICION", "VENTANA", pos()).value<QPoint>();

    resize(tamanyo);
    move(posicion);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::closeEvent(QCloseEvent *e)
{
    guardarAjustes("TAMANYO", size(), "VENTANA");
    guardarAjustes("POSICION", pos(), "VENTANA");
    QWidget::closeEvent(e);
}

void guardarAjustes(const QString &llave,
                    const QVariant &valor,
                     const QString &gpo)

{
   QSettings S;
   S.beginGroup(gpo);
   S.setValue(llave, valor);
   S.endGroup();
}

QVariant cargaAjustes(const QString  &llave,
                      const QString  &gpo,
                      const QVariant &valDefecto)

{
    QVariant  v;
    QSettings S;
    S.beginGroup(gpo);
    v = S.value(llave, valDefecto);
    S.endGroup();
    return v;

}
