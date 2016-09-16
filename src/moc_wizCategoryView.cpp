/****************************************************************************
** Meta object code from reading C++ file 'wizCategoryView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizCategoryView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizCategoryView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizCategoryBaseView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   22,   21,   21, 0x09,
      87,   63,   21,   21, 0x09,
     141,   22,   21,   21, 0x09,
     178,   22,   21,   21, 0x09,
     232,  220,   21,   21, 0x09,
     259,  220,   21,   21, 0x09,
     286,   21,   21,   21, 0x09,
     318,  314,   21,   21, 0x09,
     359,  345,   21,   21, 0x09,
     398,  314,   21,   21, 0x09,
     435,  425,   21,   21, 0x09,
     460,  425,   21,   21, 0x09,
     485,  425,   21,   21, 0x09,
     511,  425,   21,   21, 0x09,
     547,  425,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CWizCategoryBaseView[] = {
    "CWizCategoryBaseView\0\0doc\0"
    "on_document_created(WIZDOCUMENTDATA)\0"
    "documentOld,documentNew\0"
    "on_document_modified(WIZDOCUMENTDATA,WIZDOCUMENTDATA)\0"
    "on_document_deleted(WIZDOCUMENTDATA)\0"
    "on_document_tag_modified(WIZDOCUMENTDATA)\0"
    "strLocation\0on_folder_created(QString)\0"
    "on_folder_deleted(QString)\0"
    "on_folder_positionChanged()\0tag\0"
    "on_tag_created(WIZTAGDATA)\0tagOld,tagNew\0"
    "on_tag_modified(WIZTAGDATA,WIZTAGDATA)\0"
    "on_tag_deleted(WIZTAGDATA)\0strKbGUID\0"
    "on_group_opened(QString)\0"
    "on_group_closed(QString)\0"
    "on_group_renamed(QString)\0"
    "on_group_permissionChanged(QString)\0"
    "on_group_bizChanged(QString)\0"
};

void CWizCategoryBaseView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizCategoryBaseView *_t = static_cast<CWizCategoryBaseView *>(_o);
        switch (_id) {
        case 0: _t->on_document_created((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 1: _t->on_document_modified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2]))); break;
        case 2: _t->on_document_deleted((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 3: _t->on_document_tag_modified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 4: _t->on_folder_created((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_folder_deleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_folder_positionChanged(); break;
        case 7: _t->on_tag_created((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 8: _t->on_tag_modified((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1])),(*reinterpret_cast< const WIZTAGDATA(*)>(_a[2]))); break;
        case 9: _t->on_tag_deleted((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 10: _t->on_group_opened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_group_closed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_group_renamed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_group_permissionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_group_bizChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizCategoryBaseView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizCategoryBaseView::staticMetaObject = {
    { &Core::ITreeView::staticMetaObject, qt_meta_stringdata_CWizCategoryBaseView,
      qt_meta_data_CWizCategoryBaseView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizCategoryBaseView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizCategoryBaseView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizCategoryBaseView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizCategoryBaseView))
        return static_cast<void*>(const_cast< CWizCategoryBaseView*>(this));
    typedef Core::ITreeView QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int CWizCategoryBaseView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Core::ITreeView QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_CWizCategoryView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      40,   32,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   17,   17,   17, 0x08,
     109,   17,   17,   17, 0x08,
     162,  152,   17,   17, 0x08,
     224,  220,   17,   17, 0x09,
     275,  261,   17,   17, 0x09,
     329,  220,   17,   17, 0x09,
     366,  220,   17,   17, 0x09,
     420,  408,   17,   17, 0x09,
     447,  408,   17,   17, 0x09,
     474,   17,   17,   17, 0x09,
     506,  502,   17,   17, 0x09,
     547,  533,   17,   17, 0x09,
     586,  502,   17,   17, 0x09,
     613,  152,   17,   17, 0x09,
     638,  152,   17,   17, 0x09,
     663,  152,   17,   17, 0x09,
     689,  152,   17,   17, 0x09,
     725,  152,   17,   17, 0x09,
     754,   17,   17,   17, 0x0a,
     778,   17,   17,   17, 0x0a,
     798,   17,   17,   17, 0x0a,
     832,  825,   17,   17, 0x0a,
     872,   17,   17,   17, 0x0a,
     896,  825,   17,   17, 0x0a,
     933,   17,   17,   17, 0x0a,
     961,  825,   17,   17, 0x0a,
    1002,   17,   17,   17, 0x0a,
    1023,   17,   17,   17, 0x0a,
    1051,  825,   17,   17, 0x0a,
    1139, 1092,   17,   17, 0x0a,
    1225,   17,   17,   17, 0x0a,
    1248,   17,   17,   17, 0x0a,
    1278,  825,   17,   17, 0x0a,
    1321, 1092,   17,   17, 0x0a,
    1409,   17,   17,   17, 0x0a,
    1436,  825,   17,   17, 0x0a,
    1476,   17,   17,   17, 0x0a,
    1507,  825,   17,   17, 0x0a,
    1551,   17,   17,   17, 0x0a,
    1574,   17,   17,   17, 0x0a,
    1604,  825,   17,   17, 0x0a,
    1647,   17,   17,   17, 0x0a,
    1674,  825,   17,   17, 0x0a,
    1714,   17,   17,   17, 0x0a,
    1745,  825,   17,   17, 0x0a,
    1789,   17,   17,   17, 0x0a,
    1815,   17,   17,   17, 0x0a,
    1842,   17,   17,   17, 0x0a,
    1868,   17,   17,   17, 0x0a,
    1891,   17,   17,   17, 0x0a,
    1915,   17,   17,   17, 0x0a,
    1937,   17,   17,   17, 0x0a,
    1960,   17,   17,   17, 0x0a,
    1998, 1986,   17,   17, 0x0a,

 // methods: signature, parameters, type, tag, flags
    2047,   17, 2035,   17, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_CWizCategoryView[] = {
    "CWizCategoryView\0\0newDocument()\0strHint\0"
    "documentsHint(QString)\0"
    "on_updatePrivateFolderDocumentCount_timeout()\0"
    "on_updatePrivateTagDocumentCount_timeout()\0"
    "strKbGUID\0"
    "on_updateGroupFolderDocumentCount_mapped_timeout(QString)\0"
    "doc\0on_document_created(WIZDOCUMENTDATA)\0"
    "docOld,docNew\0"
    "on_document_modified(WIZDOCUMENTDATA,WIZDOCUMENTDATA)\0"
    "on_document_deleted(WIZDOCUMENTDATA)\0"
    "on_document_tag_modified(WIZDOCUMENTDATA)\0"
    "strLocation\0on_folder_created(QString)\0"
    "on_folder_deleted(QString)\0"
    "on_folder_positionChanged()\0tag\0"
    "on_tag_created(WIZTAGDATA)\0tagOld,tagNew\0"
    "on_tag_modified(WIZTAGDATA,WIZTAGDATA)\0"
    "on_tag_deleted(WIZTAGDATA)\0"
    "on_group_opened(QString)\0"
    "on_group_closed(QString)\0"
    "on_group_renamed(QString)\0"
    "on_group_permissionChanged(QString)\0"
    "on_group_bizChanged(QString)\0"
    "on_action_newDocument()\0on_action_newItem()\0"
    "on_action_user_newFolder()\0result\0"
    "on_action_user_newFolder_confirmed(int)\0"
    "on_action_user_newTag()\0"
    "on_action_user_newTag_confirmed(int)\0"
    "on_action_group_newFolder()\0"
    "on_action_group_newFolder_confirmed(int)\0"
    "on_action_moveItem()\0on_action_user_moveFolder()\0"
    "on_action_user_moveFolder_confirmed(int)\0"
    "nMax,nValue,strOldLocation,strNewLocation,data\0"
    "on_action_user_moveFolder_confirmed_progress(int,int,QString,QString,W"
    "IZDOCUMENTDATA)\0"
    "on_action_renameItem()\0"
    "on_action_user_renameFolder()\0"
    "on_action_user_renameFolder_confirmed(int)\0"
    "on_action_user_renameFolder_confirmed_progress(int,int,QString,QString"
    ",WIZDOCUMENTDATA)\0"
    "on_action_user_renameTag()\0"
    "on_action_user_renameTag_confirmed(int)\0"
    "on_action_group_renameFolder()\0"
    "on_action_group_renameFolder_confirmed(int)\0"
    "on_action_deleteItem()\0"
    "on_action_user_deleteFolder()\0"
    "on_action_user_deleteFolder_confirmed(int)\0"
    "on_action_user_deleteTag()\0"
    "on_action_user_deleteTag_confirmed(int)\0"
    "on_action_group_deleteFolder()\0"
    "on_action_group_deleteFolder_confirmed(int)\0"
    "on_action_itemAttribute()\0"
    "on_action_groupAttribute()\0"
    "on_action_bizgAttribute()\0"
    "on_action_itemManage()\0on_action_manageGroup()\0"
    "on_action_manageBiz()\0on_action_emptyTrash()\0"
    "on_itemSelectionChanged()\0item,column\0"
    "on_itemClicked(QTreeWidgetItem*,int)\0"
    "CWizFolder*\0SelectedFolder()\0"
};

void CWizCategoryView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizCategoryView *_t = static_cast<CWizCategoryView *>(_o);
        switch (_id) {
        case 0: _t->newDocument(); break;
        case 1: _t->documentsHint((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_updatePrivateFolderDocumentCount_timeout(); break;
        case 3: _t->on_updatePrivateTagDocumentCount_timeout(); break;
        case 4: _t->on_updateGroupFolderDocumentCount_mapped_timeout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_document_created((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 6: _t->on_document_modified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2]))); break;
        case 7: _t->on_document_deleted((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 8: _t->on_document_tag_modified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 9: _t->on_folder_created((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_folder_deleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_folder_positionChanged(); break;
        case 12: _t->on_tag_created((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 13: _t->on_tag_modified((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1])),(*reinterpret_cast< const WIZTAGDATA(*)>(_a[2]))); break;
        case 14: _t->on_tag_deleted((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 15: _t->on_group_opened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_group_closed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->on_group_renamed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->on_group_permissionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->on_group_bizChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->on_action_newDocument(); break;
        case 21: _t->on_action_newItem(); break;
        case 22: _t->on_action_user_newFolder(); break;
        case 23: _t->on_action_user_newFolder_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_action_user_newTag(); break;
        case 25: _t->on_action_user_newTag_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_action_group_newFolder(); break;
        case 27: _t->on_action_group_newFolder_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_action_moveItem(); break;
        case 29: _t->on_action_user_moveFolder(); break;
        case 30: _t->on_action_user_moveFolder_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_action_user_moveFolder_confirmed_progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[5]))); break;
        case 32: _t->on_action_renameItem(); break;
        case 33: _t->on_action_user_renameFolder(); break;
        case 34: _t->on_action_user_renameFolder_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_action_user_renameFolder_confirmed_progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[5]))); break;
        case 36: _t->on_action_user_renameTag(); break;
        case 37: _t->on_action_user_renameTag_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_action_group_renameFolder(); break;
        case 39: _t->on_action_group_renameFolder_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_action_deleteItem(); break;
        case 41: _t->on_action_user_deleteFolder(); break;
        case 42: _t->on_action_user_deleteFolder_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->on_action_user_deleteTag(); break;
        case 44: _t->on_action_user_deleteTag_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->on_action_group_deleteFolder(); break;
        case 46: _t->on_action_group_deleteFolder_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->on_action_itemAttribute(); break;
        case 48: _t->on_action_groupAttribute(); break;
        case 49: _t->on_action_bizgAttribute(); break;
        case 50: _t->on_action_itemManage(); break;
        case 51: _t->on_action_manageGroup(); break;
        case 52: _t->on_action_manageBiz(); break;
        case 53: _t->on_action_emptyTrash(); break;
        case 54: _t->on_itemSelectionChanged(); break;
        case 55: _t->on_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 56: { CWizFolder* _r = _t->SelectedFolder();
            if (_a[0]) *reinterpret_cast< CWizFolder**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizCategoryView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizCategoryView::staticMetaObject = {
    { &CWizCategoryBaseView::staticMetaObject, qt_meta_stringdata_CWizCategoryView,
      qt_meta_data_CWizCategoryView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizCategoryView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizCategoryView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizCategoryView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizCategoryView))
        return static_cast<void*>(const_cast< CWizCategoryView*>(this));
    return CWizCategoryBaseView::qt_metacast(_clname);
}

int CWizCategoryView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWizCategoryBaseView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    }
    return _id;
}

// SIGNAL 0
void CWizCategoryView::newDocument()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CWizCategoryView::documentsHint(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
