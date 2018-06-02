#include "Agregarform.h"
#include "ui_Agregarform.h"
#include <QFileSystemModel>

AgregarForm::AgregarForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AgregarForm)
{
    ui->setupUi(this);
    mModel = new QFileSystemModel(this);
    mModel->setRootPath(QDir::homePath());
    ui->columnView->setModel(mModel);
}

AgregarForm::~AgregarForm()
{
    delete ui;
}

void AgregarForm::on_agregarPushButton_clicked()
{
    emit selectedFile(ui->columnView->currentIndex());
}
