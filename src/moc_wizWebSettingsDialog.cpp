/****************************************************************************
** Meta object code from reading C++ file 'wizWebSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizWebSettingsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizWebSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizWebSettingsDialog[] = {

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
      26,   23,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CWizWebSettingsDialog[] = {
    "CWizWebSettingsDialog\0\0ok\0on_web_loaded(bool)\0"
};

void CWizWebSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizWebSettingsDialog *_t = static_cast<CWizWebSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->on_web_loaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizWebSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizWebSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CWizWebSettingsDialog,
      qt_meta_data_CWizWebSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizWebSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizWebSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizWebSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizWebSettingsDialog))
        return static_cast<void*>(const_cast< CWizWebSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CWizWebSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_CWizWebSettingsWithTokenDialog[] = {

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
      38,   32,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CWizWebSettingsWithTokenDialog[] = {
    "CWizWebSettingsWithTokenDialog\0\0token\0"
    "on_token_acquired(QString)\0"
};

void CWizWebSettingsWithTokenDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizWebSettingsWithTokenDialog *_t = static_cast<CWizWebSettingsWithTokenDialog *>(_o);
        switch (_id) {
        case 0: _t->on_token_acquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizWebSettingsWithTokenDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizWebSettingsWithTokenDialog::staticMetaObject = {
    { &CWizWebSettingsDialog::staticMetaObject, qt_meta_stringdata_CWizWebSettingsWithTokenDialog,
      qt_meta_data_CWizWebSettingsWithTokenDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizWebSettingsWithTokenDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizWebSettingsWithTokenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizWebSettingsWithTokenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizWebSettingsWithTokenDialog))
        return static_cast<void*>(const_cast< CWizWebSettingsWithTokenDialog*>(this));
    return CWizWebSettingsDialog::qt_metacast(_clname);
}

int CWizWebSettingsWithTokenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWizWebSettingsDialog::qt_metacall(_c, _id, _a);
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
