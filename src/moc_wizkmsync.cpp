/****************************************************************************
** Meta object code from reading C++ file 'wizkmsync.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sync/wizkmsync.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizkmsync.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizKMSyncEvents[] = {

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
      28,   18,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CWizKMSyncEvents[] = {
    "CWizKMSyncEvents\0\0strStatus\0"
    "messageReady(QString)\0"
};

void CWizKMSyncEvents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizKMSyncEvents *_t = static_cast<CWizKMSyncEvents *>(_o);
        switch (_id) {
        case 0: _t->messageReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizKMSyncEvents::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizKMSyncEvents::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CWizKMSyncEvents,
      qt_meta_data_CWizKMSyncEvents, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizKMSyncEvents::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizKMSyncEvents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizKMSyncEvents::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizKMSyncEvents))
        return static_cast<void*>(const_cast< CWizKMSyncEvents*>(this));
    if (!strcmp(_clname, "IWizKMSyncEvents"))
        return static_cast< IWizKMSyncEvents*>(const_cast< CWizKMSyncEvents*>(this));
    return QObject::qt_metacast(_clname);
}

int CWizKMSyncEvents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CWizKMSyncEvents::messageReady(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_CWizKMSyncThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   18,   17,   17, 0x05,
      82,   72,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     111,  102,   17,   17, 0x08,

 // methods: signature, parameters, type, tag, flags
     136,   17,   17,   17, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_CWizKMSyncThread[] = {
    "CWizKMSyncThread\0\0nErrorCode,strErrorMesssage\0"
    "syncFinished(int,QString)\0strStatus\0"
    "processLog(QString)\0strToken\0"
    "onTokenAcquired(QString)\0trySync()\0"
};

void CWizKMSyncThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizKMSyncThread *_t = static_cast<CWizKMSyncThread *>(_o);
        switch (_id) {
        case 0: _t->syncFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->processLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onTokenAcquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->trySync(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizKMSyncThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizKMSyncThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CWizKMSyncThread,
      qt_meta_data_CWizKMSyncThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizKMSyncThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizKMSyncThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizKMSyncThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizKMSyncThread))
        return static_cast<void*>(const_cast< CWizKMSyncThread*>(this));
    return QThread::qt_metacast(_clname);
}

int CWizKMSyncThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CWizKMSyncThread::syncFinished(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CWizKMSyncThread::processLog(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
