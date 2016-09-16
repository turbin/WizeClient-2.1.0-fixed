#ifndef WIZMULTILINELISTWIDGET_H
#define WIZMULTILINELISTWIDGET_H

#include <QListWidget>

class CWizMultiLineListWidget : public QListWidget
{
public:
    CWizMultiLineListWidget(int lineCount, QWidget* parent);
public:
    virtual int wrapTextLineIndex() const;
    virtual bool imageAlignLeft() const;
    virtual int imageWidth() const;
    virtual QString itemText(const QModelIndex& index, int line) const;
    virtual QColor itemTextColor(const QModelIndex& index, int line, bool selected, QColor defColor) const;
    virtual QPixmap itemImage(const QModelIndex& index) const;
    //
    int lineCount() const;
};

#endif // WIZMULTILINELISTWIDGET_H
