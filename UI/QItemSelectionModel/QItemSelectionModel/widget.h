#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class QStandardItemModel;
class QItemSelectionModel;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Widget *ui;
    QStandardItemModel *mStdModel;
    QItemSelectionModel *mSelectionModel;
};

#endif // WIDGET_H
