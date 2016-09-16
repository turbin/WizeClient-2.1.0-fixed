/****************************************************************************
** Meta object code from reading C++ file 'avatar_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sync/avatar_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avatar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WizService__Internal__AvatarDownloader[] = {

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
      61,   40,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   39,   39,   39, 0x08,

 // methods: signature, parameters, type, tag, flags
     128,  116,   39,   39, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_WizService__Internal__AvatarDownloader[] = {
    "WizService::Internal::AvatarDownloader\0"
    "\0strUserGUID,bSucceed\0downloaded(QString,bool)\0"
    "on_queryUserAvatar_finished()\0strUserGUID\0"
    "download(QString)\0"
};

void WizService::Internal::AvatarDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AvatarDownloader *_t = static_cast<AvatarDownloader *>(_o);
        switch (_id) {
        case 0: _t->downloaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->on_queryUserAvatar_finished(); break;
        case 2: _t->download((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WizService::Internal::AvatarDownloader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WizService::Internal::AvatarDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizService__Internal__AvatarDownloader,
      qt_meta_data_WizService__Internal__AvatarDownloader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WizService::Internal::AvatarDownloader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WizService::Internal::AvatarDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WizService::Internal::AvatarDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WizService__Internal__AvatarDownloader))
        return static_cast<void*>(const_cast< AvatarDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int WizService::Internal::AvatarDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizService::Internal::AvatarDownloader::downloaded(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_WizService__Internal__AvatarHostPrivate[] = {

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
      41,   40,   40,   40, 0x08,
      82,   61,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WizService__Internal__AvatarHostPrivate[] = {
    "WizService::Internal::AvatarHostPrivate\0"
    "\0on_thread_started()\0strUserGUID,bSucceed\0"
    "on_downloaded(QString,bool)\0"
};

void WizService::Internal::AvatarHostPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AvatarHostPrivate *_t = static_cast<AvatarHostPrivate *>(_o);
        switch (_id) {
        case 0: _t->on_thread_started(); break;
        case 1: _t->on_downloaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WizService::Internal::AvatarHostPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WizService::Internal::AvatarHostPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizService__Internal__AvatarHostPrivate,
      qt_meta_data_WizService__Internal__AvatarHostPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WizService::Internal::AvatarHostPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WizService::Internal::AvatarHostPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WizService::Internal::AvatarHostPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WizService__Internal__AvatarHostPrivate))
        return static_cast<void*>(const_cast< AvatarHostPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int WizService::Internal::AvatarHostPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
