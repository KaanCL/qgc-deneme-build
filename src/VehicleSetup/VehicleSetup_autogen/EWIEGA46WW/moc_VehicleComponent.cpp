/****************************************************************************
** Meta object code from reading C++ file 'VehicleComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../qgroundcontrol/src/VehicleSetup/VehicleComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleComponent_t {
    QByteArrayData data[15];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleComponent_t qt_meta_stringdata_VehicleComponent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "VehicleComponent"
QT_MOC_LITERAL(1, 17, 20), // "setupCompleteChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "setupComplete"
QT_MOC_LITERAL(4, 53, 18), // "setupSourceChanged"
QT_MOC_LITERAL(5, 72, 15), // "_triggerUpdated"
QT_MOC_LITERAL(6, 88, 5), // "value"
QT_MOC_LITERAL(7, 94, 4), // "name"
QT_MOC_LITERAL(8, 99, 11), // "description"
QT_MOC_LITERAL(9, 111, 13), // "requiresSetup"
QT_MOC_LITERAL(10, 125, 12), // "iconResource"
QT_MOC_LITERAL(11, 138, 11), // "setupSource"
QT_MOC_LITERAL(12, 150, 16), // "summaryQmlSource"
QT_MOC_LITERAL(13, 167, 20), // "allowSetupWhileArmed"
QT_MOC_LITERAL(14, 188, 21) // "allowSetupWhileFlying"

    },
    "VehicleComponent\0setupCompleteChanged\0"
    "\0setupComplete\0setupSourceChanged\0"
    "_triggerUpdated\0value\0name\0description\0"
    "requiresSetup\0iconResource\0setupSource\0"
    "summaryQmlSource\0allowSetupWhileArmed\0"
    "allowSetupWhileFlying"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleComponent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       9,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::Bool, 0x00095401,
       3, QMetaType::Bool, 0x00485001,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QUrl, 0x00495001,
      12, QMetaType::QUrl, 0x00095401,
      13, QMetaType::Bool, 0x00095401,
      14, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,

       0        // eod
};

void VehicleComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setupCompleteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setupSourceChanged(); break;
        case 2: _t->_triggerUpdated((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VehicleComponent::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleComponent::setupCompleteChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VehicleComponent::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleComponent::setupSourceChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleComponent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->requiresSetup(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->setupComplete(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->iconResource(); break;
        case 5: *reinterpret_cast< QUrl*>(_v) = _t->setupSource(); break;
        case 6: *reinterpret_cast< QUrl*>(_v) = _t->summaryQmlSource(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->allowSetupWhileArmed(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->allowSetupWhileFlying(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VehicleComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VehicleComponent.data,
    qt_meta_data_VehicleComponent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VehicleComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleComponent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VehicleComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VehicleComponent::setupCompleteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VehicleComponent::setupSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
