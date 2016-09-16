/****************************************************************************
** Meta object code from reading C++ file 'wiztaglistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wiztaglistwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wiztaglistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizTagListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x0a,
      63,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizTagListWidget[] = {
    "CWizTagListWidget\0\0pItem\0"
    "on_list_itemChanged(QListWidgetItem*)\0"
    "on_tagsEdit_returnPressed()\0"
};

void CWizTagListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizTagListWidget *_t = static_cast<CWizTagListWidget *>(_o);
        switch (_id) {
        case 0: _t->on_list_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_tagsEdit_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizTagListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizTagListWidget::staticMetaObject = {
    { &CWizPopupWidget::staticMetaObject, qt_meta_stringdata_CWizTagListWidget,
      qt_meta_data_CWizTagListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizTagListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizTagListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizTagListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizTagListWidget))
        return static_cast<void*>(const_cast< CWizTagListWidget*>(this));
    return CWizPopupWidget::qt_metacast(_clname);
}

int CWizTagListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWizPopupWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
