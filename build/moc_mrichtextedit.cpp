/****************************************************************************
** Meta object code from reading C++ file 'mrichtextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/plugins/mrichtexteditor/mrichtextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mrichtextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MRichTextEdit_t {
    QByteArrayData data[27];
    char stringdata[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MRichTextEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MRichTextEdit_t qt_meta_stringdata_MRichTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 7),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 4),
QT_MOC_LITERAL(4, 28, 5),
QT_MOC_LITERAL(5, 34, 12),
QT_MOC_LITERAL(6, 47, 7),
QT_MOC_LITERAL(7, 55, 8),
QT_MOC_LITERAL(8, 64, 13),
QT_MOC_LITERAL(9, 78, 13),
QT_MOC_LITERAL(10, 92, 10),
QT_MOC_LITERAL(11, 103, 8),
QT_MOC_LITERAL(12, 112, 1),
QT_MOC_LITERAL(13, 114, 8),
QT_MOC_LITERAL(14, 123, 7),
QT_MOC_LITERAL(15, 131, 9),
QT_MOC_LITERAL(16, 141, 5),
QT_MOC_LITERAL(17, 147, 11),
QT_MOC_LITERAL(18, 159, 10),
QT_MOC_LITERAL(19, 170, 11),
QT_MOC_LITERAL(20, 182, 28),
QT_MOC_LITERAL(21, 211, 15),
QT_MOC_LITERAL(22, 227, 6),
QT_MOC_LITERAL(23, 234, 25),
QT_MOC_LITERAL(24, 260, 24),
QT_MOC_LITERAL(25, 285, 19),
QT_MOC_LITERAL(26, 305, 19)
    },
    "MRichTextEdit\0setText\0\0text\0clear\0"
    "setPlainText\0setHtml\0textBold\0"
    "textUnderline\0textStrikeout\0textItalic\0"
    "textSize\0p\0textLink\0checked\0textStyle\0"
    "index\0textBgColor\0listBullet\0listOrdered\0"
    "slotCurrentCharFormatChanged\0"
    "QTextCharFormat\0format\0slotCursorPositionChanged\0"
    "slotClipboardDataChanged\0increaseIndentation\0"
    "decreaseIndentation\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MRichTextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x0a,
       4,    0,  112,    2, 0x0a,
       5,    1,  113,    2, 0x09,
       6,    1,  116,    2, 0x09,
       7,    0,  119,    2, 0x09,
       8,    0,  120,    2, 0x09,
       9,    0,  121,    2, 0x09,
      10,    0,  122,    2, 0x09,
      11,    1,  123,    2, 0x09,
      13,    1,  126,    2, 0x09,
      15,    1,  129,    2, 0x09,
      17,    0,  132,    2, 0x09,
      18,    1,  133,    2, 0x09,
      19,    1,  136,    2, 0x09,
      20,    1,  139,    2, 0x09,
      23,    0,  142,    2, 0x09,
      24,    0,  143,    2, 0x09,
      25,    0,  144,    2, 0x09,
      26,    0,  145,    2, 0x09,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MRichTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MRichTextEdit *_t = static_cast<MRichTextEdit *>(_o);
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        case 2: _t->setPlainText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->textBold(); break;
        case 5: _t->textUnderline(); break;
        case 6: _t->textStrikeout(); break;
        case 7: _t->textItalic(); break;
        case 8: _t->textSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->textLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->textStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->textBgColor(); break;
        case 12: _t->listBullet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->listOrdered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->slotCurrentCharFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 15: _t->slotCursorPositionChanged(); break;
        case 16: _t->slotClipboardDataChanged(); break;
        case 17: _t->increaseIndentation(); break;
        case 18: _t->decreaseIndentation(); break;
        default: ;
        }
    }
}

const QMetaObject MRichTextEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MRichTextEdit.data,
      qt_meta_data_MRichTextEdit,  qt_static_metacall, 0, 0}
};


const QMetaObject *MRichTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MRichTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MRichTextEdit.stringdata))
        return static_cast<void*>(const_cast< MRichTextEdit*>(this));
    if (!strcmp(_clname, "Ui::MRichTextEdit"))
        return static_cast< Ui::MRichTextEdit*>(const_cast< MRichTextEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int MRichTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
