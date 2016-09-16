/****************************************************************************
** Meta object code from reading C++ file 'asyncapi.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sync/asyncapi.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asyncapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WizService__AsyncApi[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x05,
      63,   54,   21,   21, 0x05,
      93,   89,   21,   21, 0x05,
     117,   89,   21,   21, 0x05,
     149,  147,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_WizService__AsyncApi[] = {
    "WizService::AsyncApi\0\0info\0"
    "loginFinished(WIZUSERINFO)\0strToken\0"
    "getTokenFinished(QString)\0bOk\0"
    "keepAliveFinished(bool)\0"
    "registerAccountFinished(bool)\0i\0"
    "getCommentsCountFinished(int)\0"
};

void WizService::AsyncApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AsyncApi *_t = static_cast<AsyncApi *>(_o);
        switch (_id) {
        case 0: _t->loginFinished((*reinterpret_cast< const WIZUSERINFO(*)>(_a[1]))); break;
        case 1: _t->getTokenFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->keepAliveFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->registerAccountFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->getCommentsCountFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WizService::AsyncApi::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WizService::AsyncApi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizService__AsyncApi,
      qt_meta_data_WizService__AsyncApi, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WizService::AsyncApi::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WizService::AsyncApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WizService::AsyncApi::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WizService__AsyncApi))
        return static_cast<void*>(const_cast< AsyncApi*>(this));
    return QObject::qt_metacast(_clname);
}

int WizService::AsyncApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WizService::AsyncApi::loginFinished(const WIZUSERINFO & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizService::AsyncApi::getTokenFinished(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizService::AsyncApi::keepAliveFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizService::AsyncApi::registerAccountFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WizService::AsyncApi::getCommentsCountFinished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
