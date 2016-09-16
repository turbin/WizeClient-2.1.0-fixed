/****************************************************************************
** Meta object code from reading C++ file 'notecomments_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "notecomments_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notecomments_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WizService__Internal__NoteCommentsPrivate[] = {

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
      52,   43,   42,   42, 0x0a,
      87,   77,   42,   42, 0x0a,
     145,   42,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WizService__Internal__NoteCommentsPrivate[] = {
    "WizService::Internal::NoteCommentsPrivate\0"
    "\0strToken\0onTokenAcquired(QString)\0"
    "view,note\0"
    "onViewNoteLoaded(Core::CWizDocumentView*,WIZDOCUMENTDATA)\0"
    "onCommentsButtonClicked()\0"
};

void WizService::Internal::NoteCommentsPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NoteCommentsPrivate *_t = static_cast<NoteCommentsPrivate *>(_o);
        switch (_id) {
        case 0: _t->onTokenAcquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onViewNoteLoaded((*reinterpret_cast< Core::CWizDocumentView*(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2]))); break;
        case 2: _t->onCommentsButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WizService::Internal::NoteCommentsPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WizService::Internal::NoteCommentsPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizService__Internal__NoteCommentsPrivate,
      qt_meta_data_WizService__Internal__NoteCommentsPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WizService::Internal::NoteCommentsPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WizService::Internal::NoteCommentsPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WizService::Internal::NoteCommentsPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WizService__Internal__NoteCommentsPrivate))
        return static_cast<void*>(const_cast< NoteCommentsPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int WizService::Internal::NoteCommentsPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
