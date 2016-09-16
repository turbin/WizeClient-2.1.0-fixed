/****************************************************************************
** Meta object code from reading C++ file 'wizusercipherform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizusercipherform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizusercipherform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizUserCipherForm[] = {

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
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   19,   19,   19, 0x0a,
      68,   62,   19,   19, 0x0a,
     103,   98,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizUserCipherForm[] = {
    "CWizUserCipherForm\0\0cipherCheckRequest()\0"
    "onButtonOK_clicked()\0state\0"
    "onCheckSave_stateChanged(int)\0text\0"
    "onCipher_changed(QString)\0"
};

void CWizUserCipherForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizUserCipherForm *_t = static_cast<CWizUserCipherForm *>(_o);
        switch (_id) {
        case 0: _t->cipherCheckRequest(); break;
        case 1: _t->onButtonOK_clicked(); break;
        case 2: _t->onCheckSave_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onCipher_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizUserCipherForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizUserCipherForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CWizUserCipherForm,
      qt_meta_data_CWizUserCipherForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizUserCipherForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizUserCipherForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizUserCipherForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizUserCipherForm))
        return static_cast<void*>(const_cast< CWizUserCipherForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int CWizUserCipherForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void CWizUserCipherForm::cipherCheckRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
