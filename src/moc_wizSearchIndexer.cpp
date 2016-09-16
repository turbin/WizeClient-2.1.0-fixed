/****************************************************************************
** Meta object code from reading C++ file 'wizSearchIndexer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "share/wizSearchIndexer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizSearchIndexer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizSearchIndexer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      45,   41,   18,   18, 0x08,
      89,   82,   18,   18, 0x08,

 // methods: signature, parameters, type, tag, flags
     143,   18,  138,   18, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_CWizSearchIndexer[] = {
    "CWizSearchIndexer\0\0on_timerFTS_timeout()\0"
    "doc\0on_document_deleted(WIZDOCUMENTDATA)\0"
    "attach\0on_attachment_deleted(WIZDOCUMENTATTACHMENTDATA)\0"
    "bool\0rebuildFTSIndex()\0"
};

void CWizSearchIndexer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizSearchIndexer *_t = static_cast<CWizSearchIndexer *>(_o);
        switch (_id) {
        case 0: _t->on_timerFTS_timeout(); break;
        case 1: _t->on_document_deleted((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 2: _t->on_attachment_deleted((*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[1]))); break;
        case 3: { bool _r = _t->rebuildFTSIndex();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizSearchIndexer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizSearchIndexer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CWizSearchIndexer,
      qt_meta_data_CWizSearchIndexer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizSearchIndexer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizSearchIndexer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizSearchIndexer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizSearchIndexer))
        return static_cast<void*>(const_cast< CWizSearchIndexer*>(this));
    if (!strcmp(_clname, "IWizCluceneSearch"))
        return static_cast< IWizCluceneSearch*>(const_cast< CWizSearchIndexer*>(this));
    return QObject::qt_metacast(_clname);
}

int CWizSearchIndexer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_CWizSearcher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   13,   13,   13, 0x0a,

 // methods: signature, parameters, type, tag, flags
     126,  114,   13,   13, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_CWizSearcher[] = {
    "CWizSearcher\0\0strKeywords,arrayDocument,bEnd\0"
    "searchProcess(QString,CWizDocumentDataArray,bool)\0"
    "on_timer_timeout()\0strKeywords\0"
    "searchKeyword(QString)\0"
};

void CWizSearcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizSearcher *_t = static_cast<CWizSearcher *>(_o);
        switch (_id) {
        case 0: _t->searchProcess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const CWizDocumentDataArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->on_timer_timeout(); break;
        case 2: _t->searchKeyword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizSearcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizSearcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CWizSearcher,
      qt_meta_data_CWizSearcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizSearcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizSearcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizSearcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizSearcher))
        return static_cast<void*>(const_cast< CWizSearcher*>(this));
    if (!strcmp(_clname, "IWizCluceneSearch"))
        return static_cast< IWizCluceneSearch*>(const_cast< CWizSearcher*>(this));
    return QObject::qt_metacast(_clname);
}

int CWizSearcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void CWizSearcher::searchProcess(const QString & _t1, const CWizDocumentDataArray & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
