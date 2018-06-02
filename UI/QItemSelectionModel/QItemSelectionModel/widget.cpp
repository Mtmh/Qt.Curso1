#include "widget.h"
#include "ui_widget.h"
#include <QStandardItemModel>
#include <QItemSelectionModel>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    mStdModel = new QStandardItemModel(this);
    mSelectionModel = new QItemSelectionModel (mStdModel, this);
    mStdModel->setColumnCount(5);
    mStdModel->setRowCount(10);

    ui->tableView->setModel(mStdModel);
    ui->tableView->setSelectionModel(mSelectionModel);
    ui->horizontalSlider->setMaximum(5);

    for (int i = 0; i < 10; ++i){
        for (int j = 0; j < 5; ++j){
            mStdModel->setItem(i, j, new QStandardItem("hola"));
        }
    }

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_horizontalSlider_valueChanged(int value)
{
    auto idx = ui->tableView->currentIndex();
    mSelectionModel->select(QItemSelection(idx,
    mStdModel->index(idx.row(), value)), QItemSelectionModel::Select);

}
