/****************************************************************************
** Meta object code from reading C++ file 'wizDocumentListView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizDocumentListView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizDocumentListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizDocumentListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      45,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   21,   21,   21, 0x0a,
      97,   93,   21,   21, 0x0a,
     138,  124,   21,   21, 0x0a,
     186,  177,   21,   21, 0x0a,
     247,  223,   21,   21, 0x0a,
     301,  177,   21,   21, 0x0a,
     338,   21,   21,   21, 0x0a,
     361,   21,   21,   21, 0x0a,
     388,   21,   21,   21, 0x0a,
     416,   21,   21,   21, 0x0a,
     448,  441,   21,   21, 0x0a,
     486,   21,   21,   21, 0x0a,
     511,  441,   21,   21, 0x0a,
     553,  549,   21,   21, 0x0a,
     605,  593,   21,   21, 0x0a,
     653,  635,   21,   21, 0x0a,
     695,  689,   21,   21, 0x0a,
     731,  724,   21,   21, 0x0a,
     763,   21,   21,   21, 0x0a,
     783,  689,   21,   21, 0x0a,
     826,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizDocumentListView[] = {
    "CWizDocumentListView\0\0documentCountChanged()\0"
    "lastDocumentDeleted()\0on_itemSelectionChanged()\0"
    "tag\0on_tag_created(WIZTAGDATA)\0"
    "tagOld,tagNew\0on_tag_modified(WIZTAGDATA,WIZTAGDATA)\0"
    "document\0on_document_created(WIZDOCUMENTDATA)\0"
    "documentOld,documentNew\0"
    "on_document_modified(WIZDOCUMENTDATA,WIZDOCUMENTDATA)\0"
    "on_document_deleted(WIZDOCUMENTDATA)\0"
    "on_action_selectTags()\0"
    "on_action_deleteDocument()\0"
    "on_action_encryptDocument()\0"
    "on_action_moveDocument()\0result\0"
    "on_action_moveDocument_confirmed(int)\0"
    "on_action_copyDocument()\0"
    "on_action_copyDocument_confirmed(int)\0"
    "abs\0on_document_abstractLoaded(WIZABSTRACT)\0"
    "strUserGUID\0on_userAvatar_loaded(QString)\0"
    "strKbGUID,strGUID\0onThumbCacheLoaded(QString,QString)\0"
    "value\0on_vscroll_valueChanged(int)\0"
    "action\0on_vscroll_actionTriggered(int)\0"
    "on_vscroll_update()\0"
    "on_vscrollAnimation_valueChanged(QVariant)\0"
    "on_vscrollAnimation_finished()\0"
};

void CWizDocumentListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizDocumentListView *_t = static_cast<CWizDocumentListView *>(_o);
        switch (_id) {
        case 0: _t->documentCountChanged(); break;
        case 1: _t->lastDocumentDeleted(); break;
        case 2: _t->on_itemSelectionChanged(); break;
        case 3: _t->on_tag_created((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 4: _t->on_tag_modified((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1])),(*reinterpret_cast< const WIZTAGDATA(*)>(_a[2]))); break;
        case 5: _t->on_document_created((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 6: _t->on_document_modified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2]))); break;
        case 7: _t->on_document_deleted((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 8: _t->on_action_selectTags(); break;
        case 9: _t->on_action_deleteDocument(); break;
        case 10: _t->on_action_encryptDocument(); break;
        case 11: _t->on_action_moveDocument(); break;
        case 12: _t->on_action_moveDocument_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_action_copyDocument(); break;
        case 14: _t->on_action_copyDocument_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_document_abstractLoaded((*reinterpret_cast< const WIZABSTRACT(*)>(_a[1]))); break;
        case 16: _t->on_userAvatar_loaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->onThumbCacheLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->on_vscroll_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_vscroll_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_vscroll_update(); break;
        case 21: _t->on_vscrollAnimation_valueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 22: _t->on_vscrollAnimation_finished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizDocumentListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizDocumentListView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_CWizDocumentListView,
      qt_meta_data_CWizDocumentListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizDocumentListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizDocumentListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizDocumentListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizDocumentListView))
        return static_cast<void*>(const_cast< CWizDocumentListView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int CWizDocumentListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void CWizDocumentListView::documentCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CWizDocumentListView::lastDocumentDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
