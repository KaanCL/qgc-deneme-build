/****************************************************************************
** Meta object code from reading C++ file 'QGroundControlQmlGlobal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../qgroundcontrol/src/QmlControls/QGroundControlQmlGlobal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGroundControlQmlGlobal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGroundControlQmlGlobal_t {
    QByteArrayData data[109];
    char stringdata0[1899];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGroundControlQmlGlobal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGroundControlQmlGlobal_t qt_meta_stringdata_QGroundControlQmlGlobal = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QGroundControlQmlGlobal"
QT_MOC_LITERAL(1, 24, 28), // "isMultiplexingEnabledChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 7), // "enabled"
QT_MOC_LITERAL(4, 62, 28), // "isVersionCheckEnabledChanged"
QT_MOC_LITERAL(5, 91, 22), // "mavlinkSystemIDChanged"
QT_MOC_LITERAL(6, 114, 2), // "id"
QT_MOC_LITERAL(7, 117, 24), // "flightMapPositionChanged"
QT_MOC_LITERAL(8, 142, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(9, 157, 17), // "flightMapPosition"
QT_MOC_LITERAL(10, 175, 20), // "flightMapZoomChanged"
QT_MOC_LITERAL(11, 196, 13), // "flightMapZoom"
QT_MOC_LITERAL(12, 210, 20), // "skipSetupPageChanged"
QT_MOC_LITERAL(13, 231, 17), // "saveGlobalSetting"
QT_MOC_LITERAL(14, 249, 3), // "key"
QT_MOC_LITERAL(15, 253, 5), // "value"
QT_MOC_LITERAL(16, 259, 17), // "loadGlobalSetting"
QT_MOC_LITERAL(17, 277, 12), // "defaultValue"
QT_MOC_LITERAL(18, 290, 21), // "saveBoolGlobalSetting"
QT_MOC_LITERAL(19, 312, 21), // "loadBoolGlobalSetting"
QT_MOC_LITERAL(20, 334, 25), // "deleteAllSettingsNextBoot"
QT_MOC_LITERAL(21, 360, 30), // "clearDeleteAllSettingsNextBoot"
QT_MOC_LITERAL(22, 391, 16), // "startPX4MockLink"
QT_MOC_LITERAL(23, 408, 14), // "sendStatusText"
QT_MOC_LITERAL(24, 423, 20), // "startGenericMockLink"
QT_MOC_LITERAL(25, 444, 26), // "startAPMArduCopterMockLink"
QT_MOC_LITERAL(26, 471, 25), // "startAPMArduPlaneMockLink"
QT_MOC_LITERAL(27, 497, 23), // "startAPMArduSubMockLink"
QT_MOC_LITERAL(28, 521, 25), // "startAPMArduRoverMockLink"
QT_MOC_LITERAL(29, 547, 15), // "stopOneMockLink"
QT_MOC_LITERAL(30, 563, 17), // "loggingCategories"
QT_MOC_LITERAL(31, 581, 20), // "setCategoryLoggingOn"
QT_MOC_LITERAL(32, 602, 8), // "category"
QT_MOC_LITERAL(33, 611, 6), // "enable"
QT_MOC_LITERAL(34, 618, 17), // "categoryLoggingOn"
QT_MOC_LITERAL(35, 636, 24), // "updateLoggingFilterRules"
QT_MOC_LITERAL(36, 661, 14), // "linesIntersect"
QT_MOC_LITERAL(37, 676, 6), // "xLine1"
QT_MOC_LITERAL(38, 683, 6), // "yLine1"
QT_MOC_LITERAL(39, 690, 6), // "xLine2"
QT_MOC_LITERAL(40, 697, 6), // "yLine2"
QT_MOC_LITERAL(41, 704, 22), // "altitudeModeExtraUnits"
QT_MOC_LITERAL(42, 727, 7), // "AltMode"
QT_MOC_LITERAL(43, 735, 7), // "altMode"
QT_MOC_LITERAL(44, 743, 28), // "altitudeModeShortDescription"
QT_MOC_LITERAL(45, 772, 7), // "appName"
QT_MOC_LITERAL(46, 780, 11), // "linkManager"
QT_MOC_LITERAL(47, 792, 12), // "LinkManager*"
QT_MOC_LITERAL(48, 805, 19), // "multiVehicleManager"
QT_MOC_LITERAL(49, 825, 20), // "MultiVehicleManager*"
QT_MOC_LITERAL(50, 846, 16), // "mapEngineManager"
QT_MOC_LITERAL(51, 863, 20), // "QGCMapEngineManager*"
QT_MOC_LITERAL(52, 884, 17), // "qgcPositionManger"
QT_MOC_LITERAL(53, 902, 19), // "QGCPositionManager*"
QT_MOC_LITERAL(54, 922, 12), // "videoManager"
QT_MOC_LITERAL(55, 935, 13), // "VideoManager*"
QT_MOC_LITERAL(56, 949, 17), // "mavlinkLogManager"
QT_MOC_LITERAL(57, 967, 18), // "MAVLinkLogManager*"
QT_MOC_LITERAL(58, 986, 15), // "settingsManager"
QT_MOC_LITERAL(59, 1002, 16), // "SettingsManager*"
QT_MOC_LITERAL(60, 1019, 15), // "airspaceManager"
QT_MOC_LITERAL(61, 1035, 16), // "AirspaceManager*"
QT_MOC_LITERAL(62, 1052, 18), // "adsbVehicleManager"
QT_MOC_LITERAL(63, 1071, 19), // "ADSBVehicleManager*"
QT_MOC_LITERAL(64, 1091, 10), // "corePlugin"
QT_MOC_LITERAL(65, 1102, 14), // "QGCCorePlugin*"
QT_MOC_LITERAL(66, 1117, 18), // "missionCommandTree"
QT_MOC_LITERAL(67, 1136, 19), // "MissionCommandTree*"
QT_MOC_LITERAL(68, 1156, 6), // "gpsRtk"
QT_MOC_LITERAL(69, 1163, 10), // "FactGroup*"
QT_MOC_LITERAL(70, 1174, 15), // "airmapSupported"
QT_MOC_LITERAL(71, 1190, 14), // "taisyncManager"
QT_MOC_LITERAL(72, 1205, 15), // "TaisyncManager*"
QT_MOC_LITERAL(73, 1221, 16), // "taisyncSupported"
QT_MOC_LITERAL(74, 1238, 16), // "microhardManager"
QT_MOC_LITERAL(75, 1255, 17), // "MicrohardManager*"
QT_MOC_LITERAL(76, 1273, 18), // "microhardSupported"
QT_MOC_LITERAL(77, 1292, 15), // "supportsPairing"
QT_MOC_LITERAL(78, 1308, 13), // "globalPalette"
QT_MOC_LITERAL(79, 1322, 11), // "QGCPalette*"
QT_MOC_LITERAL(80, 1334, 15), // "unitsConversion"
QT_MOC_LITERAL(81, 1350, 19), // "QmlUnitsConversion*"
QT_MOC_LITERAL(82, 1370, 21), // "singleFirmwareSupport"
QT_MOC_LITERAL(83, 1392, 20), // "singleVehicleSupport"
QT_MOC_LITERAL(84, 1413, 23), // "px4ProFirmwareSupported"
QT_MOC_LITERAL(85, 1437, 20), // "apmFirmwareSupported"
QT_MOC_LITERAL(86, 1458, 20), // "flightMapInitialZoom"
QT_MOC_LITERAL(87, 1479, 22), // "parameterFileExtension"
QT_MOC_LITERAL(88, 1502, 20), // "missionFileExtension"
QT_MOC_LITERAL(89, 1523, 22), // "telemetryFileExtension"
QT_MOC_LITERAL(90, 1546, 10), // "qgcVersion"
QT_MOC_LITERAL(91, 1557, 13), // "skipSetupPage"
QT_MOC_LITERAL(92, 1571, 13), // "zOrderTopMost"
QT_MOC_LITERAL(93, 1585, 13), // "zOrderWidgets"
QT_MOC_LITERAL(94, 1599, 14), // "zOrderMapItems"
QT_MOC_LITERAL(95, 1614, 14), // "zOrderVehicles"
QT_MOC_LITERAL(96, 1629, 24), // "zOrderWaypointIndicators"
QT_MOC_LITERAL(97, 1654, 21), // "zOrderTrajectoryLines"
QT_MOC_LITERAL(98, 1676, 19), // "zOrderWaypointLines"
QT_MOC_LITERAL(99, 1696, 21), // "isVersionCheckEnabled"
QT_MOC_LITERAL(100, 1718, 15), // "mavlinkSystemID"
QT_MOC_LITERAL(101, 1734, 13), // "hasAPMSupport"
QT_MOC_LITERAL(102, 1748, 19), // "hasMAVLinkInspector"
QT_MOC_LITERAL(103, 1768, 17), // "AltitudeModeMixed"
QT_MOC_LITERAL(104, 1786, 20), // "AltitudeModeRelative"
QT_MOC_LITERAL(105, 1807, 20), // "AltitudeModeAbsolute"
QT_MOC_LITERAL(106, 1828, 28), // "AltitudeModeCalcAboveTerrain"
QT_MOC_LITERAL(107, 1857, 24), // "AltitudeModeTerrainFrame"
QT_MOC_LITERAL(108, 1882, 16) // "AltitudeModeNone"

    },
    "QGroundControlQmlGlobal\0"
    "isMultiplexingEnabledChanged\0\0enabled\0"
    "isVersionCheckEnabledChanged\0"
    "mavlinkSystemIDChanged\0id\0"
    "flightMapPositionChanged\0QGeoCoordinate\0"
    "flightMapPosition\0flightMapZoomChanged\0"
    "flightMapZoom\0skipSetupPageChanged\0"
    "saveGlobalSetting\0key\0value\0"
    "loadGlobalSetting\0defaultValue\0"
    "saveBoolGlobalSetting\0loadBoolGlobalSetting\0"
    "deleteAllSettingsNextBoot\0"
    "clearDeleteAllSettingsNextBoot\0"
    "startPX4MockLink\0sendStatusText\0"
    "startGenericMockLink\0startAPMArduCopterMockLink\0"
    "startAPMArduPlaneMockLink\0"
    "startAPMArduSubMockLink\0"
    "startAPMArduRoverMockLink\0stopOneMockLink\0"
    "loggingCategories\0setCategoryLoggingOn\0"
    "category\0enable\0categoryLoggingOn\0"
    "updateLoggingFilterRules\0linesIntersect\0"
    "xLine1\0yLine1\0xLine2\0yLine2\0"
    "altitudeModeExtraUnits\0AltMode\0altMode\0"
    "altitudeModeShortDescription\0appName\0"
    "linkManager\0LinkManager*\0multiVehicleManager\0"
    "MultiVehicleManager*\0mapEngineManager\0"
    "QGCMapEngineManager*\0qgcPositionManger\0"
    "QGCPositionManager*\0videoManager\0"
    "VideoManager*\0mavlinkLogManager\0"
    "MAVLinkLogManager*\0settingsManager\0"
    "SettingsManager*\0airspaceManager\0"
    "AirspaceManager*\0adsbVehicleManager\0"
    "ADSBVehicleManager*\0corePlugin\0"
    "QGCCorePlugin*\0missionCommandTree\0"
    "MissionCommandTree*\0gpsRtk\0FactGroup*\0"
    "airmapSupported\0taisyncManager\0"
    "TaisyncManager*\0taisyncSupported\0"
    "microhardManager\0MicrohardManager*\0"
    "microhardSupported\0supportsPairing\0"
    "globalPalette\0QGCPalette*\0unitsConversion\0"
    "QmlUnitsConversion*\0singleFirmwareSupport\0"
    "singleVehicleSupport\0px4ProFirmwareSupported\0"
    "apmFirmwareSupported\0flightMapInitialZoom\0"
    "parameterFileExtension\0missionFileExtension\0"
    "telemetryFileExtension\0qgcVersion\0"
    "skipSetupPage\0zOrderTopMost\0zOrderWidgets\0"
    "zOrderMapItems\0zOrderVehicles\0"
    "zOrderWaypointIndicators\0zOrderTrajectoryLines\0"
    "zOrderWaypointLines\0isVersionCheckEnabled\0"
    "mavlinkSystemID\0hasAPMSupport\0"
    "hasMAVLinkInspector\0AltitudeModeMixed\0"
    "AltitudeModeRelative\0AltitudeModeAbsolute\0"
    "AltitudeModeCalcAboveTerrain\0"
    "AltitudeModeTerrainFrame\0AltitudeModeNone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGroundControlQmlGlobal[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      44,  226, // properties
       1,  402, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       4,    1,  147,    2, 0x06 /* Public */,
       5,    1,  150,    2, 0x06 /* Public */,
       7,    1,  153,    2, 0x06 /* Public */,
      10,    1,  156,    2, 0x06 /* Public */,
      12,    0,  159,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    2,  160,    2, 0x02 /* Public */,
      16,    2,  165,    2, 0x02 /* Public */,
      18,    2,  170,    2, 0x02 /* Public */,
      19,    2,  175,    2, 0x02 /* Public */,
      20,    0,  180,    2, 0x02 /* Public */,
      21,    0,  181,    2, 0x02 /* Public */,
      22,    1,  182,    2, 0x02 /* Public */,
      24,    1,  185,    2, 0x02 /* Public */,
      25,    1,  188,    2, 0x02 /* Public */,
      26,    1,  191,    2, 0x02 /* Public */,
      27,    1,  194,    2, 0x02 /* Public */,
      28,    1,  197,    2, 0x02 /* Public */,
      29,    0,  200,    2, 0x02 /* Public */,
      30,    0,  201,    2, 0x02 /* Public */,
      31,    2,  202,    2, 0x02 /* Public */,
      34,    1,  207,    2, 0x02 /* Public */,
      35,    0,  210,    2, 0x02 /* Public */,
      36,    4,  211,    2, 0x02 /* Public */,
      41,    1,  220,    2, 0x02 /* Public */,
      44,    1,  223,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   14,   15,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   14,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   32,   33,
    QMetaType::Bool, QMetaType::QString,   32,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QPointF,   37,   38,   39,   40,
    QMetaType::QString, 0x80000000 | 42,   43,
    QMetaType::QString, 0x80000000 | 42,   43,

 // properties: name, type, flags
      45, QMetaType::QString, 0x00095401,
      46, 0x80000000 | 47, 0x00095409,
      48, 0x80000000 | 49, 0x00095409,
      50, 0x80000000 | 51, 0x00095409,
      52, 0x80000000 | 53, 0x00095409,
      54, 0x80000000 | 55, 0x00095409,
      56, 0x80000000 | 57, 0x00095409,
      58, 0x80000000 | 59, 0x00095409,
      60, 0x80000000 | 61, 0x00095409,
      62, 0x80000000 | 63, 0x00095409,
      64, 0x80000000 | 65, 0x00095409,
      66, 0x80000000 | 67, 0x00095409,
      68, 0x80000000 | 69, 0x00095409,
      70, QMetaType::Bool, 0x00095401,
      71, 0x80000000 | 72, 0x00095409,
      73, QMetaType::Bool, 0x00095401,
      74, 0x80000000 | 75, 0x00095409,
      76, QMetaType::Bool, 0x00095401,
      77, QMetaType::Bool, 0x00095401,
      78, 0x80000000 | 79, 0x00095409,
      80, 0x80000000 | 81, 0x00095409,
      82, QMetaType::Bool, 0x00095401,
      83, QMetaType::Bool, 0x00095401,
      84, QMetaType::Bool, 0x00095401,
      85, QMetaType::Int, 0x00095401,
       9, 0x80000000 | 8, 0x0049510b,
      11, QMetaType::Double, 0x00495103,
      86, QMetaType::Double, 0x00095401,
      87, QMetaType::QString, 0x00095401,
      88, QMetaType::QString, 0x00095401,
      89, QMetaType::QString, 0x00095401,
      90, QMetaType::QString, 0x00095401,
      91, QMetaType::Bool, 0x00495103,
      92, QMetaType::QReal, 0x00095401,
      93, QMetaType::QReal, 0x00095401,
      94, QMetaType::QReal, 0x00095401,
      95, QMetaType::QReal, 0x00095401,
      96, QMetaType::QReal, 0x00095401,
      97, QMetaType::QReal, 0x00095401,
      98, QMetaType::QReal, 0x00095401,
      99, QMetaType::Bool, 0x00495103,
     100, QMetaType::Int, 0x00495103,
     101, QMetaType::Bool, 0x00095401,
     102, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
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
       0,
       0,
       0,
       0,
       0,
       5,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       2,
       0,
       0,

 // enums: name, alias, flags, count, data
      42,   42, 0x0,    6,  407,

 // enum data: key, value
     103, uint(QGroundControlQmlGlobal::AltitudeModeMixed),
     104, uint(QGroundControlQmlGlobal::AltitudeModeRelative),
     105, uint(QGroundControlQmlGlobal::AltitudeModeAbsolute),
     106, uint(QGroundControlQmlGlobal::AltitudeModeCalcAboveTerrain),
     107, uint(QGroundControlQmlGlobal::AltitudeModeTerrainFrame),
     108, uint(QGroundControlQmlGlobal::AltitudeModeNone),

       0        // eod
};

void QGroundControlQmlGlobal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGroundControlQmlGlobal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isMultiplexingEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->isVersionCheckEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->mavlinkSystemIDChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->flightMapPositionChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 4: _t->flightMapZoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->skipSetupPageChanged(); break;
        case 6: _t->saveGlobalSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: { QString _r = _t->loadGlobalSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->saveBoolGlobalSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: { bool _r = _t->loadBoolGlobalSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->deleteAllSettingsNextBoot(); break;
        case 11: _t->clearDeleteAllSettingsNextBoot(); break;
        case 12: _t->startPX4MockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->startGenericMockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->startAPMArduCopterMockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->startAPMArduPlaneMockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->startAPMArduSubMockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->startAPMArduRoverMockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->stopOneMockLink(); break;
        case 19: { QStringList _r = _t->loggingCategories();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setCategoryLoggingOn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: { bool _r = _t->categoryLoggingOn((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->updateLoggingFilterRules(); break;
        case 23: { bool _r = _t->linesIntersect((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->altitudeModeExtraUnits((*reinterpret_cast< AltMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: { QString _r = _t->altitudeModeShortDescription((*reinterpret_cast< AltMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGroundControlQmlGlobal::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::isMultiplexingEnabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGroundControlQmlGlobal::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::isVersionCheckEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGroundControlQmlGlobal::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::mavlinkSystemIDChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGroundControlQmlGlobal::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::flightMapPositionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGroundControlQmlGlobal::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::flightMapZoomChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGroundControlQmlGlobal::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::skipSetupPageChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ADSBVehicleManager* >(); break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AirspaceManager* >(); break;
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FactGroup* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MultiVehicleManager* >(); break;
        case 19:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCPalette* >(); break;
        case 25:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 20:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlUnitsConversion* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGroundControlQmlGlobal *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->appName(); break;
        case 1: *reinterpret_cast< LinkManager**>(_v) = _t->linkManager(); break;
        case 2: *reinterpret_cast< MultiVehicleManager**>(_v) = _t->multiVehicleManager(); break;
        case 3: *reinterpret_cast< QGCMapEngineManager**>(_v) = _t->mapEngineManager(); break;
        case 4: *reinterpret_cast< QGCPositionManager**>(_v) = _t->qgcPositionManger(); break;
        case 5: *reinterpret_cast< VideoManager**>(_v) = _t->videoManager(); break;
        case 6: *reinterpret_cast< MAVLinkLogManager**>(_v) = _t->mavlinkLogManager(); break;
        case 7: *reinterpret_cast< SettingsManager**>(_v) = _t->settingsManager(); break;
        case 8: *reinterpret_cast< AirspaceManager**>(_v) = _t->airspaceManager(); break;
        case 9: *reinterpret_cast< ADSBVehicleManager**>(_v) = _t->adsbVehicleManager(); break;
        case 10: *reinterpret_cast< QGCCorePlugin**>(_v) = _t->corePlugin(); break;
        case 11: *reinterpret_cast< MissionCommandTree**>(_v) = _t->missionCommandTree(); break;
        case 12: *reinterpret_cast< FactGroup**>(_v) = _t->gpsRtkFactGroup(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->airmapSupported(); break;
        case 14: *reinterpret_cast< TaisyncManager**>(_v) = _t->taisyncManager(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->taisyncSupported(); break;
        case 16: *reinterpret_cast< MicrohardManager**>(_v) = _t->microhardManager(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->microhardSupported(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->supportsPairing(); break;
        case 19: *reinterpret_cast< QGCPalette**>(_v) = _t->_globalPalette; break;
        case 20: *reinterpret_cast< QmlUnitsConversion**>(_v) = _t->unitsConversion(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->singleFirmwareSupport(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->singleVehicleSupport(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->px4ProFirmwareSupported(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->apmFirmwareSupported(); break;
        case 25: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->flightMapPosition(); break;
        case 26: *reinterpret_cast< double*>(_v) = _t->flightMapZoom(); break;
        case 27: *reinterpret_cast< double*>(_v) = _t->_flightMapInitialZoom; break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->parameterFileExtension(); break;
        case 29: *reinterpret_cast< QString*>(_v) = _t->missionFileExtension(); break;
        case 30: *reinterpret_cast< QString*>(_v) = _t->telemetryFileExtension(); break;
        case 31: *reinterpret_cast< QString*>(_v) = _t->qgcVersion(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->skipSetupPage(); break;
        case 33: *reinterpret_cast< qreal*>(_v) = _t->zOrderTopMost(); break;
        case 34: *reinterpret_cast< qreal*>(_v) = _t->zOrderWidgets(); break;
        case 35: *reinterpret_cast< qreal*>(_v) = _t->zOrderMapItems(); break;
        case 36: *reinterpret_cast< qreal*>(_v) = _t->zOrderVehicles(); break;
        case 37: *reinterpret_cast< qreal*>(_v) = _t->zOrderWaypointIndicators(); break;
        case 38: *reinterpret_cast< qreal*>(_v) = _t->zOrderTrajectoryLines(); break;
        case 39: *reinterpret_cast< qreal*>(_v) = _t->zOrderWaypointLines(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->isVersionCheckEnabled(); break;
        case 41: *reinterpret_cast< int*>(_v) = _t->mavlinkSystemID(); break;
        case 42: *reinterpret_cast< bool*>(_v) = _t->hasAPMSupport(); break;
        case 43: *reinterpret_cast< bool*>(_v) = _t->hasMAVLinkInspector(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGroundControlQmlGlobal *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 25: _t->setFlightMapPosition(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 26: _t->setFlightMapZoom(*reinterpret_cast< double*>(_v)); break;
        case 32: _t->setSkipSetupPage(*reinterpret_cast< bool*>(_v)); break;
        case 40: _t->setIsVersionCheckEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 41: _t->setMavlinkSystemID(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGroundControlQmlGlobal::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_QGroundControlQmlGlobal.data,
    qt_meta_data_QGroundControlQmlGlobal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGroundControlQmlGlobal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGroundControlQmlGlobal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGroundControlQmlGlobal.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int QGroundControlQmlGlobal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 44;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 44;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 44;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 44;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 44;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGroundControlQmlGlobal::isMultiplexingEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGroundControlQmlGlobal::isVersionCheckEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGroundControlQmlGlobal::mavlinkSystemIDChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGroundControlQmlGlobal::flightMapPositionChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGroundControlQmlGlobal::flightMapZoomChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGroundControlQmlGlobal::skipSetupPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
