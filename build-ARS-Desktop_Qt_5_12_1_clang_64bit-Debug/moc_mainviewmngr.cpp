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
    QByteArrayData data[32];
    char stringdata0[537];
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
QT_MOC_LITERAL(6, 67, 26), // "feedbackAreaVisibleChanged"
QT_MOC_LITERAL(7, 94, 22), // "feedbackMessageChanged"
QT_MOC_LITERAL(8, 117, 30), // "feedbackOkButtonVisibleChanged"
QT_MOC_LITERAL(9, 148, 23), // "feedbackProgressChanged"
QT_MOC_LITERAL(10, 172, 31), // "instrumentControlEnabledChanged"
QT_MOC_LITERAL(11, 204, 22), // "onStatusMessageChanged"
QT_MOC_LITERAL(12, 227, 3), // "msg"
QT_MOC_LITERAL(13, 231, 30), // "onInstrumentInitializationDone"
QT_MOC_LITERAL(14, 262, 7), // "appName"
QT_MOC_LITERAL(15, 270, 10), // "appNameVer"
QT_MOC_LITERAL(16, 281, 7), // "powerOn"
QT_MOC_LITERAL(17, 289, 8), // "distance"
QT_MOC_LITERAL(18, 298, 8), // "velocity"
QT_MOC_LITERAL(19, 307, 15), // "distancePreset1"
QT_MOC_LITERAL(20, 323, 15), // "distancePreset2"
QT_MOC_LITERAL(21, 339, 15), // "distancePreset3"
QT_MOC_LITERAL(22, 355, 15), // "distancePreset4"
QT_MOC_LITERAL(23, 371, 15), // "velocityPreset1"
QT_MOC_LITERAL(24, 387, 15), // "velocityPreset2"
QT_MOC_LITERAL(25, 403, 15), // "velocityPreset3"
QT_MOC_LITERAL(26, 419, 15), // "velocityPreset4"
QT_MOC_LITERAL(27, 435, 19), // "feedbackAreaVisible"
QT_MOC_LITERAL(28, 455, 15), // "feedbackMessage"
QT_MOC_LITERAL(29, 471, 23), // "feedbackOkButtonVisible"
QT_MOC_LITERAL(30, 495, 16), // "feedbackProgress"
QT_MOC_LITERAL(31, 512, 24) // "instrumentControlEnabled"

    },
    "MainViewMngr\0powerOnChanged\0\0value\0"
    "distanceChanged\0velocityChanged\0"
    "feedbackAreaVisibleChanged\0"
    "feedbackMessageChanged\0"
    "feedbackOkButtonVisibleChanged\0"
    "feedbackProgressChanged\0"
    "instrumentControlEnabledChanged\0"
    "onStatusMessageChanged\0msg\0"
    "onInstrumentInitializationDone\0appName\0"
    "appNameVer\0powerOn\0distance\0velocity\0"
    "distancePreset1\0distancePreset2\0"
    "distancePreset3\0distancePreset4\0"
    "velocityPreset1\0velocityPreset2\0"
    "velocityPreset3\0velocityPreset4\0"
    "feedbackAreaVisible\0feedbackMessage\0"
    "feedbackOkButtonVisible\0feedbackProgress\0"
    "instrumentControlEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainViewMngr[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      18,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
       7,    1,   76,    2, 0x06 /* Public */,
       8,    1,   79,    2, 0x06 /* Public */,
       9,    1,   82,    2, 0x06 /* Public */,
      10,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00095401,
      15, QMetaType::QString, 0x00095401,
      16, QMetaType::Bool, 0x00495003,
      17, QMetaType::Double, 0x00495003,
      18, QMetaType::Double, 0x00495003,
      19, QMetaType::Double, 0x00095401,
      20, QMetaType::Double, 0x00095401,
      21, QMetaType::Double, 0x00095401,
      22, QMetaType::Double, 0x00095401,
      23, QMetaType::Double, 0x00095401,
      24, QMetaType::Double, 0x00095401,
      25, QMetaType::Double, 0x00095401,
      26, QMetaType::Double, 0x00095401,
      27, QMetaType::Bool, 0x00495003,
      28, QMetaType::QString, 0x00495003,
      29, QMetaType::Bool, 0x00495003,
      30, QMetaType::Int, 0x00495003,
      31, QMetaType::Bool, 0x00495003,

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
       3,
       4,
       5,
       6,
       7,

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
        case 3: _t->feedbackAreaVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->feedbackMessageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->feedbackOkButtonVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->feedbackProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->instrumentControlEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onStatusMessageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->onInstrumentInitializationDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
        {
            using _t = void (MainViewMngr::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewMngr::feedbackAreaVisibleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainViewMngr::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewMngr::feedbackMessageChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainViewMngr::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewMngr::feedbackOkButtonVisibleChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainViewMngr::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewMngr::feedbackProgressChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainViewMngr::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewMngr::instrumentControlEnabledChanged)) {
                *result = 7;
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
        case 13: *reinterpret_cast< bool*>(_v) = _t->feedbackAreaVisible(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->feedbackMessage(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->feedbackOkButtonVisible(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->feedbackProgress(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->instrumentControlEnabled(); break;
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
        case 13: _t->feedbackAreaVisible(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->feedbackMessage(*reinterpret_cast< QString*>(_v)); break;
        case 15: _t->feedbackOkButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->feedbackProgress(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->instrumentControlEnabled(*reinterpret_cast< bool*>(_v)); break;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
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

// SIGNAL 3
void MainViewMngr::feedbackAreaVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainViewMngr::feedbackMessageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainViewMngr::feedbackOkButtonVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainViewMngr::feedbackProgressChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainViewMngr::instrumentControlEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
