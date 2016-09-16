/****************************************************************************
** Meta object code from reading C++ file 'wizconsoledialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizconsoledialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizconsoledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizConsoleDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      48,   42,   18,   18, 0x0a,
      78,   74,   18,   18, 0x0a,
     107,   18,   18,   18, 0x0a,
     127,   18,   18,   18, 0x0a,
     150,   18,   18,   18, 0x0a,
     171,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizConsoleDialog[] = {
    "CWizConsoleDialog\0\0onConsoleTextChanged()\0"
    "value\0onConsoleSliderMoved(int)\0yes\0"
    "onConsoleCopyAvailable(bool)\0"
    "onBtnClearClicked()\0onLogBufferReadyRead()\0"
    "onBtnSaveAsClicked()\0onBtnCopyToClipboardClicked()\0"
};

void CWizConsoleDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizConsoleDialog *_t = static_cast<CWizConsoleDialog *>(_o);
        switch (_id) {
        case 0: _t->onConsoleTextChanged(); break;
        case 1: _t->onConsoleSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onConsoleCopyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onBtnClearClicked(); break;
        case 4: _t->onLogBufferReadyRead(); break;
        case 5: _t->onBtnSaveAsClicked(); break;
        case 6: _t->onBtnCopyToClipboardClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizConsoleDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizConsoleDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CWizConsoleDialog,
      qt_meta_data_CWizConsoleDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizConsoleDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizConsoleDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizConsoleDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizConsoleDialog))
        return static_cast<void*>(const_cast< CWizConsoleDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CWizConsoleDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
