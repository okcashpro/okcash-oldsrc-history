/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActiveLabel_t {
    QByteArrayData data[3];
    char stringdata[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ActiveLabel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ActiveLabel_t qt_meta_stringdata_ActiveLabel = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 7),
QT_MOC_LITERAL(2, 20, 0)
    },
    "ActiveLabel\0clicked\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActiveLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ActiveLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActiveLabel *_t = static_cast<ActiveLabel *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActiveLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActiveLabel::clicked)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ActiveLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ActiveLabel.data,
      qt_meta_data_ActiveLabel,  qt_static_metacall, 0, 0}
};


const QMetaObject *ActiveLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActiveLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ActiveLabel.stringdata))
        return static_cast<void*>(const_cast< ActiveLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int ActiveLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ActiveLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_BitcoinGUI_t {
    QByteArrayData data[51];
    char stringdata[686];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BitcoinGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BitcoinGUI_t qt_meta_stringdata_BitcoinGUI = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 17),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 5),
QT_MOC_LITERAL(4, 36, 12),
QT_MOC_LITERAL(5, 49, 12),
QT_MOC_LITERAL(6, 62, 19),
QT_MOC_LITERAL(7, 82, 6),
QT_MOC_LITERAL(8, 89, 5),
QT_MOC_LITERAL(9, 95, 5),
QT_MOC_LITERAL(10, 101, 7),
QT_MOC_LITERAL(11, 109, 5),
QT_MOC_LITERAL(12, 115, 6),
QT_MOC_LITERAL(13, 122, 12),
QT_MOC_LITERAL(14, 135, 5),
QT_MOC_LITERAL(15, 141, 6),
QT_MOC_LITERAL(16, 148, 9),
QT_MOC_LITERAL(17, 158, 6),
QT_MOC_LITERAL(18, 165, 22),
QT_MOC_LITERAL(19, 188, 15),
QT_MOC_LITERAL(20, 204, 11),
QT_MOC_LITERAL(21, 216, 27),
QT_MOC_LITERAL(22, 244, 16),
QT_MOC_LITERAL(23, 261, 15),
QT_MOC_LITERAL(24, 277, 19),
QT_MOC_LITERAL(25, 297, 20),
QT_MOC_LITERAL(26, 318, 17),
QT_MOC_LITERAL(27, 336, 15),
QT_MOC_LITERAL(28, 352, 18),
QT_MOC_LITERAL(29, 371, 4),
QT_MOC_LITERAL(30, 376, 20),
QT_MOC_LITERAL(31, 397, 14),
QT_MOC_LITERAL(32, 412, 12),
QT_MOC_LITERAL(33, 425, 17),
QT_MOC_LITERAL(34, 443, 33),
QT_MOC_LITERAL(35, 477, 6),
QT_MOC_LITERAL(36, 484, 19),
QT_MOC_LITERAL(37, 504, 6),
QT_MOC_LITERAL(38, 511, 5),
QT_MOC_LITERAL(39, 517, 3),
QT_MOC_LITERAL(40, 521, 15),
QT_MOC_LITERAL(41, 537, 13),
QT_MOC_LITERAL(42, 551, 12),
QT_MOC_LITERAL(43, 564, 16),
QT_MOC_LITERAL(44, 581, 12),
QT_MOC_LITERAL(45, 594, 10),
QT_MOC_LITERAL(46, 605, 21),
QT_MOC_LITERAL(47, 627, 13),
QT_MOC_LITERAL(48, 641, 12),
QT_MOC_LITERAL(49, 654, 12),
QT_MOC_LITERAL(50, 667, 17)
    },
    "BitcoinGUI\0setNumConnections\0\0count\0"
    "setNumBlocks\0nTotalBlocks\0setEncryptionStatus\0"
    "status\0error\0title\0message\0modal\0"
    "askFee\0nFeeRequired\0bool*\0payFee\0"
    "handleURI\0strURI\0mainToolbarOrientation\0"
    "Qt::Orientation\0orientation\0"
    "secondaryToolbarOrientation\0"
    "gotoOverviewPage\0gotoHistoryPage\0"
    "gotoAddressBookPage\0gotoReceiveCoinsPage\0"
    "gotoSendCoinsPage\0gotoMessagePage\0"
    "gotoSignMessageTab\0addr\0gotoVerifyMessageTab\0"
    "optionsClicked\0aboutClicked\0"
    "trayIconActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0incomingTransaction\0parent\0"
    "start\0end\0incomingMessage\0encryptWallet\0"
    "backupWallet\0changePassphrase\0"
    "unlockWallet\0lockWallet\0showNormalIfMinimized\0"
    "fToggleHidden\0toggleHidden\0updateWeight\0"
    "updateStakingIcon\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  179,    2, 0x0a,
       4,    2,  182,    2, 0x0a,
       6,    1,  187,    2, 0x0a,
       8,    3,  190,    2, 0x0a,
      12,    2,  197,    2, 0x0a,
      16,    1,  202,    2, 0x0a,
      18,    1,  205,    2, 0x0a,
      21,    1,  208,    2, 0x0a,
      22,    0,  211,    2, 0x08,
      23,    0,  212,    2, 0x08,
      24,    0,  213,    2, 0x08,
      25,    0,  214,    2, 0x08,
      26,    0,  215,    2, 0x08,
      27,    0,  216,    2, 0x08,
      28,    1,  217,    2, 0x08,
      28,    0,  220,    2, 0x28,
      30,    1,  221,    2, 0x08,
      30,    0,  224,    2, 0x28,
      31,    0,  225,    2, 0x08,
      32,    0,  226,    2, 0x08,
      33,    1,  227,    2, 0x08,
      36,    3,  230,    2, 0x08,
      40,    3,  237,    2, 0x08,
      41,    1,  244,    2, 0x08,
      42,    0,  247,    2, 0x08,
      43,    0,  248,    2, 0x08,
      44,    0,  249,    2, 0x08,
      45,    0,  250,    2, 0x08,
      46,    1,  251,    2, 0x08,
      46,    0,  254,    2, 0x28,
      48,    0,  255,    2, 0x08,
      49,    0,  256,    2, 0x08,
      50,    0,  257,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    9,   10,   11,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   37,   38,   39,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   37,   38,   39,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 5: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->mainToolbarOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 7: _t->secondaryToolbarOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 8: _t->gotoOverviewPage(); break;
        case 9: _t->gotoHistoryPage(); break;
        case 10: _t->gotoAddressBookPage(); break;
        case 11: _t->gotoReceiveCoinsPage(); break;
        case 12: _t->gotoSendCoinsPage(); break;
        case 13: _t->gotoMessagePage(); break;
        case 14: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->gotoSignMessageTab(); break;
        case 16: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->gotoVerifyMessageTab(); break;
        case 18: _t->optionsClicked(); break;
        case 19: _t->aboutClicked(); break;
        case 20: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 21: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->incomingMessage((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->backupWallet(); break;
        case 25: _t->changePassphrase(); break;
        case 26: _t->unlockWallet(); break;
        case 27: _t->lockWallet(); break;
        case 28: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->showNormalIfMinimized(); break;
        case 30: _t->toggleHidden(); break;
        case 31: _t->updateWeight(); break;
        case 32: _t->updateStakingIcon(); break;
        default: ;
        }
    }
}

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI.data,
      qt_meta_data_BitcoinGUI,  qt_static_metacall, 0, 0}
};


const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI.stringdata))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
