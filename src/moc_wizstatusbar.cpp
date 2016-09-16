/****************************************************************************
** Meta object code from reading C++ file 'wizstatusbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizstatusbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizstatusbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizStatusBar[] = {

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
      15,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,
      67,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CWizStatusBar[] = {
    "CWizStatusBar\0\0on_animation_finished()\0"
    "on_animationTimer_timeout()\0"
    "on_hideTimer_timeout()\0"
};

void CWizStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizStatusBar *_t = static_cast<CWizStatusBar *>(_o);
        switch (_id) {
        case 0: _t->on_animation_finished(); break;
        case 1: _t->on_animationTimer_timeout(); break;
        case 2: _t->on_hideTimer_timeout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CWizStatusBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizStatusBar::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CWizStatusBar,
      qt_meta_data_CWizStatusBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizStatusBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizStatusBar))
        return static_cast<void*>(const_cast< CWizStatusBar*>(this));
    return QLabel::qt_metacast(_clname);
}

int CWizStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
