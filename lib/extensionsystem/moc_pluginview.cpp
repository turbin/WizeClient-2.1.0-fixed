/****************************************************************************
** Meta object code from reading C++ file 'pluginview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pluginview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExtensionSystem__PluginView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   29,   28,   28, 0x05,
      85,   29,   28,   28, 0x05,
     131,   29,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
     195,  183,   28,   28, 0x08,
     238,   28,   28,   28, 0x08,
     259,  251,   28,   28, 0x08,
     295,  290,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtensionSystem__PluginView[] = {
    "ExtensionSystem::PluginView\0\0spec\0"
    "currentPluginChanged(ExtensionSystem::PluginSpec*)\0"
    "pluginActivated(ExtensionSystem::PluginSpec*)\0"
    "pluginSettingsChanged(ExtensionSystem::PluginSpec*)\0"
    "item,column\0updatePluginSettings(QTreeWidgetItem*,int)\0"
    "updateList()\0current\0"
    "selectPlugin(QTreeWidgetItem*)\0item\0"
    "activatePlugin(QTreeWidgetItem*)\0"
};

void ExtensionSystem::PluginView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginView *_t = static_cast<PluginView *>(_o);
        switch (_id) {
        case 0: _t->currentPluginChanged((*reinterpret_cast< ExtensionSystem::PluginSpec*(*)>(_a[1]))); break;
        case 1: _t->pluginActivated((*reinterpret_cast< ExtensionSystem::PluginSpec*(*)>(_a[1]))); break;
        case 2: _t->pluginSettingsChanged((*reinterpret_cast< ExtensionSystem::PluginSpec*(*)>(_a[1]))); break;
        case 3: _t->updatePluginSettings((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->updateList(); break;
        case 5: _t->selectPlugin((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->activatePlugin((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExtensionSystem::PluginView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExtensionSystem::PluginView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExtensionSystem__PluginView,
      qt_meta_data_ExtensionSystem__PluginView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtensionSystem::PluginView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtensionSystem::PluginView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtensionSystem::PluginView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionSystem__PluginView))
        return static_cast<void*>(const_cast< PluginView*>(this));
    return QWidget::qt_metacast(_clname);
}

int ExtensionSystem::PluginView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ExtensionSystem::PluginView::currentPluginChanged(ExtensionSystem::PluginSpec * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ExtensionSystem::PluginView::pluginActivated(ExtensionSystem::PluginSpec * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ExtensionSystem::PluginView::pluginSettingsChanged(ExtensionSystem::PluginSpec * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
