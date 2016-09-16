/****************************************************************************
** Meta object code from reading C++ file 'messagecompleter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "messagecompleter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagecompleter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WizService__MessageCompleter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   30,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WizService__MessageCompleter[] = {
    "WizService::MessageCompleter\0\0view,doc,ok\0"
    "onNoteLoaded(Core::INoteView*,WIZDOCUMENTDATA,bool)\0"
};

void WizService::MessageCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageCompleter *_t = static_cast<MessageCompleter *>(_o);
        switch (_id) {
        case 0: _t->onNoteLoaded((*reinterpret_cast< Core::INoteView*(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WizService::MessageCompleter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WizService::MessageCompleter::staticMetaObject = {
    { &QCompleter::staticMetaObject, qt_meta_stringdata_WizService__MessageCompleter,
      qt_meta_data_WizService__MessageCompleter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WizService::MessageCompleter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WizService::MessageCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WizService::MessageCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WizService__MessageCompleter))
        return static_cast<void*>(const_cast< MessageCompleter*>(this));
    return QCompleter::qt_metacast(_clname);
}

int WizService::MessageCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
