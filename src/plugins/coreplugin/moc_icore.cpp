/****************************************************************************
** Meta object code from reading C++ file 'icore.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "icore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Core__ICore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   13,   12,   12, 0x05,
      87,   74,   12,   12, 0x05,
     146,  141,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Core__ICore[] = {
    "Core::ICore\0\0view,doc\0"
    "viewNoteRequested(Core::INoteView*,WIZDOCUMENTDATA)\0"
    "view,doc,bOk\0"
    "viewNoteLoaded(Core::INoteView*,WIZDOCUMENTDATA,bool)\0"
    "view\0closeNoteRequested(Core::INoteView*)\0"
};

void Core::ICore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ICore *_t = static_cast<ICore *>(_o);
        switch (_id) {
        case 0: _t->viewNoteRequested((*reinterpret_cast< Core::INoteView*(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2]))); break;
        case 1: _t->viewNoteLoaded((*reinterpret_cast< Core::INoteView*(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->closeNoteRequested((*reinterpret_cast< Core::INoteView*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Core::ICore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::ICore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Core__ICore,
      qt_meta_data_Core__ICore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::ICore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::ICore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::ICore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__ICore))
        return static_cast<void*>(const_cast< ICore*>(this));
    return QObject::qt_metacast(_clname);
}

int Core::ICore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Core::ICore::viewNoteRequested(Core::INoteView * _t1, const WIZDOCUMENTDATA & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Core::ICore::viewNoteLoaded(Core::INoteView * _t1, const WIZDOCUMENTDATA & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Core::ICore::closeNoteRequested(Core::INoteView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
