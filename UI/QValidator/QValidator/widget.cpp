#include "widget.h"
#include "ui_widget.h"
#include <QRegExpValidator>

#define EMAIL_RX "[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,64}" // es de swift pero le vale


//#define NOMBRE_RX "^[a-zA-Z][0-9a-zA-Z .,'-]*$"

#define CARACTERES_ESTRAÑOS "0123456789| !$%&/()=?¿¡.,;:_-><∑©√ßß µ„„…–^*+" //no  deja poner

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QRegExp rxEmail(EMAIL_RX);//, rxNombre(NOMBRE_RX);
    QRegExpValidator *valiEmail = new QRegExpValidator(rxEmail, this);
    //QRegExpValidator *valiNombre = new QRegExpValidator(rxNombre, this);
    ui->email->setValidator(valiEmail);
    //ui->nombre->setValidator(valiNombre);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_nombre_textEdited(const QString &arg1)
{
    QString texto = arg1;
    QString caracteresEstraños(CARACTERES_ESTRAÑOS);

    for (int i =0; i < texto.size(); ++i)
        foreach (const QChar &y, caracteresEstraños)

            if (texto.at(i) == y)

                        texto[i] = ' ';



    ui->nombre->setText(texto);
}
