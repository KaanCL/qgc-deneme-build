/****************************************************************************
** Meta object code from reading C++ file 'VehicleBatteryFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../qgroundcontrol/src/Vehicle/VehicleBatteryFactGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleBatteryFactGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleBatteryFactGroup_t {
    QByteArrayData data[17];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleBatteryFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleBatteryFactGroup_t qt_meta_stringdata_VehicleBatteryFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 23), // "VehicleBatteryFactGroup"
QT_MOC_LITERAL(1, 24, 21), // "_timeRemainingChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "value"
QT_MOC_LITERAL(4, 53, 2), // "id"
QT_MOC_LITERAL(5, 56, 5), // "Fact*"
QT_MOC_LITERAL(6, 62, 8), // "function"
QT_MOC_LITERAL(7, 71, 4), // "type"
QT_MOC_LITERAL(8, 76, 11), // "temperature"
QT_MOC_LITERAL(9, 88, 7), // "voltage"
QT_MOC_LITERAL(10, 96, 7), // "current"
QT_MOC_LITERAL(11, 104, 11), // "mahConsumed"
QT_MOC_LITERAL(12, 116, 16), // "percentRemaining"
QT_MOC_LITERAL(13, 133, 13), // "timeRemaining"
QT_MOC_LITERAL(14, 147, 16), // "timeRemainingStr"
QT_MOC_LITERAL(15, 164, 11), // "chargeState"
QT_MOC_LITERAL(16, 176, 12) // "instantPower"

    },
    "VehicleBatteryFactGroup\0_timeRemainingChanged\0"
    "\0value\0id\0Fact*\0function\0type\0temperature\0"
    "voltage\0current\0mahConsumed\0"
    "percentRemaining\0timeRemaining\0"
    "timeRemainingStr\0chargeState\0instantPower"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleBatteryFactGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      12,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095409,
       6, 0x80000000 | 5, 0x00095409,
       7, 0x80000000 | 5, 0x00095409,
       8, 0x80000000 | 5, 0x00095409,
       9, 0x80000000 | 5, 0x00095409,
      10, 0x80000000 | 5, 0x00095409,
      11, 0x80000000 | 5, 0x00095409,
      12, 0x80000000 | 5, 0x00095409,
      13, 0x80000000 | 5, 0x00095409,
      14, 0x80000000 | 5, 0x00095409,
      15, 0x80000000 | 5, 0x00095409,
      16, 0x80000000 | 5, 0x00095409,

       0        // eod
};

void VehicleBatteryFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleBatteryFactGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_timeRemainingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleBatteryFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->function(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->temperature(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->voltage(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->current(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->mahConsumed(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->percentRemaining(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->timeRemaining(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->timeRemainingStr(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->chargeState(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->instantPower(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VehicleBatteryFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_VehicleBatteryFactGroup.data,
    qt_meta_data_VehicleBatteryFactGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VehicleBatteryFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleBatteryFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleBatteryFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleBatteryFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
