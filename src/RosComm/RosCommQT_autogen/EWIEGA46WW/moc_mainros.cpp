/****************************************************************************
** Meta object code from reading C++ file 'mainros.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../qgroundcontrol/src/RosComm/mainros.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainros.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainRos_t {
    QByteArrayData data[29];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainRos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainRos_t qt_meta_stringdata_MainRos = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MainRos"
QT_MOC_LITERAL(1, 8, 16), // "airButtonChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "armButtonChanged"
QT_MOC_LITERAL(4, 43, 14), // "aButtonChanged"
QT_MOC_LITERAL(5, 58, 14), // "bButtonChanged"
QT_MOC_LITERAL(6, 73, 12), // "pitchChanged"
QT_MOC_LITERAL(7, 86, 11), // "rollChanged"
QT_MOC_LITERAL(8, 98, 10), // "yawChanged"
QT_MOC_LITERAL(9, 109, 15), // "throttleChanged"
QT_MOC_LITERAL(10, 125, 16), // "camSliderChanged"
QT_MOC_LITERAL(11, 142, 18), // "commVoltageChanged"
QT_MOC_LITERAL(12, 161, 12), // "dataTransfer"
QT_MOC_LITERAL(13, 174, 5), // "int[]"
QT_MOC_LITERAL(14, 180, 11), // "slider_data"
QT_MOC_LITERAL(15, 192, 11), // "button_data"
QT_MOC_LITERAL(16, 204, 13), // "hand_controls"
QT_MOC_LITERAL(17, 218, 4), // "data"
QT_MOC_LITERAL(18, 223, 11), // "joyCallback"
QT_MOC_LITERAL(19, 235, 9), // "airButton"
QT_MOC_LITERAL(20, 245, 9), // "armButton"
QT_MOC_LITERAL(21, 255, 7), // "aButton"
QT_MOC_LITERAL(22, 263, 7), // "bButton"
QT_MOC_LITERAL(23, 271, 5), // "pitch"
QT_MOC_LITERAL(24, 277, 4), // "roll"
QT_MOC_LITERAL(25, 282, 3), // "yaw"
QT_MOC_LITERAL(26, 286, 8), // "throttle"
QT_MOC_LITERAL(27, 295, 9), // "camSlider"
QT_MOC_LITERAL(28, 305, 11) // "commVoltage"

    },
    "MainRos\0airButtonChanged\0\0armButtonChanged\0"
    "aButtonChanged\0bButtonChanged\0"
    "pitchChanged\0rollChanged\0yawChanged\0"
    "throttleChanged\0camSliderChanged\0"
    "commVoltageChanged\0dataTransfer\0int[]\0"
    "slider_data\0button_data\0hand_controls\0"
    "data\0joyCallback\0airButton\0armButton\0"
    "aButton\0bButton\0pitch\0roll\0yaw\0throttle\0"
    "camSlider\0commVoltage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainRos[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
      10,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    0,   86,    2, 0x06 /* Public */,
      10,    0,   87,    2, 0x06 /* Public */,
      11,    0,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   89,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      16,    1,   94,    2, 0x02 /* Public */,
      18,    1,   97,    2, 0x02 /* Public */,

 // signals: parameters
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

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, 0x80000000 | 13,   14,

 // properties: name, type, flags
      19, QMetaType::Int, 0x00495103,
      20, QMetaType::Int, 0x00495103,
      21, QMetaType::Int, 0x00495103,
      22, QMetaType::Int, 0x00495103,
      23, QMetaType::Int, 0x00495103,
      24, QMetaType::Int, 0x00495103,
      25, QMetaType::Int, 0x00495103,
      26, QMetaType::Int, 0x00495103,
      27, QMetaType::Int, 0x00495103,
      28, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

void MainRos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainRos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->airButtonChanged(); break;
        case 1: _t->armButtonChanged(); break;
        case 2: _t->aButtonChanged(); break;
        case 3: _t->bButtonChanged(); break;
        case 4: _t->pitchChanged(); break;
        case 5: _t->rollChanged(); break;
        case 6: _t->yawChanged(); break;
        case 7: _t->throttleChanged(); break;
        case 8: _t->camSliderChanged(); break;
        case 9: _t->commVoltageChanged(); break;
        case 10: _t->dataTransfer((*reinterpret_cast< int(*)[]>(_a[1])),(*reinterpret_cast< int(*)[]>(_a[2]))); break;
        case 11: _t->hand_controls((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->joyCallback((*reinterpret_cast< int(*)[]>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainRos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainRos::airButtonChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainRos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainRos::armButtonChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainRos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainRos::aButtonChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainRos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainRos::bButtonChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainRos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainRos::pitchChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainRos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainRos::rollChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainRos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainRos::yawChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainRos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainRos::throttleChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainRos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainRos::camSliderChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainRos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainRos::commVoltageChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainRos *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->airButton(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->armButton(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->aButton(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->bButton(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->pitch(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->roll(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->yaw(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->throttle(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->camSlider(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->commVoltage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MainRos *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAirButton(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setArmButton(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setAButton(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setBButton(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setPitch(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setRoll(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setYaw(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setThrottle(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setCamSlider(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setCommVoltage(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MainRos::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainRos.data,
    qt_meta_data_MainRos,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainRos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainRos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainRos.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "rclcpp::Node"))
        return static_cast< rclcpp::Node*>(this);
    return QObject::qt_metacast(_clname);
}

int MainRos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MainRos::airButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainRos::armButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainRos::aButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainRos::bButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainRos::pitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainRos::rollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MainRos::yawChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainRos::throttleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainRos::camSliderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainRos::commVoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
struct qt_meta_stringdata_ComputerInfo_t {
    QByteArrayData data[12];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComputerInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComputerInfo_t qt_meta_stringdata_ComputerInfo = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ComputerInfo"
QT_MOC_LITERAL(1, 13, 15), // "sys_dataChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "sys_timeChanged"
QT_MOC_LITERAL(4, 46, 18), // "sys_battaryChanged"
QT_MOC_LITERAL(5, 65, 20), // "change_statusChanged"
QT_MOC_LITERAL(6, 86, 10), // "getSysInfo"
QT_MOC_LITERAL(7, 97, 8), // "sys_data"
QT_MOC_LITERAL(8, 106, 11), // "std::string"
QT_MOC_LITERAL(9, 118, 8), // "sys_time"
QT_MOC_LITERAL(10, 127, 11), // "sys_battary"
QT_MOC_LITERAL(11, 139, 13) // "change_status"

    },
    "ComputerInfo\0sys_dataChanged\0\0"
    "sys_timeChanged\0sys_battaryChanged\0"
    "change_statusChanged\0getSysInfo\0"
    "sys_data\0std::string\0sys_time\0sys_battary\0"
    "change_status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComputerInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 8, 0x0049510b,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void ComputerInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComputerInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sys_dataChanged(); break;
        case 1: _t->sys_timeChanged(); break;
        case 2: _t->sys_battaryChanged(); break;
        case 3: _t->change_statusChanged(); break;
        case 4: _t->getSysInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComputerInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerInfo::sys_dataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComputerInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerInfo::sys_timeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComputerInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerInfo::sys_battaryChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ComputerInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerInfo::change_statusChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ComputerInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< std::string*>(_v) = _t->sys_data(); break;
        case 1: *reinterpret_cast< std::string*>(_v) = _t->sys_time(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->sys_battary(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->change_status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ComputerInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSys_data(*reinterpret_cast< std::string*>(_v)); break;
        case 1: _t->setSys_time(*reinterpret_cast< std::string*>(_v)); break;
        case 2: _t->setSys_battary(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setChange_status(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ComputerInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ComputerInfo.data,
    qt_meta_data_ComputerInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComputerInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComputerInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComputerInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ComputerInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ComputerInfo::sys_dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ComputerInfo::sys_timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ComputerInfo::sys_battaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ComputerInfo::change_statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
