/****************************************************************************
** Meta object code from reading C++ file 'avataruploader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sync/avataruploader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avataruploader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WizService__AvatarUploader[] = {

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
      31,   28,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   46,   27,   27, 0x08,
      86,   80,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WizService__AvatarUploader[] = {
    "WizService::AvatarUploader\0\0ok\0"
    "uploaded(bool)\0strToken\0"
    "onTokenAcquired(QString)\0reply\0"
    "onUploadFinished(QNetworkReply*)\0"
};

void WizService::AvatarUploader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AvatarUploader *_t = static_cast<AvatarUploader *>(_o);
        switch (_id) {
        case 0: _t->uploaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onTokenAcquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onUploadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WizService::AvatarUploader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WizService::AvatarUploader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizService__AvatarUploader,
      qt_meta_data_WizService__AvatarUploader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WizService::AvatarUploader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WizService::AvatarUploader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WizService::AvatarUploader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WizService__AvatarUploader))
        return static_cast<void*>(const_cast< AvatarUploader*>(this));
    return QObject::qt_metacast(_clname);
}

int WizService::AvatarUploader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WizService::AvatarUploader::uploaded(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
