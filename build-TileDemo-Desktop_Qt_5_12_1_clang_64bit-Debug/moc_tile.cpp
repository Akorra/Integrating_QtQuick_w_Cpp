/****************************************************************************
** Meta object code from reading C++ file 'tile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TileDemo/tile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tile_t {
    QByteArrayData data[14];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tile_t qt_meta_stringdata_Tile = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Tile"
QT_MOC_LITERAL(1, 5, 13), // "letterChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "value"
QT_MOC_LITERAL(4, 26, 17), // "pointValueChanged"
QT_MOC_LITERAL(5, 44, 12), // "colorChanged"
QT_MOC_LITERAL(6, 57, 15), // "materialChanged"
QT_MOC_LITERAL(7, 73, 8), // "TileType"
QT_MOC_LITERAL(8, 82, 6), // "letter"
QT_MOC_LITERAL(9, 89, 10), // "pointValue"
QT_MOC_LITERAL(10, 100, 5), // "color"
QT_MOC_LITERAL(11, 106, 8), // "material"
QT_MOC_LITERAL(12, 115, 4), // "Wood"
QT_MOC_LITERAL(13, 120, 5) // "Brick"

    },
    "Tile\0letterChanged\0\0value\0pointValueChanged\0"
    "colorChanged\0materialChanged\0TileType\0"
    "letter\0pointValue\0color\0material\0Wood\0"
    "Brick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   46, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, 0x80000000 | 7,    3,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495003,
       9, QMetaType::Int, 0x00495003,
      10, QMetaType::QColor, 0x00495003,
      11, 0x80000000 | 7, 0x0049500b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, alias, flags, count, data
       7,    7, 0x2,    2,   67,

 // enum data: key, value
      12, uint(Tile::TileType::Wood),
      13, uint(Tile::TileType::Brick),

       0        // eod
};

void Tile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->letterChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->pointValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->materialChanged((*reinterpret_cast< TileType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tile::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tile::letterChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Tile::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tile::pointValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Tile::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tile::colorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Tile::*)(TileType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tile::materialChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Tile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->letter(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->pointValue(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 3: *reinterpret_cast< TileType*>(_v) = _t->material(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Tile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->letter(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->pointValue(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->color(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->material(*reinterpret_cast< TileType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Tile::staticMetaObject = { {
    &QQuickPaintedItem::staticMetaObject,
    qt_meta_stringdata_Tile.data,
    qt_meta_data_Tile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tile.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int Tile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Tile::letterChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tile::pointValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tile::colorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tile::materialChanged(TileType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
