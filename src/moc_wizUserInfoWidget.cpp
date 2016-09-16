/****************************************************************************
** Meta object code from reading C++ file 'wizUserInfoWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widgets/wizUserInfoWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizUserInfoWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizUserInfoWidget[] = {

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
      20,   19,   19,   19, 0x09,
      36,   19,   19,   19, 0x09,
      66,   58,   19,   19, 0x09,
      96,   19,   19,   19, 0x09,
     130,   19,   19,   19, 0x09,
     165,   19,   19,   19, 0x09,
     203,  200,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CWizUserInfoWidget[] = {
    "CWizUserInfoWidget\0\0resetUserInfo()\0"
    "on_userInfo_changed()\0strGUID\0"
    "on_userAvatar_loaded(QString)\0"
    "on_action_accountInfo_triggered()\0"
    "on_action_accountSetup_triggered()\0"
    "on_action_changeAvatar_triggered()\0"
    "ok\0on_action_changeAvatar_uploaded(bool)\0"
};

void CWizUserInfoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizUserInfoWidget *_t = static_cast<CWizUserInfoWidget *>(_o);
        switch (_id) {
        case 0: _t->resetUserInfo(); break;
        case 1: _t->on_userInfo_changed(); break;
        case 2: _t->on_userAvatar_loaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_action_accountInfo_triggered(); break;
        case 4: _t->on_action_accountSetup_triggered(); break;
        case 5: _t->on_action_changeAvatar_triggered(); break;
        case 6: _t->on_action_changeAvatar_uploaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizUserInfoWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizUserInfoWidget::staticMetaObject = {
    { &WIZUSERINFOWIDGETBASE::staticMetaObject, qt_meta_stringdata_CWizUserInfoWidget,
      qt_meta_data_CWizUserInfoWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizUserInfoWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizUserInfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizUserInfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizUserInfoWidget))
        return static_cast<void*>(const_cast< CWizUserInfoWidget*>(this));
    return WIZUSERINFOWIDGETBASE::qt_metacast(_clname);
}

int CWizUserInfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WIZUSERINFOWIDGETBASE::qt_metacall(_c, _id, _a);
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
