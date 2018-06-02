#include "sliderdelegate.h"
#include <QSlider>

SliderDelegate::SliderDelegate(QObject *parent) :
    QItemDelegate(parent)
{

}

QWidget *SliderDelegate::createEditor(QWidget *parent,
                              const QStyleOptionViewItem &option,
                              const QModelIndex &index) const
{
   QSlider *slider = new QSlider(parent);
   slider->setOrientation(Qt::Horizontal);
   slider->setMinimum(0);
   slider->setMaximum(100);
   (void) option;
   (void) index;
   return slider;
}
void SliderDelegate::setEditorData(QWidget *editor,
                           const QModelIndex &index) const
{
    QSlider *slider = static_cast<QSlider *>(editor);
    slider->setValue(index.data().toInt());
}

void SliderDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
                                        const QModelIndex &index) const
{
    QSlider *slider = static_cast<QSlider *>(editor);
    model->setData(index, slider->value());
}

void SliderDelegate::updateEditorGeometry(QWidget *editor,
                                  const QStyleOptionViewItem &option,
                                  const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
    (void) index;
}


