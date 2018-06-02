#include "widget.h"
#include "ui_widget.h"
#include <QDragEnterEvent>
#include <QMimeData>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setAcceptDrops(true);// true = 1; false = 0;
}

Widget::~Widget()
{
    delete ui;
}
void Widget::dragEnterEvent(QDragEnterEvent *event) // Entremos ventana
{
    event->accept();
}
void Widget::dragLeaveEvent(QDragLeaveEvent *event) // Salimos ventana
{
    event->accept();
}
void Widget::dragMoveEvent(QDragMoveEvent *event) // Moviendonos en ventana
{
    event->accept();
}
void Widget::dropEvent(QDropEvent *event) //Soltamos objeto en wentana
{
    QString nombreArch;
    QList <QUrl> urls;
    QList <QUrl>::Iterator i;
    urls = event->mimeData()->urls();

    for (i = urls.begin(); i != urls.end(); ++i)
    {
    nombreArch = i->fileName();
    ui->listWidget->addItem(nombreArch);
    }
}

void Widget::on_agregar_clicked()
{
    QString nombre;
    nombre = ui->nombre->text();

    if (nombre.isEmpty())
        return;

    ui->listWidget->addItem(nombre);
}

void Widget::on_eliminar_clicked()
{
    delete ui->listWidget->currentItem();
}
