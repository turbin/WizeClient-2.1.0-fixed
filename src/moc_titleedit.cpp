/****************************************************************************
** Meta object code from reading C++ file 'titleedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "titleedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titleedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Core__Internal__TitleEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   27,   26,   26, 0x08,
      65,   26,   26,   26, 0x08,
      90,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Core__Internal__TitleEdit[] = {
    "Core::Internal::TitleEdit\0\0index\0"
    "onInsertCompletion(QModelIndex)\0"
    "onTitleEditingFinished()\0"
    "onTitleReturnPressed()\0"
};

void Core::Internal::TitleEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TitleEdit *_t = static_cast<TitleEdit *>(_o);
        switch (_id) {
        case 0: _t->onInsertCompletion((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onTitleEditingFinished(); break;
        case 2: _t->onTitleReturnPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Core::Internal::TitleEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::Internal::TitleEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_Core__Internal__TitleEdit,
      qt_meta_data_Core__Internal__TitleEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::Internal::TitleEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::Internal::TitleEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::Internal::TitleEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__Internal__TitleEdit))
        return static_cast<void*>(const_cast< TitleEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int Core::Internal::TitleEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
