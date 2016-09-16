/****************************************************************************
** Meta object code from reading C++ file 'wizXmlRpcServer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sync/wizXmlRpcServer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizXmlRpcServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizXmlRpcEventLoop[] = {

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
      21,   20,   20,   20, 0x0a,
      40,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizXmlRpcEventLoop[] = {
    "CWizXmlRpcEventLoop\0\0on_replyFinished()\0"
    "on_replyError(QNetworkReply::NetworkError)\0"
};

void CWizXmlRpcEventLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizXmlRpcEventLoop *_t = static_cast<CWizXmlRpcEventLoop *>(_o);
        switch (_id) {
        case 0: _t->on_replyFinished(); break;
        case 1: _t->on_replyError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizXmlRpcEventLoop::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizXmlRpcEventLoop::staticMetaObject = {
    { &QEventLoop::staticMetaObject, qt_meta_stringdata_CWizXmlRpcEventLoop,
      qt_meta_data_CWizXmlRpcEventLoop, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizXmlRpcEventLoop::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizXmlRpcEventLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizXmlRpcEventLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizXmlRpcEventLoop))
        return static_cast<void*>(const_cast< CWizXmlRpcEventLoop*>(this));
    return QEventLoop::qt_metacast(_clname);
}

int CWizXmlRpcEventLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEventLoop::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_CWizXmlRpcServerBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CWizXmlRpcServerBase[] = {
    "CWizXmlRpcServerBase\0"
};

void CWizXmlRpcServerBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CWizXmlRpcServerBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizXmlRpcServerBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CWizXmlRpcServerBase,
      qt_meta_data_CWizXmlRpcServerBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizXmlRpcServerBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizXmlRpcServerBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizXmlRpcServerBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizXmlRpcServerBase))
        return static_cast<void*>(const_cast< CWizXmlRpcServerBase*>(this));
    return QObject::qt_metacast(_clname);
}

int CWizXmlRpcServerBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
