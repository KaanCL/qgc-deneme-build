/****************************************************************************
** Meta object code from reading C++ file 'SimulatedPosition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../qgroundcontrol/src/PositionManager/SimulatedPosition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimulatedPosition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimulatedPosition_t {
    QByteArrayData data[13];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimulatedPosition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimulatedPosition_t qt_meta_stringdata_SimulatedPosition = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SimulatedPosition"
QT_MOC_LITERAL(1, 18, 12), // "startUpdates"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "stopUpdates"
QT_MOC_LITERAL(4, 44, 13), // "requestUpdate"
QT_MOC_LITERAL(5, 58, 7), // "timeout"
QT_MOC_LITERAL(6, 66, 15), // "_updatePosition"
QT_MOC_LITERAL(7, 82, 13), // "_vehicleAdded"
QT_MOC_LITERAL(8, 96, 8), // "Vehicle*"
QT_MOC_LITERAL(9, 105, 7), // "vehicle"
QT_MOC_LITERAL(10, 113, 27), // "_vehicleHomePositionChanged"
QT_MOC_LITERAL(11, 141, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(12, 156, 12) // "homePosition"

    },
    "SimulatedPosition\0startUpdates\0\0"
    "stopUpdates\0requestUpdate\0timeout\0"
    "_updatePosition\0_vehicleAdded\0Vehicle*\0"
    "vehicle\0_vehicleHomePositionChanged\0"
    "QGeoCoordinate\0homePosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimulatedPosition[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,
       4,    0,   54,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void SimulatedPosition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimulatedPosition *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startUpdates(); break;
        case 1: _t->stopUpdates(); break;
        case 2: _t->requestUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->requestUpdate(); break;
        case 4: _t->_updatePosition(); break;
        case 5: _t->_vehicleAdded((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 6: _t->_vehicleHomePositionChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SimulatedPosition::staticMetaObject = { {
    QMetaObject::SuperData::link<QGeoPositionInfoSource::staticMetaObject>(),
    qt_meta_stringdata_SimulatedPosition.data,
    qt_meta_data_SimulatedPosition,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SimulatedPosition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimulatedPosition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimulatedPosition.stringdata0))
        return static_cast<void*>(this);
    return QGeoPositionInfoSource::qt_metacast(_clname);
}

int SimulatedPosition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoPositionInfoSource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
