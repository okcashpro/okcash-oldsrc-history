/****************************************************************************
** Meta object code from reading C++ file 'messagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/messagemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MessageModel_t {
    QByteArrayData data[13];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MessageModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MessageModel_t qt_meta_stringdata_MessageModel = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 5),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 5),
QT_MOC_LITERAL(4, 26, 7),
QT_MOC_LITERAL(5, 34, 5),
QT_MOC_LITERAL(6, 40, 10),
QT_MOC_LITERAL(7, 51, 12),
QT_MOC_LITERAL(8, 64, 4),
QT_MOC_LITERAL(9, 69, 16),
QT_MOC_LITERAL(10, 86, 14),
QT_MOC_LITERAL(11, 101, 19),
QT_MOC_LITERAL(12, 121, 6)
    },
    "MessageModel\0error\0\0title\0message\0"
    "modal\0newMessage\0SecMsgStored\0smsg\0"
    "newOutboxMessage\0walletUnlocked\0"
    "setEncryptionStatus\0status\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessageModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   46,    2, 0x0a,
       9,    1,   49,    2, 0x0a,
      10,    0,   52,    2, 0x0a,
      11,    1,   53,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void MessageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MessageModel *_t = static_cast<MessageModel *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->newMessage((*reinterpret_cast< const SecMsgStored(*)>(_a[1]))); break;
        case 2: _t->newOutboxMessage((*reinterpret_cast< const SecMsgStored(*)>(_a[1]))); break;
        case 3: _t->walletUnlocked(); break;
        case 4: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MessageModel::*_t)(const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MessageModel::error)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MessageModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_MessageModel.data,
      qt_meta_data_MessageModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *MessageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageModel.stringdata))
        return static_cast<void*>(const_cast< MessageModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int MessageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MessageModel::error(const QString & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
