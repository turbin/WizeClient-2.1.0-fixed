/****************************************************************************
** Meta object code from reading C++ file 'wizpreferencedialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizpreferencedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizpreferencedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizPreferenceWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x05,
      59,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   80,   21,   21, 0x0a,
     132,  124,   21,   21, 0x0a,
     159,  124,   21,   21, 0x0a,
     195,  124,   21,   21, 0x0a,
     231,   80,   21,   21, 0x0a,
     267,   80,   21,   21, 0x0a,
     301,   80,   21,   21, 0x0a,
     345,  340,   21,   21, 0x0a,
     379,   21,   21,   21, 0x0a,
     408,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizPreferenceWindow[] = {
    "CWizPreferenceWindow\0\0type\0"
    "settingsChanged(WizOptionsType)\0"
    "restartForSettings()\0index\0"
    "on_comboLang_currentIndexChanged(int)\0"
    "checked\0on_radioAuto_clicked(bool)\0"
    "on_radioAlwaysReading_clicked(bool)\0"
    "on_radioAlwaysEditing_clicked(bool)\0"
    "on_comboSyncInterval_activated(int)\0"
    "on_comboSyncMethod_activated(int)\0"
    "on_comboSyncGroupMethod_activated(int)\0"
    "link\0labelProxy_linkActivated(QString)\0"
    "onButtonFontSelect_clicked()\0"
    "onButtonFontSelect_confirmed()\0"
};

void CWizPreferenceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizPreferenceWindow *_t = static_cast<CWizPreferenceWindow *>(_o);
        switch (_id) {
        case 0: _t->settingsChanged((*reinterpret_cast< WizOptionsType(*)>(_a[1]))); break;
        case 1: _t->restartForSettings(); break;
        case 2: _t->on_comboLang_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_radioAuto_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_radioAlwaysReading_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_radioAlwaysEditing_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_comboSyncInterval_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_comboSyncMethod_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_comboSyncGroupMethod_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->labelProxy_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->onButtonFontSelect_clicked(); break;
        case 11: _t->onButtonFontSelect_confirmed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizPreferenceWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizPreferenceWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CWizPreferenceWindow,
      qt_meta_data_CWizPreferenceWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizPreferenceWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizPreferenceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizPreferenceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizPreferenceWindow))
        return static_cast<void*>(const_cast< CWizPreferenceWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int CWizPreferenceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CWizPreferenceWindow::settingsChanged(WizOptionsType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CWizPreferenceWindow::restartForSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
