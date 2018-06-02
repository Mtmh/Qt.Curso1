#include "fontcomboboxdelegate.h"
#include "QFontComboBox"

FontComboBoxDelegate::FontComboBoxDelegate(QObject *parent) :
    QItemDelegate(parent)
{

}

QWidget *FontComboBoxDelegate::createEditor(QWidget *parent,
                              const QStyleOptionViewItem &option,
                              const QModelIndex &index) const
{
     (void) option;
     (void) index;
     return new QFontComboBox(parent);
}
void FontComboBoxDelegate::setEditorData(QWidget *editor,
                           const QModelIndex &index) const
{
    QFontComboBox *fcb = static_cast<QFontComboBox *>(editor);
    fcb->setCurrentText(index.data().toString());
}

void FontComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
                                        const QModelIndex &index) const
{
    QFontComboBox *fcb = static_cast<QFontComboBox *>(editor);
    model->setData(index, fcb->currentText());
}

void FontComboBoxDelegate::updateEditorGeometry(QWidget *editor,
                                  const QStyleOptionViewItem &option,
                                  const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
    (void) index;
}
