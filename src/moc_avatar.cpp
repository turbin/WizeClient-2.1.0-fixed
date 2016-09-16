/****************************************************************************
** Meta object code from reading C++ file 'avatar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sync/avatar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avatar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WizService__AvatarHost[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   24,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_WizService__AvatarHost[] = {
    "WizService::AvatarHost\0\0strUserGUID\0"
    "loaded(QString)\0"
};

void WizService::AvatarHost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AvatarHost *_t = static_cast<AvatarHost *>(_o);
        switch (_id) {
        case 0: _t->loaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WizService::AvatarHost::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WizService::AvatarHost::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizService__AvatarHost,
      qt_meta_data_WizService__AvatarHost, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WizService::AvatarHost::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WizService::AvatarHost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WizService::AvatarHost::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WizService__AvatarHost))
        return static_cast<void*>(const_cast< AvatarHost*>(this));
    return QObject::qt_metacast(_clname);
}

int WizService::AvatarHost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void WizService::AvatarHost::loaded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
