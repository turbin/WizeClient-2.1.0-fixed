/****************************************************************************
** Meta object code from reading C++ file 'wizDocumentWebView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizDocumentWebView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizDocumentWebView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizDocumentWebViewLoaderThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      53,   33,   32,   32, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CWizDocumentWebViewLoaderThread[] = {
    "CWizDocumentWebViewLoaderThread\0\0"
    "strGUID,strFileName\0loaded(QString,QString)\0"
};

void CWizDocumentWebViewLoaderThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizDocumentWebViewLoaderThread *_t = static_cast<CWizDocumentWebViewLoaderThread *>(_o);
        switch (_id) {
        case 0: _t->loaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizDocumentWebViewLoaderThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizDocumentWebViewLoaderThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CWizDocumentWebViewLoaderThread,
      qt_meta_data_CWizDocumentWebViewLoaderThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizDocumentWebViewLoaderThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizDocumentWebViewLoaderThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizDocumentWebViewLoaderThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizDocumentWebViewLoaderThread))
        return static_cast<void*>(const_cast< CWizDocumentWebViewLoaderThread*>(this));
    return QThread::qt_metacast(_clname);
}

int CWizDocumentWebViewLoaderThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CWizDocumentWebViewLoaderThread::loaded(const QString _t1, const QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_CWizDocumentWebViewWorkerPool[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      51,   31,   30,   30, 0x05,
      86,   75,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
     106,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizDocumentWebViewWorkerPool[] = {
    "CWizDocumentWebViewWorkerPool\0\0"
    "strGUID,strFileName\0loaded(QString,QString)\0"
    "strGUID,ok\0saved(QString,bool)\0"
    "on_timer_timeout()\0"
};

void CWizDocumentWebViewWorkerPool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizDocumentWebViewWorkerPool *_t = static_cast<CWizDocumentWebViewWorkerPool *>(_o);
        switch (_id) {
        case 0: _t->loaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->saved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->on_timer_timeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizDocumentWebViewWorkerPool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizDocumentWebViewWorkerPool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CWizDocumentWebViewWorkerPool,
      qt_meta_data_CWizDocumentWebViewWorkerPool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizDocumentWebViewWorkerPool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizDocumentWebViewWorkerPool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizDocumentWebViewWorkerPool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizDocumentWebViewWorkerPool))
        return static_cast<void*>(const_cast< CWizDocumentWebViewWorkerPool*>(this));
    return QObject::qt_metacast(_clname);
}

int CWizDocumentWebViewWorkerPool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CWizDocumentWebViewWorkerPool::loaded(const QString _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CWizDocumentWebViewWorkerPool::saved(const QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_CWizDocumentWebViewPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   25,   24,   24, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CWizDocumentWebViewPage[] = {
    "CWizDocumentWebViewPage\0\0act\0"
    "actionTriggered(QWebPage::WebAction)\0"
};

void CWizDocumentWebViewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizDocumentWebViewPage *_t = static_cast<CWizDocumentWebViewPage *>(_o);
        switch (_id) {
        case 0: _t->actionTriggered((*reinterpret_cast< QWebPage::WebAction(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizDocumentWebViewPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizDocumentWebViewPage::staticMetaObject = {
    { &QWebPage::staticMetaObject, qt_meta_stringdata_CWizDocumentWebViewPage,
      qt_meta_data_CWizDocumentWebViewPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizDocumentWebViewPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizDocumentWebViewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizDocumentWebViewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizDocumentWebViewPage))
        return static_cast<void*>(const_cast< CWizDocumentWebViewPage*>(this));
    return QWebPage::qt_metacast(_clname);
}

int CWizDocumentWebViewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CWizDocumentWebViewPage::actionTriggered(QWebPage::WebAction _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_CWizDocumentWebView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      65,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      37,   20,   20,   20, 0x05,
      47,   20,   20,   20, 0x05,
      62,   58,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   93,   20,   20, 0x0a,
     136,   20,   20,   20, 0x0a,
     180,  177,   20,   20, 0x0a,
     211,  207,   20,   20, 0x0a,
     237,   20,   20,   20, 0x0a,
     262,   20,   20,   20, 0x0a,
     289,   20,   20,   20, 0x0a,
     333,  313,   20,   20, 0x0a,
     377,  366,   20,   20, 0x0a,
     407,   20,   20,   20, 0x0a,
     452,   20,   20,   20, 0x0a,
     498,   20,   20,   20, 0x0a,
     536,  530,   20,   20, 0x0a,
     586,   20,   20,   20, 0x0a,
     618,  530,   20,   20, 0x0a,
     673,   20,  668,   20, 0x0a,
     700,   20,  668,   20, 0x0a,
     729,   20,  668,   20, 0x0a,
     761,   20,  668,   20, 0x0a,
     797,   20,  668,   20, 0x0a,
     830,   20,  668,   20, 0x0a,
     863,   20,  668,   20, 0x0a,
     892,   20,  668,   20, 0x0a,
     922,   20,  668,   20, 0x0a,
     956,   20,  668,   20, 0x0a,
     991,   20,  668,   20, 0x0a,
    1027,   20,  668,   20, 0x0a,
    1064,   20,  668,   20, 0x0a,
    1104,   20,  668,   20, 0x0a,
    1146,   20,  668,   20, 0x0a,
    1180,   20,  668,   20, 0x0a,
    1214,   20,  668,   20, 0x0a,
    1251,   20,  668,   20, 0x0a,
    1288,   20,  668,   20, 0x0a,
    1325,   20,  668,   20, 0x0a,
    1366,   20,  668,   20, 0x0a,
    1403,   20,  668,   20, 0x0a,
    1444,   20,  668,   20, 0x0a,
    1485,   20,  668,   20, 0x0a,
    1526,   20,  668,   20, 0x0a,
    1565,   20,  668,   20, 0x0a,
    1604,   20,  668,   20, 0x0a,
    1642,   20,  668,   20, 0x0a,
    1680,   20,  668,   20, 0x0a,
    1717,   20,  668,   20, 0x0a,
    1755,   20,  668,   20, 0x0a,
    1792,   20,  668,   20, 0x0a,
    1829,   20,  668,   20, 0x0a,
    1868,   20,  668,   20, 0x0a,
    1907,   20,  668,   20, 0x0a,
    1940,   20,  668,   20, 0x0a,
    1973,   20,  668,   20, 0x0a,
    2008,   20,  668,   20, 0x0a,
    2042,   20,  668,   20, 0x0a,
    2081,   20,  668,   20, 0x0a,

 // methods: signature, parameters, type, tag, flags
    2122,   20, 2114,   20, 0x02,
    2140,   20, 2114,   20, 0x02,
    2158,   20, 2114,   20, 0x02,
    2176,   20,  668,   20, 0x02,
    2195,   20, 2114,   20, 0x02,
    2219,   20,   20,   20, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_CWizDocumentWebView[] = {
    "CWizDocumentWebView\0\0statusChanged()\0"
    "focusIn()\0focusOut()\0pos\0"
    "requestShowContextMenu(QPoint)\0act\0"
    "onActionTriggered(QWebPage::WebAction)\0"
    "onEditorPopulateJavaScriptWindowObject()\0"
    "ok\0onEditorLoadFinished(bool)\0url\0"
    "onEditorLinkClicked(QUrl)\0"
    "onEditorContentChanged()\0"
    "onEditorSelectionChanged()\0"
    "onTimerAutoSaveTimout()\0strGUID,strFileName\0"
    "onDocumentReady(QString,QString)\0"
    "strGUID,ok\0onDocumentSaved(QString,bool)\0"
    "on_editorCommandExecuteLinkInsert_accepted()\0"
    "on_editorCommandExecuteTableInsert_accepted()\0"
    "editorCommandExecuteBackColor()\0color\0"
    "on_editorCommandExecuteBackColor_accepted(QColor)\0"
    "editorCommandExecuteForeColor()\0"
    "on_editorCommandExecuteForeColor_accepted(QColor)\0"
    "bool\0editorCommandExecuteBold()\0"
    "editorCommandExecuteItalic()\0"
    "editorCommandExecuteUnderLine()\0"
    "editorCommandExecuteStrikeThrough()\0"
    "editorCommandExecuteLinkInsert()\0"
    "editorCommandExecuteLinkRemove()\0"
    "editorCommandExecuteIndent()\0"
    "editorCommandExecuteOutdent()\0"
    "editorCommandExecuteJustifyLeft()\0"
    "editorCommandExecuteJustifyRight()\0"
    "editorCommandExecuteJustifyCenter()\0"
    "editorCommandExecuteJustifyJustify()\0"
    "editorCommandExecuteInsertOrderedList()\0"
    "editorCommandExecuteInsertUnorderedList()\0"
    "editorCommandExecuteTableInsert()\0"
    "editorCommandExecuteTableDelete()\0"
    "editorCommandExecuteTableDeleteRow()\0"
    "editorCommandExecuteTableDeleteCol()\0"
    "editorCommandExecuteTableInsertRow()\0"
    "editorCommandExecuteTableInsertRowNext()\0"
    "editorCommandExecuteTableInsertCol()\0"
    "editorCommandExecuteTableInsertColNext()\0"
    "editorCommandExecuteTableInsertCaption()\0"
    "editorCommandExecuteTableDeleteCaption()\0"
    "editorCommandExecuteTableInsertTitle()\0"
    "editorCommandExecuteTableDeleteTitle()\0"
    "editorCommandExecuteTableMergeCells()\0"
    "editorCommandExecuteTalbeMergeRight()\0"
    "editorCommandExecuteTableMergeDown()\0"
    "editorCommandExecuteTableSplitCells()\0"
    "editorCommandExecuteTableSplitRows()\0"
    "editorCommandExecuteTableSplitCols()\0"
    "editorCommandExecuteTableAverageRows()\0"
    "editorCommandExecuteTableAverageCols()\0"
    "editorCommandExecuteInsertDate()\0"
    "editorCommandExecuteInsertTime()\0"
    "editorCommandExecuteRemoveFormat()\0"
    "editorCommandExecuteFormatMatch()\0"
    "editorCommandExecuteInsertHorizontal()\0"
    "editorCommandExecuteViewSource()\0"
    "QString\0currentNoteGUID()\0currentNoteHtml()\0"
    "currentNoteHead()\0currentIsEditing()\0"
    "getDefaultCssFilePath()\0onNoteLoadFinished()\0"
};

void CWizDocumentWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizDocumentWebView *_t = static_cast<CWizDocumentWebView *>(_o);
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->focusIn(); break;
        case 2: _t->focusOut(); break;
        case 3: _t->requestShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->onActionTriggered((*reinterpret_cast< QWebPage::WebAction(*)>(_a[1]))); break;
        case 5: _t->onEditorPopulateJavaScriptWindowObject(); break;
        case 6: _t->onEditorLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onEditorLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->onEditorContentChanged(); break;
        case 9: _t->onEditorSelectionChanged(); break;
        case 10: _t->onTimerAutoSaveTimout(); break;
        case 11: _t->onDocumentReady((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->onDocumentSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->on_editorCommandExecuteLinkInsert_accepted(); break;
        case 14: _t->on_editorCommandExecuteTableInsert_accepted(); break;
        case 15: _t->editorCommandExecuteBackColor(); break;
        case 16: _t->on_editorCommandExecuteBackColor_accepted((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 17: _t->editorCommandExecuteForeColor(); break;
        case 18: _t->on_editorCommandExecuteForeColor_accepted((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 19: { bool _r = _t->editorCommandExecuteBold();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->editorCommandExecuteItalic();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->editorCommandExecuteUnderLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->editorCommandExecuteStrikeThrough();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->editorCommandExecuteLinkInsert();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->editorCommandExecuteLinkRemove();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->editorCommandExecuteIndent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->editorCommandExecuteOutdent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->editorCommandExecuteJustifyLeft();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->editorCommandExecuteJustifyRight();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->editorCommandExecuteJustifyCenter();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->editorCommandExecuteJustifyJustify();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->editorCommandExecuteInsertOrderedList();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->editorCommandExecuteInsertUnorderedList();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->editorCommandExecuteTableInsert();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->editorCommandExecuteTableDelete();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->editorCommandExecuteTableDeleteRow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->editorCommandExecuteTableDeleteCol();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->editorCommandExecuteTableInsertRow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->editorCommandExecuteTableInsertRowNext();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->editorCommandExecuteTableInsertCol();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->editorCommandExecuteTableInsertColNext();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->editorCommandExecuteTableInsertCaption();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->editorCommandExecuteTableDeleteCaption();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->editorCommandExecuteTableInsertTitle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->editorCommandExecuteTableDeleteTitle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->editorCommandExecuteTableMergeCells();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->editorCommandExecuteTalbeMergeRight();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->editorCommandExecuteTableMergeDown();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->editorCommandExecuteTableSplitCells();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->editorCommandExecuteTableSplitRows();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->editorCommandExecuteTableSplitCols();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { bool _r = _t->editorCommandExecuteTableAverageRows();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->editorCommandExecuteTableAverageCols();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: { bool _r = _t->editorCommandExecuteInsertDate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 54: { bool _r = _t->editorCommandExecuteInsertTime();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: { bool _r = _t->editorCommandExecuteRemoveFormat();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { bool _r = _t->editorCommandExecuteFormatMatch();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: { bool _r = _t->editorCommandExecuteInsertHorizontal();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 58: { bool _r = _t->editorCommandExecuteViewSource();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 59: { QString _r = _t->currentNoteGUID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 60: { QString _r = _t->currentNoteHtml();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 61: { QString _r = _t->currentNoteHead();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 62: { bool _r = _t->currentIsEditing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 63: { QString _r = _t->getDefaultCssFilePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 64: _t->onNoteLoadFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizDocumentWebView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizDocumentWebView::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_CWizDocumentWebView,
      qt_meta_data_CWizDocumentWebView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizDocumentWebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizDocumentWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizDocumentWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizDocumentWebView))
        return static_cast<void*>(const_cast< CWizDocumentWebView*>(this));
    return QWebView::qt_metacast(_clname);
}

int CWizDocumentWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    }
    return _id;
}

// SIGNAL 0
void CWizDocumentWebView::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CWizDocumentWebView::focusIn()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CWizDocumentWebView::focusOut()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CWizDocumentWebView::requestShowContextMenu(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
