/****************************************************************************
** Meta object code from reading C++ file 'LinkManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../qgroundcontrol/src/comm/LinkManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinkManager_t {
    QByteArrayData data[28];
    char stringdata0[449];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkManager_t qt_meta_stringdata_LinkManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LinkManager"
QT_MOC_LITERAL(1, 12, 22), // "commPortStringsChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "commPortsChanged"
QT_MOC_LITERAL(4, 53, 17), // "_linkDisconnected"
QT_MOC_LITERAL(5, 71, 19), // "createConfiguration"
QT_MOC_LITERAL(6, 91, 18), // "LinkConfiguration*"
QT_MOC_LITERAL(7, 110, 4), // "type"
QT_MOC_LITERAL(8, 115, 4), // "name"
QT_MOC_LITERAL(9, 120, 25), // "startConfigurationEditing"
QT_MOC_LITERAL(10, 146, 6), // "config"
QT_MOC_LITERAL(11, 153, 26), // "cancelConfigurationEditing"
QT_MOC_LITERAL(12, 180, 23), // "endConfigurationEditing"
QT_MOC_LITERAL(13, 204, 12), // "editedConfig"
QT_MOC_LITERAL(14, 217, 22), // "endCreateConfiguration"
QT_MOC_LITERAL(15, 240, 19), // "removeConfiguration"
QT_MOC_LITERAL(16, 260, 8), // "shutdown"
QT_MOC_LITERAL(17, 269, 14), // "startLogReplay"
QT_MOC_LITERAL(18, 284, 14), // "LogReplayLink*"
QT_MOC_LITERAL(19, 299, 7), // "logFile"
QT_MOC_LITERAL(20, 307, 19), // "createConnectedLink"
QT_MOC_LITERAL(21, 327, 20), // "isBluetoothAvailable"
QT_MOC_LITERAL(22, 348, 18), // "linkConfigurations"
QT_MOC_LITERAL(23, 367, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(24, 387, 15), // "linkTypeStrings"
QT_MOC_LITERAL(25, 403, 15), // "serialBaudRates"
QT_MOC_LITERAL(26, 419, 17), // "serialPortStrings"
QT_MOC_LITERAL(27, 437, 11) // "serialPorts"

    },
    "LinkManager\0commPortStringsChanged\0\0"
    "commPortsChanged\0_linkDisconnected\0"
    "createConfiguration\0LinkConfiguration*\0"
    "type\0name\0startConfigurationEditing\0"
    "config\0cancelConfigurationEditing\0"
    "endConfigurationEditing\0editedConfig\0"
    "endCreateConfiguration\0removeConfiguration\0"
    "shutdown\0startLogReplay\0LogReplayLink*\0"
    "logFile\0createConnectedLink\0"
    "isBluetoothAvailable\0linkConfigurations\0"
    "QmlObjectListModel*\0linkTypeStrings\0"
    "serialBaudRates\0serialPortStrings\0"
    "serialPorts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       6,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   76,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    2,   77,    2, 0x02 /* Public */,
       9,    1,   82,    2, 0x02 /* Public */,
      11,    1,   85,    2, 0x02 /* Public */,
      12,    2,   88,    2, 0x02 /* Public */,
      14,    1,   93,    2, 0x02 /* Public */,
      15,    1,   96,    2, 0x02 /* Public */,
      16,    0,   99,    2, 0x02 /* Public */,
      17,    1,  100,    2, 0x02 /* Public */,
      20,    1,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6, QMetaType::Int, QMetaType::QString,    7,    8,
    0x80000000 | 6, 0x80000000 | 6,   10,
    QMetaType::Void, 0x80000000 | 6,   10,
    QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 6,   10,   13,
    QMetaType::Bool, 0x80000000 | 6,   10,
    QMetaType::Void, 0x80000000 | 6,   10,
    QMetaType::Void,
    0x80000000 | 18, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 6,   10,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00095401,
      22, 0x80000000 | 23, 0x00095409,
      24, QMetaType::QStringList, 0x00095401,
      25, QMetaType::QStringList, 0x00095401,
      26, QMetaType::QStringList, 0x00495001,
      27, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void LinkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commPortStringsChanged(); break;
        case 1: _t->commPortsChanged(); break;
        case 2: _t->_linkDisconnected(); break;
        case 3: { LinkConfiguration* _r = _t->createConfiguration((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< LinkConfiguration**>(_a[0]) = std::move(_r); }  break;
        case 4: { LinkConfiguration* _r = _t->startConfigurationEditing((*reinterpret_cast< LinkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< LinkConfiguration**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->cancelConfigurationEditing((*reinterpret_cast< LinkConfiguration*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->endConfigurationEditing((*reinterpret_cast< LinkConfiguration*(*)>(_a[1])),(*reinterpret_cast< LinkConfiguration*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->endCreateConfiguration((*reinterpret_cast< LinkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->removeConfiguration((*reinterpret_cast< LinkConfiguration*(*)>(_a[1]))); break;
        case 9: _t->shutdown(); break;
        case 10: { LogReplayLink* _r = _t->startLogReplay((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< LogReplayLink**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->createConnectedLink((*reinterpret_cast< LinkConfiguration*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinkManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::commPortStringsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LinkManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::commPortsChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LinkManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isBluetoothAvailable(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_qmlLinkConfigurations(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->linkTypeStrings(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->serialBaudRates(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->serialPortStrings(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->serialPorts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LinkManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_LinkManager.data,
    qt_meta_data_LinkManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LinkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinkManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int LinkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LinkManager::commPortStringsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LinkManager::commPortsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
