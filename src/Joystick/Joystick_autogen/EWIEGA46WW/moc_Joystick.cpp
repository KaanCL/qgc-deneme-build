/****************************************************************************
** Meta object code from reading C++ file 'Joystick.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../qgroundcontrol/src/Joystick/Joystick.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Joystick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssignedButtonAction_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssignedButtonAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssignedButtonAction_t qt_meta_stringdata_AssignedButtonAction = {
    {
QT_MOC_LITERAL(0, 0, 20) // "AssignedButtonAction"

    },
    "AssignedButtonAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssignedButtonAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AssignedButtonAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AssignedButtonAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssignedButtonAction.data,
    qt_meta_data_AssignedButtonAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssignedButtonAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssignedButtonAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssignedButtonAction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssignedButtonAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AssignableButtonAction_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssignableButtonAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssignableButtonAction_t qt_meta_stringdata_AssignableButtonAction = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AssignableButtonAction"
QT_MOC_LITERAL(1, 23, 6), // "action"
QT_MOC_LITERAL(2, 30, 9) // "canRepeat"

    },
    "AssignableButtonAction\0action\0canRepeat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssignableButtonAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::Bool, 0x00095401,

       0        // eod
};

void AssignableButtonAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AssignableButtonAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->action(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canRepeat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AssignableButtonAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssignableButtonAction.data,
    qt_meta_data_AssignableButtonAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssignableButtonAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssignableButtonAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssignableButtonAction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssignableButtonAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_Joystick_t {
    QByteArrayData data[80];
    char stringdata0[1149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Joystick_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Joystick_t qt_meta_stringdata_Joystick = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Joystick"
QT_MOC_LITERAL(1, 9, 19), // "rawAxisValueChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "index"
QT_MOC_LITERAL(4, 36, 5), // "value"
QT_MOC_LITERAL(5, 42, 23), // "rawButtonPressedChanged"
QT_MOC_LITERAL(6, 66, 7), // "pressed"
QT_MOC_LITERAL(7, 74, 17), // "calibratedChanged"
QT_MOC_LITERAL(8, 92, 10), // "calibrated"
QT_MOC_LITERAL(9, 103, 20), // "buttonActionsChanged"
QT_MOC_LITERAL(10, 124, 24), // "assignableActionsChanged"
QT_MOC_LITERAL(11, 149, 19), // "throttleModeChanged"
QT_MOC_LITERAL(12, 169, 4), // "mode"
QT_MOC_LITERAL(13, 174, 21), // "negativeThrustChanged"
QT_MOC_LITERAL(14, 196, 13), // "allowNegative"
QT_MOC_LITERAL(15, 210, 18), // "exponentialChanged"
QT_MOC_LITERAL(16, 229, 11), // "exponential"
QT_MOC_LITERAL(17, 241, 18), // "accumulatorChanged"
QT_MOC_LITERAL(18, 260, 11), // "accumulator"
QT_MOC_LITERAL(19, 272, 14), // "enabledChanged"
QT_MOC_LITERAL(20, 287, 7), // "enabled"
QT_MOC_LITERAL(21, 295, 23), // "circleCorrectionChanged"
QT_MOC_LITERAL(22, 319, 16), // "circleCorrection"
QT_MOC_LITERAL(23, 336, 10), // "axisValues"
QT_MOC_LITERAL(24, 347, 4), // "roll"
QT_MOC_LITERAL(25, 352, 5), // "pitch"
QT_MOC_LITERAL(26, 358, 3), // "yaw"
QT_MOC_LITERAL(27, 362, 8), // "throttle"
QT_MOC_LITERAL(28, 371, 22), // "axisFrequencyHzChanged"
QT_MOC_LITERAL(29, 394, 24), // "buttonFrequencyHzChanged"
QT_MOC_LITERAL(30, 419, 19), // "startContinuousZoom"
QT_MOC_LITERAL(31, 439, 9), // "direction"
QT_MOC_LITERAL(32, 449, 18), // "stopContinuousZoom"
QT_MOC_LITERAL(33, 468, 8), // "stepZoom"
QT_MOC_LITERAL(34, 477, 10), // "stepCamera"
QT_MOC_LITERAL(35, 488, 10), // "stepStream"
QT_MOC_LITERAL(36, 499, 13), // "triggerCamera"
QT_MOC_LITERAL(37, 513, 16), // "startVideoRecord"
QT_MOC_LITERAL(38, 530, 15), // "stopVideoRecord"
QT_MOC_LITERAL(39, 546, 17), // "toggleVideoRecord"
QT_MOC_LITERAL(40, 564, 15), // "gimbalPitchStep"
QT_MOC_LITERAL(41, 580, 13), // "gimbalYawStep"
QT_MOC_LITERAL(42, 594, 12), // "centerGimbal"
QT_MOC_LITERAL(43, 607, 18), // "gimbalControlValue"
QT_MOC_LITERAL(44, 626, 8), // "setArmed"
QT_MOC_LITERAL(45, 635, 3), // "arm"
QT_MOC_LITERAL(46, 639, 18), // "setVtolInFwdFlight"
QT_MOC_LITERAL(47, 658, 3), // "set"
QT_MOC_LITERAL(48, 662, 13), // "setFlightMode"
QT_MOC_LITERAL(49, 676, 10), // "flightMode"
QT_MOC_LITERAL(50, 687, 13), // "emergencyStop"
QT_MOC_LITERAL(51, 701, 13), // "gripperAction"
QT_MOC_LITERAL(52, 715, 15), // "GRIPPER_ACTIONS"
QT_MOC_LITERAL(53, 731, 21), // "_activeVehicleChanged"
QT_MOC_LITERAL(54, 753, 8), // "Vehicle*"
QT_MOC_LITERAL(55, 762, 13), // "activeVehicle"
QT_MOC_LITERAL(56, 776, 15), // "setButtonRepeat"
QT_MOC_LITERAL(57, 792, 6), // "button"
QT_MOC_LITERAL(58, 799, 6), // "repeat"
QT_MOC_LITERAL(59, 806, 15), // "getButtonRepeat"
QT_MOC_LITERAL(60, 822, 15), // "setButtonAction"
QT_MOC_LITERAL(61, 838, 6), // "action"
QT_MOC_LITERAL(62, 845, 15), // "getButtonAction"
QT_MOC_LITERAL(63, 861, 4), // "name"
QT_MOC_LITERAL(64, 866, 16), // "totalButtonCount"
QT_MOC_LITERAL(65, 883, 9), // "axisCount"
QT_MOC_LITERAL(66, 893, 19), // "requiresCalibration"
QT_MOC_LITERAL(67, 913, 13), // "buttonActions"
QT_MOC_LITERAL(68, 927, 17), // "assignableActions"
QT_MOC_LITERAL(69, 945, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(70, 965, 22), // "assignableActionTitles"
QT_MOC_LITERAL(71, 988, 18), // "disabledActionName"
QT_MOC_LITERAL(72, 1007, 12), // "throttleMode"
QT_MOC_LITERAL(73, 1020, 15), // "axisFrequencyHz"
QT_MOC_LITERAL(74, 1036, 18), // "minAxisFrequencyHz"
QT_MOC_LITERAL(75, 1055, 18), // "maxAxisFrequencyHz"
QT_MOC_LITERAL(76, 1074, 17), // "buttonFrequencyHz"
QT_MOC_LITERAL(77, 1092, 20), // "minButtonFrequencyHz"
QT_MOC_LITERAL(78, 1113, 20), // "maxButtonFrequencyHz"
QT_MOC_LITERAL(79, 1134, 14) // "negativeThrust"

    },
    "Joystick\0rawAxisValueChanged\0\0index\0"
    "value\0rawButtonPressedChanged\0pressed\0"
    "calibratedChanged\0calibrated\0"
    "buttonActionsChanged\0assignableActionsChanged\0"
    "throttleModeChanged\0mode\0negativeThrustChanged\0"
    "allowNegative\0exponentialChanged\0"
    "exponential\0accumulatorChanged\0"
    "accumulator\0enabledChanged\0enabled\0"
    "circleCorrectionChanged\0circleCorrection\0"
    "axisValues\0roll\0pitch\0yaw\0throttle\0"
    "axisFrequencyHzChanged\0buttonFrequencyHzChanged\0"
    "startContinuousZoom\0direction\0"
    "stopContinuousZoom\0stepZoom\0stepCamera\0"
    "stepStream\0triggerCamera\0startVideoRecord\0"
    "stopVideoRecord\0toggleVideoRecord\0"
    "gimbalPitchStep\0gimbalYawStep\0"
    "centerGimbal\0gimbalControlValue\0"
    "setArmed\0arm\0setVtolInFwdFlight\0set\0"
    "setFlightMode\0flightMode\0emergencyStop\0"
    "gripperAction\0GRIPPER_ACTIONS\0"
    "_activeVehicleChanged\0Vehicle*\0"
    "activeVehicle\0setButtonRepeat\0button\0"
    "repeat\0getButtonRepeat\0setButtonAction\0"
    "action\0getButtonAction\0name\0"
    "totalButtonCount\0axisCount\0"
    "requiresCalibration\0buttonActions\0"
    "assignableActions\0QmlObjectListModel*\0"
    "assignableActionTitles\0disabledActionName\0"
    "throttleMode\0axisFrequencyHz\0"
    "minAxisFrequencyHz\0maxAxisFrequencyHz\0"
    "buttonFrequencyHz\0minButtonFrequencyHz\0"
    "maxButtonFrequencyHz\0negativeThrust"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Joystick[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
      20,  304, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      32,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  199,    2, 0x06 /* Public */,
       5,    2,  204,    2, 0x06 /* Public */,
       7,    1,  209,    2, 0x06 /* Public */,
       9,    0,  212,    2, 0x06 /* Public */,
      10,    0,  213,    2, 0x06 /* Public */,
      11,    1,  214,    2, 0x06 /* Public */,
      13,    1,  217,    2, 0x06 /* Public */,
      15,    1,  220,    2, 0x06 /* Public */,
      17,    1,  223,    2, 0x06 /* Public */,
      19,    1,  226,    2, 0x06 /* Public */,
      21,    1,  229,    2, 0x06 /* Public */,
      23,    4,  232,    2, 0x06 /* Public */,
      28,    0,  241,    2, 0x06 /* Public */,
      29,    0,  242,    2, 0x06 /* Public */,
      30,    1,  243,    2, 0x06 /* Public */,
      32,    0,  246,    2, 0x06 /* Public */,
      33,    1,  247,    2, 0x06 /* Public */,
      34,    1,  250,    2, 0x06 /* Public */,
      35,    1,  253,    2, 0x06 /* Public */,
      36,    0,  256,    2, 0x06 /* Public */,
      37,    0,  257,    2, 0x06 /* Public */,
      38,    0,  258,    2, 0x06 /* Public */,
      39,    0,  259,    2, 0x06 /* Public */,
      40,    1,  260,    2, 0x06 /* Public */,
      41,    1,  263,    2, 0x06 /* Public */,
      42,    0,  266,    2, 0x06 /* Public */,
      43,    2,  267,    2, 0x06 /* Public */,
      44,    1,  272,    2, 0x06 /* Public */,
      46,    1,  275,    2, 0x06 /* Public */,
      48,    1,  278,    2, 0x06 /* Public */,
      50,    0,  281,    2, 0x06 /* Public */,
      51,    1,  282,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      53,    1,  285,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      56,    2,  288,    2, 0x02 /* Public */,
      59,    1,  293,    2, 0x02 /* Public */,
      60,    2,  296,    2, 0x02 /* Public */,
      62,    1,  301,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   24,   25,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   25,   26,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52,   51,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 54,   55,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   57,   58,
    QMetaType::Bool, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   57,   61,
    QMetaType::QString, QMetaType::Int,   57,

 // properties: name, type, flags
      63, QMetaType::QString, 0x00095401,
       8, QMetaType::Bool, 0x00495003,
      64, QMetaType::Int, 0x00095401,
      65, QMetaType::Int, 0x00095401,
      66, QMetaType::Bool, 0x00095401,
      67, QMetaType::QStringList, 0x00495001,
      68, 0x80000000 | 69, 0x00495009,
      70, QMetaType::QStringList, 0x00495001,
      71, QMetaType::QString, 0x00095401,
      72, QMetaType::Int, 0x00495103,
      73, QMetaType::Float, 0x00495003,
      74, QMetaType::Float, 0x00095401,
      75, QMetaType::Float, 0x00095401,
      76, QMetaType::Float, 0x00495003,
      77, QMetaType::Float, 0x00095401,
      78, QMetaType::Float, 0x00095401,
      79, QMetaType::Bool, 0x00495103,
      16, QMetaType::Float, 0x00495103,
      18, QMetaType::Bool, 0x00495103,
      22, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       0,
       0,
       0,
       3,
       4,
       4,
       0,
       5,
      12,
       0,
       0,
      13,
       0,
       0,
       6,
       7,
       8,
      10,

       0        // eod
};

void Joystick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Joystick *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rawAxisValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->rawButtonPressedChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->calibratedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->buttonActionsChanged(); break;
        case 4: _t->assignableActionsChanged(); break;
        case 5: _t->throttleModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->negativeThrustChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->exponentialChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->accumulatorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->circleCorrectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->axisValues((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 12: _t->axisFrequencyHzChanged(); break;
        case 13: _t->buttonFrequencyHzChanged(); break;
        case 14: _t->startContinuousZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->stopContinuousZoom(); break;
        case 16: _t->stepZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->stepCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->stepStream((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->triggerCamera(); break;
        case 20: _t->startVideoRecord(); break;
        case 21: _t->stopVideoRecord(); break;
        case 22: _t->toggleVideoRecord(); break;
        case 23: _t->gimbalPitchStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->gimbalYawStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->centerGimbal(); break;
        case 26: _t->gimbalControlValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 27: _t->setArmed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->setVtolInFwdFlight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->setFlightMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->emergencyStop(); break;
        case 31: _t->gripperAction((*reinterpret_cast< GRIPPER_ACTIONS(*)>(_a[1]))); break;
        case 32: _t->_activeVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 33: _t->setButtonRepeat((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: { bool _r = _t->getButtonRepeat((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->setButtonAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: { QString _r = _t->getButtonAction((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GRIPPER_ACTIONS >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Joystick::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::rawAxisValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::rawButtonPressedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::calibratedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::buttonActionsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::assignableActionsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::throttleModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::negativeThrustChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::exponentialChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::accumulatorChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::enabledChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::circleCorrectionChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::axisValues)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::axisFrequencyHzChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::buttonFrequencyHzChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::startContinuousZoom)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stopContinuousZoom)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stepZoom)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stepCamera)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stepStream)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::triggerCamera)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::startVideoRecord)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stopVideoRecord)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::toggleVideoRecord)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::gimbalPitchStep)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::gimbalYawStep)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::centerGimbal)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::gimbalControlValue)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::setArmed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::setVtolInFwdFlight)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::setFlightMode)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::emergencyStop)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(GRIPPER_ACTIONS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::gripperAction)) {
                *result = 31;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Joystick *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->_calibrated; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->totalButtonCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->axisCount(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->requiresCalibration(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->buttonActions(); break;
        case 6: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->assignableActions(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->assignableActionTitles(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->disabledActionName(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->throttleMode(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->axisFrequencyHz(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->_minAxisFrequencyHz; break;
        case 12: *reinterpret_cast< float*>(_v) = _t->_minAxisFrequencyHz; break;
        case 13: *reinterpret_cast< float*>(_v) = _t->buttonFrequencyHz(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->_minButtonFrequencyHz; break;
        case 15: *reinterpret_cast< float*>(_v) = _t->_maxButtonFrequencyHz; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->negativeThrust(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->exponential(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->accumulator(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->circleCorrection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Joystick *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1:
            if (_t->_calibrated != *reinterpret_cast< bool*>(_v)) {
                _t->_calibrated = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->calibratedChanged(_t->_calibrated);
            }
            break;
        case 9: _t->setThrottleMode(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setAxisFrequency(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setButtonFrequency(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setNegativeThrust(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setExponential(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setAccumulator(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->setCircleCorrection(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Joystick::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_Joystick.data,
    qt_meta_data_Joystick,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Joystick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Joystick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Joystick.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Joystick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Joystick::rawAxisValueChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Joystick::rawButtonPressedChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Joystick::calibratedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Joystick::buttonActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Joystick::assignableActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Joystick::throttleModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Joystick::negativeThrustChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Joystick::exponentialChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Joystick::accumulatorChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Joystick::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Joystick::circleCorrectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Joystick::axisValues(float _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Joystick::axisFrequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Joystick::buttonFrequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Joystick::startContinuousZoom(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Joystick::stopContinuousZoom()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Joystick::stepZoom(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Joystick::stepCamera(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Joystick::stepStream(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Joystick::triggerCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Joystick::startVideoRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Joystick::stopVideoRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Joystick::toggleVideoRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Joystick::gimbalPitchStep(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Joystick::gimbalYawStep(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Joystick::centerGimbal()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Joystick::gimbalControlValue(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Joystick::setArmed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Joystick::setVtolInFwdFlight(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Joystick::setFlightMode(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Joystick::emergencyStop()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Joystick::gripperAction(GRIPPER_ACTIONS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
