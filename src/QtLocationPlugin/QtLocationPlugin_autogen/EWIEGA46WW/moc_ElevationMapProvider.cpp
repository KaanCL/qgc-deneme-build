/****************************************************************************
** Meta object code from reading C++ file 'ElevationMapProvider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../qgroundcontrol/src/QtLocationPlugin/ElevationMapProvider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElevationMapProvider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElevationProvider_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElevationProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElevationProvider_t qt_meta_stringdata_ElevationProvider = {
    {
QT_MOC_LITERAL(0, 0, 17) // "ElevationProvider"

    },
    "ElevationProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElevationProvider[] = {

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

void ElevationProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ElevationProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapProvider::staticMetaObject>(),
    qt_meta_stringdata_ElevationProvider.data,
    qt_meta_data_ElevationProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElevationProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElevationProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElevationProvider.stringdata0))
        return static_cast<void*>(this);
    return MapProvider::qt_metacast(_clname);
}

int ElevationProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AirmapElevationProvider_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirmapElevationProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirmapElevationProvider_t qt_meta_stringdata_AirmapElevationProvider = {
    {
QT_MOC_LITERAL(0, 0, 23) // "AirmapElevationProvider"

    },
    "AirmapElevationProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirmapElevationProvider[] = {

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

void AirmapElevationProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AirmapElevationProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<ElevationProvider::staticMetaObject>(),
    qt_meta_stringdata_AirmapElevationProvider.data,
    qt_meta_data_AirmapElevationProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirmapElevationProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirmapElevationProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirmapElevationProvider.stringdata0))
        return static_cast<void*>(this);
    return ElevationProvider::qt_metacast(_clname);
}

int AirmapElevationProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElevationProvider::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
