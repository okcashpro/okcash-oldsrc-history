/****************************************************************************
** Meta object code from reading C++ file 'askpassphrasedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/askpassphrasedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'askpassphrasedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AskPassphraseDialog_t {
    QByteArrayData data[7];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AskPassphraseDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AskPassphraseDialog_t qt_meta_stringdata_AskPassphraseDialog = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 11),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 5),
QT_MOC_LITERAL(4, 39, 7),
QT_MOC_LITERAL(5, 47, 11),
QT_MOC_LITERAL(6, 59, 21)
    },
    "AskPassphraseDialog\0textChanged\0\0event\0"
    "QEvent*\0eventFilter\0secureClearPassFields\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AskPassphraseDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08,
       3,    1,   35,    2, 0x08,
       5,    2,   38,    2, 0x08,
       6,    0,   43,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 4,    3,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 4,    2,    3,
    QMetaType::Void,

       0        // eod
};

void AskPassphraseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AskPassphraseDialog *_t = static_cast<AskPassphraseDialog *>(_o);
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: { bool _r = _t->event((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->secureClearPassFields(); break;
        default: ;
        }
    }
}

const QMetaObject AskPassphraseDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AskPassphraseDialog.data,
      qt_meta_data_AskPassphraseDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *AskPassphraseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AskPassphraseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AskPassphraseDialog.stringdata))
        return static_cast<void*>(const_cast< AskPassphraseDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AskPassphraseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
