/****************************************************************************
** Meta object code from reading C++ file 'wizUpgrade.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizUpgrade.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizUpgrade.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizUpgrade[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   12,   12,   12, 0x0a,
      59,   12,   12,   12, 0x0a,
      86,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizUpgrade[] = {
    "CWizUpgrade\0\0bUpgradeAvaliable\0"
    "checkFinished(bool)\0check()\0"
    "on_checkUpgrade_finished()\0"
    "on_timerCheck_timeout()\0"
};

void CWizUpgrade::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizUpgrade *_t = static_cast<CWizUpgrade *>(_o);
        switch (_id) {
        case 0: _t->checkFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->check(); break;
        case 2: _t->on_checkUpgrade_finished(); break;
        case 3: _t->on_timerCheck_timeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizUpgrade::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizUpgrade::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CWizUpgrade,
      qt_meta_data_CWizUpgrade, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizUpgrade::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizUpgrade::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizUpgrade::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizUpgrade))
        return static_cast<void*>(const_cast< CWizUpgrade*>(this));
    return QObject::qt_metacast(_clname);
}

int CWizUpgrade::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CWizUpgrade::checkFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
