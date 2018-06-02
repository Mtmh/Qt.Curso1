#include "widget.h"
#include "ui_widget.h"

Widget::Widget(int argc, char **argv, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    for (int ix = 1; ix < argc; ++ix)
    {
        ui->listWidget->addItem(argv[ix]);
    }
}

Widget::~Widget()
{
    delete ui;
}
