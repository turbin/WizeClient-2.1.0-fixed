/****************************************************************************
** Meta object code from reading C++ file 'wizDatabase.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "share/wizDatabase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizDatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizDocument[] = {

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

 // methods: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x02,
      23,   13,   13,   13, 0x02,
      51,   43,   13,   13, 0x02,
      95,   73,   68,   13, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_CWizDocument[] = {
    "CWizDocument\0\0Delete()\0PermanentlyDelete()\0"
    "pFolder\0MoveTo(QObject*)\0bool\0"
    "strHtml,strURL,nFlags\0"
    "UpdateDocument4(QString,QString,int)\0"
};

void CWizDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizDocument *_t = static_cast<CWizDocument *>(_o);
        switch (_id) {
        case 0: _t->Delete(); break;
        case 1: _t->PermanentlyDelete(); break;
        case 2: _t->MoveTo((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->UpdateDocument4((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizDocument::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CWizDocument,
      qt_meta_data_CWizDocument, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizDocument::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizDocument))
        return static_cast<void*>(const_cast< CWizDocument*>(this));
    return QObject::qt_metacast(_clname);
}

int CWizDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_CWizFolder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      65,   12,   11,   11, 0x05,

 // methods: signature, parameters, type, tag, flags
     119,   11,   11,   11, 0x02,
     133,  128,   11,   11, 0x02,
     158,   11,  150,   11, 0x02,

 // properties: name, type, flags
     169,  150, 0x0a095001,

       0        // eod
};

static const char qt_meta_stringdata_CWizFolder[] = {
    "CWizFolder\0\0"
    "nTotal,nProcessed,strOldLocation,strNewLocation,data\0"
    "moveDocument(int,int,QString,QString,WIZDOCUMENTDATA)\0"
    "Delete()\0dest\0MoveTo(QObject*)\0QString\0"
    "Location()\0Location\0"
};

void CWizFolder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizFolder *_t = static_cast<CWizFolder *>(_o);
        switch (_id) {
        case 0: _t->moveDocument((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[5]))); break;
        case 1: _t->Delete(); break;
        case 2: _t->MoveTo((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->Location();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizFolder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizFolder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CWizFolder,
      qt_meta_data_CWizFolder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizFolder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizFolder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizFolder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizFolder))
        return static_cast<void*>(const_cast< CWizFolder*>(this));
    return QObject::qt_metacast(_clname);
}

int CWizFolder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = Location(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CWizFolder::moveDocument(int _t1, int _t2, const QString & _t3, const QString & _t4, const WIZDOCUMENTDATA & _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_CWizDatabase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      43,   32,   13,   13, 0x05,
      93,   84,   13,   13, 0x05,
     142,  129,   13,   13, 0x05,
     190,  180,   13,   13, 0x05,
     214,  180,   13,   13, 0x05,
     249,  180,   13,   13, 0x05,
     281,  277,   13,   13, 0x05,
     302,  277,   13,   13, 0x05,
     322,   13,   13,   13, 0x05,

 // methods: signature, parameters, type, tag, flags
     355,   13,  346,   13, 0x02,
     398,  379,  346,   13, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_CWizDatabase[] = {
    "CWizDatabase\0\0userInfoChanged()\0"
    "arrayGroup\0groupsInfoDownloaded(CWizGroupDataArray)\0"
    "arrayBiz\0bizInfoDownloaded(CWizBizDataArray)\0"
    "db,strKbGUID\0databaseOpened(CWizDatabase*,QString)\0"
    "strKbGUID\0databaseRename(QString)\0"
    "databasePermissionChanged(QString)\0"
    "databaseBizChanged(QString)\0msg\0"
    "updateError(QString)\0processLog(QString)\0"
    "folderPositionChanged()\0QObject*\0"
    "GetDeletedItemsFolder()\0strLocation,create\0"
    "GetFolderByLocation(QString,bool)\0"
};

void CWizDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizDatabase *_t = static_cast<CWizDatabase *>(_o);
        switch (_id) {
        case 0: _t->userInfoChanged(); break;
        case 1: _t->groupsInfoDownloaded((*reinterpret_cast< const CWizGroupDataArray(*)>(_a[1]))); break;
        case 2: _t->bizInfoDownloaded((*reinterpret_cast< const CWizBizDataArray(*)>(_a[1]))); break;
        case 3: _t->databaseOpened((*reinterpret_cast< CWizDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->databaseRename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->databasePermissionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->databaseBizChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->processLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->folderPositionChanged(); break;
        case 10: { QObject* _r = _t->GetDeletedItemsFolder();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 11: { QObject* _r = _t->GetFolderByLocation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizDatabase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizDatabase::staticMetaObject = {
    { &CWizIndex::staticMetaObject, qt_meta_stringdata_CWizDatabase,
      qt_meta_data_CWizDatabase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizDatabase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizDatabase))
        return static_cast<void*>(const_cast< CWizDatabase*>(this));
    if (!strcmp(_clname, "CThumbIndex"))
        return static_cast< CThumbIndex*>(const_cast< CWizDatabase*>(this));
    if (!strcmp(_clname, "IWizSyncableDatabase"))
        return static_cast< IWizSyncableDatabase*>(const_cast< CWizDatabase*>(this));
    return CWizIndex::qt_metacast(_clname);
}

int CWizDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWizIndex::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CWizDatabase::userInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CWizDatabase::groupsInfoDownloaded(const CWizGroupDataArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CWizDatabase::bizInfoDownloaded(const CWizBizDataArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CWizDatabase::databaseOpened(CWizDatabase * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CWizDatabase::databaseRename(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CWizDatabase::databasePermissionChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CWizDatabase::databaseBizChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CWizDatabase::updateError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CWizDatabase::processLog(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CWizDatabase::folderPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
