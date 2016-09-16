/****************************************************************************
** Meta object code from reading C++ file 'titlebar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "titlebar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titlebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Core__Internal__TitleBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      48,   25,   25,   25, 0x0a,
      69,   25,   25,   25, 0x0a,
      93,   25,   25,   25, 0x0a,
     115,   25,   25,   25, 0x0a,
     155,  141,   25,   25, 0x0a,
     220,  211,   25,   25, 0x0a,
     252,  245,   25,   25, 0x0a,
     284,   25,   25,   25, 0x0a,
     302,   25,   25,   25, 0x0a,
     320,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Core__Internal__TitleBar[] = {
    "Core::Internal::TitleBar\0\0"
    "onEditButtonClicked()\0onTagButtonClicked()\0"
    "onAttachButtonClicked()\0onInfoButtonClicked()\0"
    "onCommentsButtonClicked()\0view,note,bOk\0"
    "onViewNoteLoaded(Core::INoteView*,WIZDOCUMENTDATA,bool)\0"
    "strToken\0onTokenAcquired(QString)\0"
    "nCount\0onGetCommentsCountFinished(int)\0"
    "onEditorChanged()\0onEditorFocusIn()\0"
    "onEditorFocusOut()\0"
};

void Core::Internal::TitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TitleBar *_t = static_cast<TitleBar *>(_o);
        switch (_id) {
        case 0: _t->onEditButtonClicked(); break;
        case 1: _t->onTagButtonClicked(); break;
        case 2: _t->onAttachButtonClicked(); break;
        case 3: _t->onInfoButtonClicked(); break;
        case 4: _t->onCommentsButtonClicked(); break;
        case 5: _t->onViewNoteLoaded((*reinterpret_cast< Core::INoteView*(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->onTokenAcquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onGetCommentsCountFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onEditorChanged(); break;
        case 9: _t->onEditorFocusIn(); break;
        case 10: _t->onEditorFocusOut(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Core::Internal::TitleBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::Internal::TitleBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Core__Internal__TitleBar,
      qt_meta_data_Core__Internal__TitleBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::Internal::TitleBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::Internal::TitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::Internal::TitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__Internal__TitleBar))
        return static_cast<void*>(const_cast< TitleBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int Core::Internal::TitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
