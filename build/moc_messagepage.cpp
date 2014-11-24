/****************************************************************************
** Meta object code from reading C++ file 'messagepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/messagepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MessagePage_t {
    QByteArrayData data[15];
    char stringdata[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MessagePage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MessagePage_t qt_meta_stringdata_MessagePage = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 13),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 21),
QT_MOC_LITERAL(4, 49, 20),
QT_MOC_LITERAL(5, 70, 32),
QT_MOC_LITERAL(6, 103, 30),
QT_MOC_LITERAL(7, 134, 23),
QT_MOC_LITERAL(8, 158, 21),
QT_MOC_LITERAL(9, 180, 18),
QT_MOC_LITERAL(10, 199, 16),
QT_MOC_LITERAL(11, 216, 20),
QT_MOC_LITERAL(12, 237, 15),
QT_MOC_LITERAL(13, 253, 14),
QT_MOC_LITERAL(14, 268, 5)
    },
    "MessagePage\0exportClicked\0\0"
    "on_sendButton_clicked\0on_newButton_clicked\0"
    "on_copyFromAddressButton_clicked\0"
    "on_copyToAddressButton_clicked\0"
    "on_deleteButton_clicked\0on_backButton_clicked\0"
    "messageTextChanged\0selectionChanged\0"
    "itemSelectionChanged\0incomingMessage\0"
    "contextualMenu\0point\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessagePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a,
       3,    0,   75,    2, 0x08,
       4,    0,   76,    2, 0x08,
       5,    0,   77,    2, 0x08,
       6,    0,   78,    2, 0x08,
       7,    0,   79,    2, 0x08,
       8,    0,   80,    2, 0x08,
       9,    0,   81,    2, 0x08,
      10,    0,   82,    2, 0x08,
      11,    0,   83,    2, 0x08,
      12,    0,   84,    2, 0x08,
      13,    1,   85,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   14,

       0        // eod
};

void MessagePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MessagePage *_t = static_cast<MessagePage *>(_o);
        switch (_id) {
        case 0: _t->exportClicked(); break;
        case 1: _t->on_sendButton_clicked(); break;
        case 2: _t->on_newButton_clicked(); break;
        case 3: _t->on_copyFromAddressButton_clicked(); break;
        case 4: _t->on_copyToAddressButton_clicked(); break;
        case 5: _t->on_deleteButton_clicked(); break;
        case 6: _t->on_backButton_clicked(); break;
        case 7: _t->messageTextChanged(); break;
        case 8: _t->selectionChanged(); break;
        case 9: _t->itemSelectionChanged(); break;
        case 10: _t->incomingMessage(); break;
        case 11: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MessagePage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MessagePage.data,
      qt_meta_data_MessagePage,  qt_static_metacall, 0, 0}
};


const QMetaObject *MessagePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessagePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessagePage.stringdata))
        return static_cast<void*>(const_cast< MessagePage*>(this));
    return QWidget::qt_metacast(_clname);
}

int MessagePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
