/****************************************************************************
** Meta object code from reading C++ file 'wizDatabaseManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "share/wizDatabaseManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizDatabaseManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizDatabaseManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   21,   20,   20, 0x05,
      55,   21,   20,   20, 0x05,
      79,   21,   20,   20, 0x05,
     103,   21,   20,   20, 0x05,
     138,   20,   20,   20, 0x05,
     170,  166,   20,   20, 0x05,
     207,  193,   20,   20, 0x05,
     242,  166,   20,   20, 0x05,
     271,  265,   20,   20, 0x05,
     316,  298,   20,   20, 0x05,
     357,  265,   20,   20, 0x05,
     393,  384,   20,   20, 0x05,
     450,  426,   20,   20, 0x05,
     500,  384,   20,   20, 0x05,
     533,  384,   20,   20, 0x05,
     571,  384,   20,   20, 0x05,
     613,  384,   20,   20, 0x05,
     661,  650,   20,   20, 0x05,
     734,  706,   20,   20, 0x05,
     806,  650,   20,   20, 0x05,
     863,  851,   20,   20, 0x05,
     886,  851,   20,   20, 0x05,
     909,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     946,  933,   20,   20, 0x08,
    1004,  992,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CWizDatabaseManager[] = {
    "CWizDatabaseManager\0\0strKbGUID\0"
    "databaseOpened(QString)\0databaseClosed(QString)\0"
    "databaseRename(QString)\0"
    "databasePermissionChanged(QString)\0"
    "databaseBizchanged(QString)\0tag\0"
    "tagCreated(WIZTAGDATA)\0tagOld,tagNew\0"
    "tagModified(WIZTAGDATA,WIZTAGDATA)\0"
    "tagDeleted(WIZTAGDATA)\0style\0"
    "styleCreated(WIZSTYLEDATA)\0styleOld,styleNew\0"
    "styleModified(WIZSTYLEDATA,WIZSTYLEDATA)\0"
    "styleDeleted(WIZSTYLEDATA)\0document\0"
    "documentCreated(WIZDOCUMENTDATA)\0"
    "documentOld,documentNew\0"
    "documentModified(WIZDOCUMENTDATA,WIZDOCUMENTDATA)\0"
    "documentDeleted(WIZDOCUMENTDATA)\0"
    "documentDataModified(WIZDOCUMENTDATA)\0"
    "documentAbstractModified(WIZDOCUMENTDATA)\0"
    "documentTagModified(WIZDOCUMENTDATA)\0"
    "attachment\0attachmentCreated(WIZDOCUMENTATTACHMENTDATA)\0"
    "attachmentOld,attachmentNew\0"
    "attachmentModified(WIZDOCUMENTATTACHMENTDATA,WIZDOCUMENTATTACHMENTDATA"
    ")\0"
    "attachmentDeleted(WIZDOCUMENTATTACHMENTDATA)\0"
    "strLocation\0folderCreated(QString)\0"
    "folderDeleted(QString)\0folderPositionChanged()\0"
    "db,strKbGUID\0on_groupDatabaseOpened(CWizDatabase*,QString)\0"
    "arrayGroups\0on_groupsInfoDownloaded(CWizGroupDataArray)\0"
};

void CWizDatabaseManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizDatabaseManager *_t = static_cast<CWizDatabaseManager *>(_o);
        switch (_id) {
        case 0: _t->databaseOpened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->databaseClosed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->databaseRename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->databasePermissionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->databaseBizchanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->tagCreated((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 6: _t->tagModified((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1])),(*reinterpret_cast< const WIZTAGDATA(*)>(_a[2]))); break;
        case 7: _t->tagDeleted((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 8: _t->styleCreated((*reinterpret_cast< const WIZSTYLEDATA(*)>(_a[1]))); break;
        case 9: _t->styleModified((*reinterpret_cast< const WIZSTYLEDATA(*)>(_a[1])),(*reinterpret_cast< const WIZSTYLEDATA(*)>(_a[2]))); break;
        case 10: _t->styleDeleted((*reinterpret_cast< const WIZSTYLEDATA(*)>(_a[1]))); break;
        case 11: _t->documentCreated((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 12: _t->documentModified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2]))); break;
        case 13: _t->documentDeleted((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 14: _t->documentDataModified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 15: _t->documentAbstractModified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 16: _t->documentTagModified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 17: _t->attachmentCreated((*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[1]))); break;
        case 18: _t->attachmentModified((*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[2]))); break;
        case 19: _t->attachmentDeleted((*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[1]))); break;
        case 20: _t->folderCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->folderDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->folderPositionChanged(); break;
        case 23: _t->on_groupDatabaseOpened((*reinterpret_cast< CWizDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: _t->on_groupsInfoDownloaded((*reinterpret_cast< const CWizGroupDataArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizDatabaseManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizDatabaseManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CWizDatabaseManager,
      qt_meta_data_CWizDatabaseManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizDatabaseManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizDatabaseManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizDatabaseManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizDatabaseManager))
        return static_cast<void*>(const_cast< CWizDatabaseManager*>(this));
    return QObject::qt_metacast(_clname);
}

int CWizDatabaseManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void CWizDatabaseManager::databaseOpened(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CWizDatabaseManager::databaseClosed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CWizDatabaseManager::databaseRename(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CWizDatabaseManager::databasePermissionChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CWizDatabaseManager::databaseBizchanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CWizDatabaseManager::tagCreated(const WIZTAGDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CWizDatabaseManager::tagModified(const WIZTAGDATA & _t1, const WIZTAGDATA & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CWizDatabaseManager::tagDeleted(const WIZTAGDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CWizDatabaseManager::styleCreated(const WIZSTYLEDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CWizDatabaseManager::styleModified(const WIZSTYLEDATA & _t1, const WIZSTYLEDATA & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CWizDatabaseManager::styleDeleted(const WIZSTYLEDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CWizDatabaseManager::documentCreated(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CWizDatabaseManager::documentModified(const WIZDOCUMENTDATA & _t1, const WIZDOCUMENTDATA & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CWizDatabaseManager::documentDeleted(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CWizDatabaseManager::documentDataModified(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CWizDatabaseManager::documentAbstractModified(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CWizDatabaseManager::documentTagModified(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CWizDatabaseManager::attachmentCreated(const WIZDOCUMENTATTACHMENTDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void CWizDatabaseManager::attachmentModified(const WIZDOCUMENTATTACHMENTDATA & _t1, const WIZDOCUMENTATTACHMENTDATA & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void CWizDatabaseManager::attachmentDeleted(const WIZDOCUMENTATTACHMENTDATA & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CWizDatabaseManager::folderCreated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void CWizDatabaseManager::folderDeleted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void CWizDatabaseManager::folderPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, 0);
}
QT_END_MOC_NAMESPACE
