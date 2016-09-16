/****************************************************************************
** Meta object code from reading C++ file 'wizEditorToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wizEditorToolBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizEditorToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Core__Internal__EditorToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x09,
      60,   30,   30,   30, 0x09,
      86,   30,   30,   30, 0x09,
     113,   30,   30,   30, 0x09,
     151,  141,   30,   30, 0x09,
     200,  192,   30,   30, 0x09,
     239,   30,   30,   30, 0x09,
     267,   30,   30,   30, 0x09,
     293,   30,   30,   30, 0x09,
     319,   30,   30,   30, 0x09,
     340,   30,   30,   30, 0x09,
     363,   30,   30,   30, 0x09,
     389,   30,   30,   30, 0x09,
     417,   30,   30,   30, 0x09,
     447,   30,   30,   30, 0x09,
     476,   30,   30,   30, 0x09,
     506,   30,   30,   30, 0x09,
     534,   30,   30,   30, 0x09,
     556,   30,   30,   30, 0x09,
     587,  583,   30,   30, 0x09,
     630,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Core__Internal__EditorToolBar[] = {
    "Core::Internal::EditorToolBar\0\0"
    "on_editor_google_triggered()\0"
    "on_editor_cut_triggered()\0"
    "on_editor_copy_triggered()\0"
    "on_editor_paste_triggered()\0strFamily\0"
    "on_comboFontFamily_indexChanged(QString)\0"
    "strSize\0on_comboFontSize_indexChanged(QString)\0"
    "on_btnFormatMatch_clicked()\0"
    "on_BtnForeColor_clicked()\0"
    "on_BtnBackColor_clicked()\0"
    "on_btnBold_clicked()\0on_btnItalic_clicked()\0"
    "on_btnUnderLine_clicked()\0"
    "on_btnJustifyLeft_clicked()\0"
    "on_btnJustifyCenter_clicked()\0"
    "on_btnJustifyRight_clicked()\0"
    "on_btnUnorderedList_clicked()\0"
    "on_btnOrderedList_clicked()\0"
    "on_btnTable_clicked()\0on_btnHorizontal_clicked()\0"
    "pos\0on_delegate_requestShowContextMenu(QPoint)\0"
    "on_delegate_selectionChanged()\0"
};

void Core::Internal::EditorToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditorToolBar *_t = static_cast<EditorToolBar *>(_o);
        switch (_id) {
        case 0: _t->on_editor_google_triggered(); break;
        case 1: _t->on_editor_cut_triggered(); break;
        case 2: _t->on_editor_copy_triggered(); break;
        case 3: _t->on_editor_paste_triggered(); break;
        case 4: _t->on_comboFontFamily_indexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_comboFontSize_indexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_btnFormatMatch_clicked(); break;
        case 7: _t->on_BtnForeColor_clicked(); break;
        case 8: _t->on_BtnBackColor_clicked(); break;
        case 9: _t->on_btnBold_clicked(); break;
        case 10: _t->on_btnItalic_clicked(); break;
        case 11: _t->on_btnUnderLine_clicked(); break;
        case 12: _t->on_btnJustifyLeft_clicked(); break;
        case 13: _t->on_btnJustifyCenter_clicked(); break;
        case 14: _t->on_btnJustifyRight_clicked(); break;
        case 15: _t->on_btnUnorderedList_clicked(); break;
        case 16: _t->on_btnOrderedList_clicked(); break;
        case 17: _t->on_btnTable_clicked(); break;
        case 18: _t->on_btnHorizontal_clicked(); break;
        case 19: _t->on_delegate_requestShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 20: _t->on_delegate_selectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Core::Internal::EditorToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::Internal::EditorToolBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Core__Internal__EditorToolBar,
      qt_meta_data_Core__Internal__EditorToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::Internal::EditorToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::Internal::EditorToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::Internal::EditorToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__Internal__EditorToolBar))
        return static_cast<void*>(const_cast< EditorToolBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int Core::Internal::EditorToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
