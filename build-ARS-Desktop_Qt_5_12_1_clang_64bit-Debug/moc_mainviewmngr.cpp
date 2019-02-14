/****************************************************************************
** Meta object code from reading C++ file 'mainviewmngr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ARS/ViewManager/mainviewmngr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainviewmngr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainViewMngr_t {
    QByteArrayData data[19];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainViewMngr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainViewMngr_t qt_meta_stringdata_MainViewMngr = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MainViewMngr"
QT_MOC_LITERAL(1, 13, 14), // "powerOnChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "value"
QT_MOC_LITERAL(4, 35, 15), // "distanceChanged"
QT_MOC_LITERAL(5, 51, 15), // "velocityChanged"
QT_MOC_LITERAL(6, 67, 7), // "appName"
QT_MOC_LITERAL(7, 75, 10), // "appNameVer"
QT_MOC_LITERAL(8, 86, 7), // "powerOn"
QT_MOC_LITERAL(9, 94, 8), // "distance"
QT_MOC_LITERAL(10, 103, 8), // "velocity"
QT_MOC_LITERAL(11, 112, 15), // "distancePreset1"
QT_MOC_LITERAL(12, 128, 15), // "distancePreset2"
QT_MOC_LITERAL(13, 144, 15), // "distancePreset3"
QT_MOC_LITERAL(14, 160, 15), // "distancePreset4"
QT_MOC_LITERAL(15, 176, 15), // "velocityPreset1"
QT_MOC_LITERAL(16, 192, 15), // "velocityPreset2"
QT_MOC_LITERAL(17, 208, 15), // "velocityPreset3"
QT_MOC_LITERAL(18, 224, 15) // "velocityPreset4"

    },
    "MainViewMngr\0powerOnChanged\0\0value\0"
    "distanceChanged\0velocityChanged\0appName\0"
    "appNameVer\0powerOn\0distance\0velocity\0"
    "distancePreset1\0distancePreset2\0"
    "distancePreset3\0distancePreset4\0"
    "velocityPreset1\0velocityPreset2\0"
    "velocityPreset3\0velocityPreset4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainViewMngr[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      13,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::Bool, 0x00495003,
       9, QMetaType::Double, 0x00495003,
      10, QMetaType::Double, 0x00495003,
      11, QMetaType::Double, 0x00095401,
      12, QMetaType::Double, 0x00095401,
      13, QMetaType::Double, 0x00095401,
      14, QMetaType::Double, 0x00095401,
      15, QMetaType::Double, 0x00095401,
      16, QMetaType::Double, 0x00095401,
      17, QMetaType::Double, 0x00095401,
      18, QMetaType::Double, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void MainViewMngr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainViewMngr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->powerOnChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->distanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->velocityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainViewMngr::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewMngr::powerOnChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainViewMngr::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewMngr::distanceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainViewMngr::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewMngr::velocityChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainViewMngr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->appName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->appNameVer(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->powerOn(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->distance(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->velocity(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->distancePreset1(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->distancePreset2(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->distancePreset3(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->distancePreset4(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->velocityPreset1(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->velocityPreset2(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->velocityPreset3(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->velocityPreset4(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MainViewMngr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->powerOn(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->distance(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->velocity(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MainViewMngr::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MainViewMngr.data,
    qt_meta_data_MainViewMngr,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainViewMngr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainViewMngr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainViewMngr.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainViewMngr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MainViewMngr::powerOnChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainViewMngr::distanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainViewMngr::velocityChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
