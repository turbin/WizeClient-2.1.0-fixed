/****************************************************************************
** Meta object code from reading C++ file 'wizDocumentListViewItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizDocumentListViewItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizDocumentListViewItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizDocumentListViewItem[] = {

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
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CWizDocumentListViewItem[] = {
    "CWizDocumentListViewItem\0\0thumbnailReloaded()\0"
    "on_thumbnailReloaded()\0"
};

void CWizDocumentListViewItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizDocumentListViewItem *_t = static_cast<CWizDocumentListViewItem *>(_o);
        switch (_id) {
        case 0: _t->thumbnailReloaded(); break;
        case 1: _t->on_thumbnailReloaded(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CWizDocumentListViewItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizDocumentListViewItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CWizDocumentListViewItem,
      qt_meta_data_CWizDocumentListViewItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizDocumentListViewItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizDocumentListViewItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizDocumentListViewItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizDocumentListViewItem))
        return static_cast<void*>(const_cast< CWizDocumentListViewItem*>(this));
    if (!strcmp(_clname, "QListWidgetItem"))
        return static_cast< QListWidgetItem*>(const_cast< CWizDocumentListViewItem*>(this));
    return QObject::qt_metacast(_clname);
}

int CWizDocumentListViewItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CWizDocumentListViewItem::thumbnailReloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
