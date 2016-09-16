/****************************************************************************
** Meta object code from reading C++ file 'plugindialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plugindialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Core__Internal__PluginDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x08,
      54,   29,   29,   29, 0x08,
      70,   29,   29,   29, 0x08,
      89,   84,   29,   29, 0x08,
     131,   29,   29,   29, 0x08,
     150,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Core__Internal__PluginDialog[] = {
    "Core::Internal::PluginDialog\0\0"
    "updateRestartRequired()\0updateButtons()\0"
    "openDetails()\0spec\0"
    "openDetails(ExtensionSystem::PluginSpec*)\0"
    "openErrorDetails()\0closeDialog()\0"
};

void Core::Internal::PluginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginDialog *_t = static_cast<PluginDialog *>(_o);
        switch (_id) {
        case 0: _t->updateRestartRequired(); break;
        case 1: _t->updateButtons(); break;
        case 2: _t->openDetails(); break;
        case 3: _t->openDetails((*reinterpret_cast< ExtensionSystem::PluginSpec*(*)>(_a[1]))); break;
        case 4: _t->openErrorDetails(); break;
        case 5: _t->closeDialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Core::Internal::PluginDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::Internal::PluginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Core__Internal__PluginDialog,
      qt_meta_data_Core__Internal__PluginDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::Internal::PluginDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::Internal::PluginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::Internal::PluginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__Internal__PluginDialog))
        return static_cast<void*>(const_cast< PluginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Core::Internal::PluginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
