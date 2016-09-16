/****************************************************************************
** Meta object code from reading C++ file 'wizattachmentlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizattachmentlistwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizattachmentlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWizAttachmentListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      50,   23,   23,   23, 0x0a,
      79,   23,   23,   23, 0x0a,
     106,   23,   23,   23, 0x0a,
     140,  135,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizAttachmentListView[] = {
    "CWizAttachmentListView\0\0"
    "on_action_addAttachment()\0"
    "on_action_saveAttachmentAs()\0"
    "on_action_openAttachment()\0"
    "on_action_deleteAttachment()\0item\0"
    "on_list_itemDoubleClicked(QListWidgetItem*)\0"
};

void CWizAttachmentListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizAttachmentListView *_t = static_cast<CWizAttachmentListView *>(_o);
        switch (_id) {
        case 0: _t->on_action_addAttachment(); break;
        case 1: _t->on_action_saveAttachmentAs(); break;
        case 2: _t->on_action_openAttachment(); break;
        case 3: _t->on_action_deleteAttachment(); break;
        case 4: _t->on_list_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWizAttachmentListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizAttachmentListView::staticMetaObject = {
    { &CWizMultiLineListWidget::staticMetaObject, qt_meta_stringdata_CWizAttachmentListView,
      qt_meta_data_CWizAttachmentListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizAttachmentListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizAttachmentListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizAttachmentListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizAttachmentListView))
        return static_cast<void*>(const_cast< CWizAttachmentListView*>(this));
    return CWizMultiLineListWidget::qt_metacast(_clname);
}

int CWizAttachmentListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWizMultiLineListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_CWizAttachmentListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CWizAttachmentListWidget[] = {
    "CWizAttachmentListWidget\0\0"
    "on_addAttachment_clicked()\0"
};

void CWizAttachmentListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWizAttachmentListWidget *_t = static_cast<CWizAttachmentListWidget *>(_o);
        switch (_id) {
        case 0: _t->on_addAttachment_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CWizAttachmentListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWizAttachmentListWidget::staticMetaObject = {
    { &CWizPopupWidget::staticMetaObject, qt_meta_stringdata_CWizAttachmentListWidget,
      qt_meta_data_CWizAttachmentListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWizAttachmentListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWizAttachmentListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWizAttachmentListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWizAttachmentListWidget))
        return static_cast<void*>(const_cast< CWizAttachmentListWidget*>(this));
    return CWizPopupWidget::qt_metacast(_clname);
}

int CWizAttachmentListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CWizPopupWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
