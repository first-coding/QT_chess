/****************************************************************************
** Meta object code from reading C++ file 'NetGame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/chess/Chess/NetGame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetGame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NetGame_t {
    QByteArrayData data[4];
    char stringdata[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetGame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetGame_t qt_meta_stringdata_NetGame = {
    {
QT_MOC_LITERAL(0, 0, 7), // "NetGame"
QT_MOC_LITERAL(1, 8, 17), // "slotNewConnection"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14) // "slotDataArrive"

    },
    "NetGame\0slotNewConnection\0\0slotDataArrive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetGame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NetGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetGame *_t = static_cast<NetGame *>(_o);
        switch (_id) {
        case 0: _t->slotNewConnection(); break;
        case 1: _t->slotDataArrive(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NetGame::staticMetaObject = {
    { &Board::staticMetaObject, qt_meta_stringdata_NetGame.data,
      qt_meta_data_NetGame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NetGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetGame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NetGame.stringdata))
        return static_cast<void*>(const_cast< NetGame*>(this));
    return Board::qt_metacast(_clname);
}

int NetGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Board::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
