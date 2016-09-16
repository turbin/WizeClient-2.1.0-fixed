/****************************************************************************
** Meta object code from reading C++ file 'wizPopupButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizPopupButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizPopupButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizPopupButton[] = {

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
      17,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CWizPopupButton[] = {
    "CWizPopupButton\0\0on_action_triggered()\0"
};

void CWizPopupButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizPopupButton *_t = static_cast<CWizPopupButton *>(_o);
        switch (_id) {
        case 0: _t->on_action_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CWizPopupButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizPopupButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_CWizPopupButton,
      qt_meta_data_CWizPopupButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizPopupButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizPopupButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizPopupButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizPopupButton))
        return static_cast<void*>(const_cast< CWizPopupButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int CWizPopupButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_CWizViewTypePopupButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CWizViewTypePopupButton[] = {
    "CWizViewTypePopupButton\0\0type\0"
    "viewTypeChanged(int)\0on_action_triggered()\0"
};

void CWizViewTypePopupButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizViewTypePopupButton *_t = static_cast<CWizViewTypePopupButton *>(_o);
        switch (_id) {
        case 0: _t->viewTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_action_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizViewTypePopupButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizViewTypePopupButton::staticMetaObject = {
    { &CWizPopupButton::staticMetaObject, qt_meta_stringdata_CWizViewTypePopupButton,
      qt_meta_data_CWizViewTypePopupButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizViewTypePopupButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizViewTypePopupButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizViewTypePopupButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizViewTypePopupButton))
        return static_cast<void*>(const_cast< CWizViewTypePopupButton*>(this));
    return CWizPopupButton::qt_metacast(_clname);
}

int CWizViewTypePopupButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWizPopupButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CWizViewTypePopupButton::viewTypeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_CWizSortingPopupButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CWizSortingPopupButton[] = {
    "CWizSortingPopupButton\0\0type\0"
    "sortingTypeChanged(int)\0on_action_triggered()\0"
};

void CWizSortingPopupButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizSortingPopupButton *_t = static_cast<CWizSortingPopupButton *>(_o);
        switch (_id) {
        case 0: _t->sortingTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_action_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizSortingPopupButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizSortingPopupButton::staticMetaObject = {
    { &CWizPopupButton::staticMetaObject, qt_meta_stringdata_CWizSortingPopupButton,
      qt_meta_data_CWizSortingPopupButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizSortingPopupButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizSortingPopupButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizSortingPopupButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizSortingPopupButton))
        return static_cast<void*>(const_cast< CWizSortingPopupButton*>(this));
    return CWizPopupButton::qt_metacast(_clname);
}

int CWizSortingPopupButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWizPopupButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CWizSortingPopupButton::sortingTypeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
