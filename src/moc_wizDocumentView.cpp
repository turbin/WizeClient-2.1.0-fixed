/****************************************************************************
** Meta object code from reading C++ file 'wizDocumentView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizDocumentView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizDocumentView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Core__CWizDocumentView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   24,   23,   23, 0x0a,
      90,   87,   23,   23, 0x0a,
     151,  146,   23,   23, 0x0a,
     190,   23,   23,   23, 0x0a,
     227,  213,   23,   23, 0x0a,
     292,  268,   23,   23, 0x0a,
     351,  346,   23,   23, 0x0a,
     405,  394,   23,   23, 0x0a,
     454,  394,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Core__CWizDocumentView[] = {
    "Core::CWizDocumentView\0\0view,doc\0"
    "onViewNoteRequested(Core::INoteView*,WIZDOCUMENTDATA)\0"
    ",,\0onViewNoteLoaded(Core::INoteView*,WIZDOCUMENTDATA,bool)\0"
    "view\0onCloseNoteRequested(Core::INoteView*)\0"
    "onCipherCheckRequest()\0data,bSucceed\0"
    "on_download_finished(WIZOBJECTDATA,bool)\0"
    "documentOld,documentNew\0"
    "on_document_modified(WIZDOCUMENTDATA,WIZDOCUMENTDATA)\0"
    "data\0on_document_data_modified(WIZDOCUMENTDATA)\0"
    "attachment\0on_attachment_created(WIZDOCUMENTATTACHMENTDATA)\0"
    "on_attachment_deleted(WIZDOCUMENTATTACHMENTDATA)\0"
};

void Core::CWizDocumentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizDocumentView *_t = static_cast<CWizDocumentView *>(_o);
        switch (_id) {
        case 0: _t->onViewNoteRequested((*reinterpret_cast< Core::INoteView*(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2]))); break;
        case 1: _t->onViewNoteLoaded((*reinterpret_cast< Core::INoteView*(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->onCloseNoteRequested((*reinterpret_cast< Core::INoteView*(*)>(_a[1]))); break;
        case 3: _t->onCipherCheckRequest(); break;
        case 4: _t->on_download_finished((*reinterpret_cast< const WIZOBJECTDATA(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->on_document_modified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2]))); break;
        case 6: _t->on_document_data_modified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 7: _t->on_attachment_created((*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[1]))); break;
        case 8: _t->on_attachment_deleted((*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Core::CWizDocumentView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::CWizDocumentView::staticMetaObject = {
    { &INoteView::staticMetaObject, qt_meta_stringdata_Core__CWizDocumentView,
      qt_meta_data_Core__CWizDocumentView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::CWizDocumentView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::CWizDocumentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::CWizDocumentView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__CWizDocumentView))
        return static_cast<void*>(const_cast< CWizDocumentView*>(this));
    return INoteView::qt_metacast(_clname);
}

int Core::CWizDocumentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = INoteView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
