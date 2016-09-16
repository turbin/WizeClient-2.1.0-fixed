/****************************************************************************
** Meta object code from reading C++ file 'wizSearchWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizSearchWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizSearchWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizSearchWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   45,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizSearchWidget[] = {
    "CWizSearchWidget\0\0keywords\0doSearch(QString)\0"
    "strText\0on_search_textChanged(QString)\0"
};

void CWizSearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizSearchWidget *_t = static_cast<CWizSearchWidget *>(_o);
        switch (_id) {
        case 0: _t->doSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_search_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizSearchWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizSearchWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CWizSearchWidget,
      qt_meta_data_CWizSearchWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizSearchWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizSearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizSearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizSearchWidget))
        return static_cast<void*>(const_cast< CWizSearchWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CWizSearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CWizSearchWidget::doSearch(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
