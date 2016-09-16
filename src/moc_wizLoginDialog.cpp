/****************************************************************************
** Meta object code from reading C++ file 'wizLoginDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizLoginDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizLoginDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizLoginDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      35,   26,   16,   16, 0x0a,
      60,   16,   16,   16, 0x0a,
     100,   16,   16,   16, 0x0a,
     143,  138,   16,   16, 0x0a,
     192,  182,   16,   16, 0x0a,
     236,  228,   16,   16, 0x0a,
     281,  275,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizLoginDialog[] = {
    "CWizLoginDialog\0\0accept()\0strToken\0"
    "onTokenAcquired(QString)\0"
    "on_labelRegister_linkActivated(QString)\0"
    "on_labelForgot_linkActivated(QString)\0"
    "link\0on_labelNetwork_linkActivated(QString)\0"
    "strUserId\0on_comboUsers_indexChanged(QString)\0"
    "strText\0on_comboUsers_editTextChanged(QString)\0"
    "state\0on_checkAutoLogin_stateChanged(int)\0"
};

void CWizLoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizLoginDialog *_t = static_cast<CWizLoginDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->onTokenAcquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_labelRegister_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_labelForgot_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_labelNetwork_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_comboUsers_indexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_comboUsers_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_checkAutoLogin_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizLoginDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizLoginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CWizLoginDialog,
      qt_meta_data_CWizLoginDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizLoginDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizLoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizLoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizLoginDialog))
        return static_cast<void*>(const_cast< CWizLoginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CWizLoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
