/****************************************************************************
** Meta object code from reading C++ file 'wizSegmentedButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widgets/wizSegmentedButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizSegmentedButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizSegmentedButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CWizSegmentedButton[] = {
    "CWizSegmentedButton\0"
};

void CWizSegmentedButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CWizSegmentedButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizSegmentedButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_CWizSegmentedButton,
      qt_meta_data_CWizSegmentedButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizSegmentedButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizSegmentedButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizSegmentedButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizSegmentedButton))
        return static_cast<void*>(const_cast< CWizSegmentedButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int CWizSegmentedButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
