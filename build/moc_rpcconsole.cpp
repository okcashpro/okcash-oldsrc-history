/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/rpcconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RPCConsole_t {
    QByteArrayData data[26];
    char stringdata[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RPCConsole_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RPCConsole_t qt_meta_stringdata_RPCConsole = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 12),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 10),
QT_MOC_LITERAL(4, 36, 7),
QT_MOC_LITERAL(5, 44, 25),
QT_MOC_LITERAL(6, 70, 27),
QT_MOC_LITERAL(7, 98, 5),
QT_MOC_LITERAL(8, 104, 33),
QT_MOC_LITERAL(9, 138, 30),
QT_MOC_LITERAL(10, 169, 29),
QT_MOC_LITERAL(11, 199, 5),
QT_MOC_LITERAL(12, 205, 18),
QT_MOC_LITERAL(13, 224, 12),
QT_MOC_LITERAL(14, 237, 13),
QT_MOC_LITERAL(15, 251, 5),
QT_MOC_LITERAL(16, 257, 7),
QT_MOC_LITERAL(17, 265, 8),
QT_MOC_LITERAL(18, 274, 4),
QT_MOC_LITERAL(19, 279, 17),
QT_MOC_LITERAL(20, 297, 5),
QT_MOC_LITERAL(21, 303, 12),
QT_MOC_LITERAL(22, 316, 12),
QT_MOC_LITERAL(23, 329, 13),
QT_MOC_LITERAL(24, 343, 6),
QT_MOC_LITERAL(25, 350, 11)
    },
    "RPCConsole\0stopExecutor\0\0cmdRequest\0"
    "command\0on_lineEdit_returnPressed\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_openDebugLogfileButton_clicked\0"
    "on_showCLOptionsButton_clicked\0"
    "on_sldGraphRange_valueChanged\0value\0"
    "updateTrafficStats\0totalBytesIn\0"
    "totalBytesOut\0clear\0message\0category\0"
    "html\0setNumConnections\0count\0setNumBlocks\0"
    "countOfPeers\0browseHistory\0offset\0"
    "scrollToEnd\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPCConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06,
       3,    1,   90,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   93,    2, 0x08,
       6,    1,   94,    2, 0x08,
       8,    0,   97,    2, 0x08,
       9,    0,   98,    2, 0x08,
      10,    1,   99,    2, 0x08,
      12,    2,  102,    2, 0x08,
      15,    0,  107,    2, 0x0a,
      16,    3,  108,    2, 0x0a,
      16,    2,  115,    2, 0x2a,
      19,    1,  120,    2, 0x0a,
      21,    2,  123,    2, 0x0a,
      23,    1,  128,    2, 0x0a,
      25,    0,  131,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   17,   16,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   17,   16,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,

       0        // eod
};

void RPCConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RPCConsole *_t = static_cast<RPCConsole *>(_o);
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_returnPressed(); break;
        case 3: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_openDebugLogfileButton_clicked(); break;
        case 5: _t->on_showCLOptionsButton_clicked(); break;
        case 6: _t->on_sldGraphRange_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateTrafficStats((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 8: _t->clear(); break;
        case 9: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 10: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->scrollToEnd(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RPCConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::stopExecutor)) {
                *result = 0;
            }
        }
        {
            typedef void (RPCConsole::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::cmdRequest)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject RPCConsole::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RPCConsole.data,
      qt_meta_data_RPCConsole,  qt_static_metacall, 0, 0}
};


const QMetaObject *RPCConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPCConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RPCConsole.stringdata))
        return static_cast<void*>(const_cast< RPCConsole*>(this));
    return QDialog::qt_metacast(_clname);
}

int RPCConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void RPCConsole::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RPCConsole::cmdRequest(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
