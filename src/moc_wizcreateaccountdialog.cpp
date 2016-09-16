/****************************************************************************
** Meta object code from reading C++ file 'wizcreateaccountdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizcreateaccountdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizcreateaccountdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CreateAccountDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      55,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   20,   20,   20, 0x0a,
     109,  105,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CreateAccountDialog[] = {
    "CreateAccountDialog\0\0"
    "strUser,strPassword,strInviteCode\0"
    "registerAccount(QString,QString,QString)\0"
    "accept()\0bOk\0onRegisterAccountFinished(bool)\0"
};

void CreateAccountDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CreateAccountDialog *_t = static_cast<CreateAccountDialog *>(_o);
        switch (_id) {
        case 0: _t->registerAccount((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->accept(); break;
        case 2: _t->onRegisterAccountFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CreateAccountDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CreateAccountDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateAccountDialog,
      qt_meta_data_CreateAccountDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreateAccountDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreateAccountDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreateAccountDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateAccountDialog))
        return static_cast<void*>(const_cast< CreateAccountDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateAccountDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CreateAccountDialog::registerAccount(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
