#include "dialog.h"
#include "ui_dialog.h"
#include "spinboxdelegate.h"
#include "sliderdelegate.h"
#include "fontcomboboxdelegate.h"
#include <QStandardItemModel>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    m_modelo = new QStandardItemModel(this);
    m_spinnerDelegate = new SpinBoxDelegate(this);
    m_sliderDelegate = new SliderDelegate(this);
    m_fcbDelegate = new FontComboBoxDelegate(this);

    m_modelo->setRowCount(3); // 3 columnas ancho
    m_modelo->setColumnCount(3); // "" alto

    ui->tableView->setModel(m_modelo);
    ui->tableView->setItemDelegateForColumn(0, m_spinnerDelegate);
    ui->tableView->setItemDelegateForColumn(1, m_sliderDelegate);
    ui->tableView->setItemDelegateForColumn(2, m_fcbDelegate);
}

Dialog::~Dialog()
{
    delete ui;
}
