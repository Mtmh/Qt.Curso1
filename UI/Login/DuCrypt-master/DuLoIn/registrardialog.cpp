#include "registrardialog.h"
#include "ui_registrardialog.h"

RegistrarDialog::RegistrarDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarDialog)
{
    ui->setupUi(this);
}

RegistrarDialog::~RegistrarDialog()
{
    delete ui;
}
