/****************************************************************************
** Meta object code from reading C++ file 'messagelistview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "messagelistview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagelistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WizService__Internal__MessageListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   39,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   63,   38,   38, 0x08,
     136,   38,   38,   38, 0x08,
     152,   38,   38,   38, 0x08,
     178,  168,   38,   38, 0x08,
     202,   38,   38,   38, 0x08,
     232,   38,   38,   38, 0x08,
     263,  259,   38,   38, 0x08,
     312,  298,   38,   38, 0x08,
     363,  259,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WizService__Internal__MessageListView[] = {
    "WizService::Internal::MessageListView\0"
    "\0nCount\0sizeChanged(int)\0current,previous\0"
    "onCurrentItemChanged(QListWidgetItem*,QListWidgetItem*)\0"
    "onReadTimeout()\0onSyncTimeout()\0"
    "strUserId\0onAvatarLoaded(QString)\0"
    "on_action_message_mark_read()\0"
    "on_action_message_delete()\0msg\0"
    "on_message_created(WIZMESSAGEDATA)\0"
    "oldMsg,newMsg\0"
    "on_message_modified(WIZMESSAGEDATA,WIZMESSAGEDATA)\0"
    "on_message_deleted(WIZMESSAGEDATA)\0"
};

void WizService::Internal::MessageListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageListView *_t = static_cast<MessageListView *>(_o);
        switch (_id) {
        case 0: _t->sizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onCurrentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->onReadTimeout(); break;
        case 3: _t->onSyncTimeout(); break;
        case 4: _t->onAvatarLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_action_message_mark_read(); break;
        case 6: _t->on_action_message_delete(); break;
        case 7: _t->on_message_created((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1]))); break;
        case 8: _t->on_message_modified((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1])),(*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[2]))); break;
        case 9: _t->on_message_deleted((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WizService::Internal::MessageListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WizService::Internal::MessageListView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_WizService__Internal__MessageListView,
      qt_meta_data_WizService__Internal__MessageListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WizService::Internal::MessageListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WizService::Internal::MessageListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WizService::Internal::MessageListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WizService__Internal__MessageListView))
        return static_cast<void*>(const_cast< MessageListView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int WizService::Internal::MessageListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WizService::Internal::MessageListView::sizeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
