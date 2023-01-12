/****************************************************************************
** Meta object code from reading C++ file 'QGCCameraControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../qgroundcontrol/src/Camera/QGCCameraControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCCameraControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCVideoStreamInfo_t {
    QByteArrayData data[10];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCVideoStreamInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCVideoStreamInfo_t qt_meta_stringdata_QGCVideoStreamInfo = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QGCVideoStreamInfo"
QT_MOC_LITERAL(1, 19, 11), // "infoChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "uri"
QT_MOC_LITERAL(4, 36, 4), // "name"
QT_MOC_LITERAL(5, 41, 8), // "streamID"
QT_MOC_LITERAL(6, 50, 4), // "type"
QT_MOC_LITERAL(7, 55, 11), // "aspectRatio"
QT_MOC_LITERAL(8, 67, 4), // "hfov"
QT_MOC_LITERAL(9, 72, 9) // "isThermal"

    },
    "QGCVideoStreamInfo\0infoChanged\0\0uri\0"
    "name\0streamID\0type\0aspectRatio\0hfov\0"
    "isThermal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCVideoStreamInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495001,
       4, QMetaType::QString, 0x00495001,
       5, QMetaType::Int, 0x00495001,
       6, QMetaType::Int, 0x00495001,
       7, QMetaType::QReal, 0x00495001,
       8, QMetaType::QReal, 0x00495001,
       9, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QGCVideoStreamInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCVideoStreamInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCVideoStreamInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCVideoStreamInfo::infoChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCVideoStreamInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->uri(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->streamID(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->type(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->aspectRatio(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->hfov(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isThermal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QGCVideoStreamInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QGCVideoStreamInfo.data,
    qt_meta_data_QGCVideoStreamInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCVideoStreamInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCVideoStreamInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCVideoStreamInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCVideoStreamInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCVideoStreamInfo::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QGCCameraControl_t {
    QByteArrayData data[145];
    char stringdata0[2184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCCameraControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCCameraControl_t qt_meta_stringdata_QGCCameraControl = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QGCCameraControl"
QT_MOC_LITERAL(1, 17, 11), // "infoChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "videoStatusChanged"
QT_MOC_LITERAL(4, 49, 18), // "photoStatusChanged"
QT_MOC_LITERAL(5, 68, 16), // "photoModeChanged"
QT_MOC_LITERAL(6, 85, 17), // "photoLapseChanged"
QT_MOC_LITERAL(7, 103, 22), // "photoLapseCountChanged"
QT_MOC_LITERAL(8, 126, 17), // "cameraModeChanged"
QT_MOC_LITERAL(9, 144, 21), // "activeSettingsChanged"
QT_MOC_LITERAL(10, 166, 18), // "storageFreeChanged"
QT_MOC_LITERAL(11, 185, 19), // "storageTotalChanged"
QT_MOC_LITERAL(12, 205, 23), // "batteryRemainingChanged"
QT_MOC_LITERAL(13, 229, 9), // "dataReady"
QT_MOC_LITERAL(14, 239, 4), // "data"
QT_MOC_LITERAL(15, 244, 15), // "parametersReady"
QT_MOC_LITERAL(16, 260, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(17, 277, 17), // "focusLevelChanged"
QT_MOC_LITERAL(18, 295, 14), // "streamsChanged"
QT_MOC_LITERAL(19, 310, 20), // "currentStreamChanged"
QT_MOC_LITERAL(20, 331, 20), // "thermalStreamChanged"
QT_MOC_LITERAL(21, 352, 17), // "autoStreamChanged"
QT_MOC_LITERAL(22, 370, 17), // "recordTimeChanged"
QT_MOC_LITERAL(23, 388, 19), // "streamLabelsChanged"
QT_MOC_LITERAL(24, 408, 18), // "thermalModeChanged"
QT_MOC_LITERAL(25, 427, 21), // "thermalOpacityChanged"
QT_MOC_LITERAL(26, 449, 20), // "storageStatusChanged"
QT_MOC_LITERAL(27, 470, 14), // "_initWhenReady"
QT_MOC_LITERAL(28, 485, 22), // "_requestCameraSettings"
QT_MOC_LITERAL(29, 508, 21), // "_requestAllParameters"
QT_MOC_LITERAL(30, 530, 20), // "_requestParamUpdates"
QT_MOC_LITERAL(31, 551, 21), // "_requestCaptureStatus"
QT_MOC_LITERAL(32, 573, 19), // "_requestStorageInfo"
QT_MOC_LITERAL(33, 593, 17), // "_downloadFinished"
QT_MOC_LITERAL(34, 611, 17), // "_mavCommandResult"
QT_MOC_LITERAL(35, 629, 9), // "vehicleId"
QT_MOC_LITERAL(36, 639, 9), // "component"
QT_MOC_LITERAL(37, 649, 7), // "command"
QT_MOC_LITERAL(38, 657, 6), // "result"
QT_MOC_LITERAL(39, 664, 20), // "noReponseFromVehicle"
QT_MOC_LITERAL(40, 685, 10), // "_dataReady"
QT_MOC_LITERAL(41, 696, 10), // "_paramDone"
QT_MOC_LITERAL(42, 707, 14), // "_streamTimeout"
QT_MOC_LITERAL(43, 722, 20), // "_streamStatusTimeout"
QT_MOC_LITERAL(44, 743, 16), // "_recTimerHandler"
QT_MOC_LITERAL(45, 760, 21), // "_checkForVideoStreams"
QT_MOC_LITERAL(46, 782, 12), // "setVideoMode"
QT_MOC_LITERAL(47, 795, 12), // "setPhotoMode"
QT_MOC_LITERAL(48, 808, 10), // "toggleMode"
QT_MOC_LITERAL(49, 819, 9), // "takePhoto"
QT_MOC_LITERAL(50, 829, 13), // "stopTakePhoto"
QT_MOC_LITERAL(51, 843, 10), // "startVideo"
QT_MOC_LITERAL(52, 854, 9), // "stopVideo"
QT_MOC_LITERAL(53, 864, 11), // "toggleVideo"
QT_MOC_LITERAL(54, 876, 13), // "resetSettings"
QT_MOC_LITERAL(55, 890, 10), // "formatCard"
QT_MOC_LITERAL(56, 901, 2), // "id"
QT_MOC_LITERAL(57, 904, 8), // "stepZoom"
QT_MOC_LITERAL(58, 913, 9), // "direction"
QT_MOC_LITERAL(59, 923, 9), // "startZoom"
QT_MOC_LITERAL(60, 933, 8), // "stopZoom"
QT_MOC_LITERAL(61, 942, 10), // "stopStream"
QT_MOC_LITERAL(62, 953, 12), // "resumeStream"
QT_MOC_LITERAL(63, 966, 7), // "version"
QT_MOC_LITERAL(64, 974, 9), // "modelName"
QT_MOC_LITERAL(65, 984, 6), // "vendor"
QT_MOC_LITERAL(66, 991, 15), // "firmwareVersion"
QT_MOC_LITERAL(67, 1007, 11), // "focalLength"
QT_MOC_LITERAL(68, 1019, 10), // "sensorSize"
QT_MOC_LITERAL(69, 1030, 10), // "resolution"
QT_MOC_LITERAL(70, 1041, 13), // "capturesVideo"
QT_MOC_LITERAL(71, 1055, 14), // "capturesPhotos"
QT_MOC_LITERAL(72, 1070, 8), // "hasModes"
QT_MOC_LITERAL(73, 1079, 7), // "hasZoom"
QT_MOC_LITERAL(74, 1087, 8), // "hasFocus"
QT_MOC_LITERAL(75, 1096, 14), // "hasVideoStream"
QT_MOC_LITERAL(76, 1111, 17), // "photosInVideoMode"
QT_MOC_LITERAL(77, 1129, 16), // "videoInPhotoMode"
QT_MOC_LITERAL(78, 1146, 7), // "isBasic"
QT_MOC_LITERAL(79, 1154, 11), // "storageFree"
QT_MOC_LITERAL(80, 1166, 14), // "storageFreeStr"
QT_MOC_LITERAL(81, 1181, 12), // "storageTotal"
QT_MOC_LITERAL(82, 1194, 16), // "batteryRemaining"
QT_MOC_LITERAL(83, 1211, 19), // "batteryRemainingStr"
QT_MOC_LITERAL(84, 1231, 13), // "paramComplete"
QT_MOC_LITERAL(85, 1245, 9), // "zoomLevel"
QT_MOC_LITERAL(86, 1255, 10), // "focusLevel"
QT_MOC_LITERAL(87, 1266, 12), // "exposureMode"
QT_MOC_LITERAL(88, 1279, 5), // "Fact*"
QT_MOC_LITERAL(89, 1285, 2), // "ev"
QT_MOC_LITERAL(90, 1288, 3), // "iso"
QT_MOC_LITERAL(91, 1292, 12), // "shutterSpeed"
QT_MOC_LITERAL(92, 1305, 8), // "aperture"
QT_MOC_LITERAL(93, 1314, 2), // "wb"
QT_MOC_LITERAL(94, 1317, 4), // "mode"
QT_MOC_LITERAL(95, 1322, 14), // "activeSettings"
QT_MOC_LITERAL(96, 1337, 11), // "videoStatus"
QT_MOC_LITERAL(97, 1349, 11), // "VideoStatus"
QT_MOC_LITERAL(98, 1361, 11), // "photoStatus"
QT_MOC_LITERAL(99, 1373, 11), // "PhotoStatus"
QT_MOC_LITERAL(100, 1385, 10), // "cameraMode"
QT_MOC_LITERAL(101, 1396, 10), // "CameraMode"
QT_MOC_LITERAL(102, 1407, 13), // "storageStatus"
QT_MOC_LITERAL(103, 1421, 13), // "StorageStatus"
QT_MOC_LITERAL(104, 1435, 10), // "photoLapse"
QT_MOC_LITERAL(105, 1446, 15), // "photoLapseCount"
QT_MOC_LITERAL(106, 1462, 9), // "photoMode"
QT_MOC_LITERAL(107, 1472, 9), // "PhotoMode"
QT_MOC_LITERAL(108, 1482, 13), // "currentStream"
QT_MOC_LITERAL(109, 1496, 10), // "autoStream"
QT_MOC_LITERAL(110, 1507, 7), // "streams"
QT_MOC_LITERAL(111, 1515, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(112, 1535, 21), // "currentStreamInstance"
QT_MOC_LITERAL(113, 1557, 19), // "QGCVideoStreamInfo*"
QT_MOC_LITERAL(114, 1577, 21), // "thermalStreamInstance"
QT_MOC_LITERAL(115, 1599, 10), // "recordTime"
QT_MOC_LITERAL(116, 1610, 13), // "recordTimeStr"
QT_MOC_LITERAL(117, 1624, 12), // "streamLabels"
QT_MOC_LITERAL(118, 1637, 11), // "thermalMode"
QT_MOC_LITERAL(119, 1649, 15), // "ThermalViewMode"
QT_MOC_LITERAL(120, 1665, 14), // "thermalOpacity"
QT_MOC_LITERAL(121, 1680, 18), // "CAM_MODE_UNDEFINED"
QT_MOC_LITERAL(122, 1699, 14), // "CAM_MODE_PHOTO"
QT_MOC_LITERAL(123, 1714, 14), // "CAM_MODE_VIDEO"
QT_MOC_LITERAL(124, 1729, 15), // "CAM_MODE_SURVEY"
QT_MOC_LITERAL(125, 1745, 28), // "VIDEO_CAPTURE_STATUS_STOPPED"
QT_MOC_LITERAL(126, 1774, 28), // "VIDEO_CAPTURE_STATUS_RUNNING"
QT_MOC_LITERAL(127, 1803, 25), // "VIDEO_CAPTURE_STATUS_LAST"
QT_MOC_LITERAL(128, 1829, 30), // "VIDEO_CAPTURE_STATUS_UNDEFINED"
QT_MOC_LITERAL(129, 1860, 18), // "PHOTO_CAPTURE_IDLE"
QT_MOC_LITERAL(130, 1879, 25), // "PHOTO_CAPTURE_IN_PROGRESS"
QT_MOC_LITERAL(131, 1905, 27), // "PHOTO_CAPTURE_INTERVAL_IDLE"
QT_MOC_LITERAL(132, 1933, 34), // "PHOTO_CAPTURE_INTERVAL_IN_PRO..."
QT_MOC_LITERAL(133, 1968, 18), // "PHOTO_CAPTURE_LAST"
QT_MOC_LITERAL(134, 1987, 30), // "PHOTO_CAPTURE_STATUS_UNDEFINED"
QT_MOC_LITERAL(135, 2018, 20), // "PHOTO_CAPTURE_SINGLE"
QT_MOC_LITERAL(136, 2039, 23), // "PHOTO_CAPTURE_TIMELAPSE"
QT_MOC_LITERAL(137, 2063, 13), // "STORAGE_EMPTY"
QT_MOC_LITERAL(138, 2077, 19), // "STORAGE_UNFORMATTED"
QT_MOC_LITERAL(139, 2097, 13), // "STORAGE_READY"
QT_MOC_LITERAL(140, 2111, 21), // "STORAGE_NOT_SUPPORTED"
QT_MOC_LITERAL(141, 2133, 11), // "THERMAL_OFF"
QT_MOC_LITERAL(142, 2145, 13), // "THERMAL_BLEND"
QT_MOC_LITERAL(143, 2159, 12), // "THERMAL_FULL"
QT_MOC_LITERAL(144, 2172, 11) // "THERMAL_PIP"

    },
    "QGCCameraControl\0infoChanged\0\0"
    "videoStatusChanged\0photoStatusChanged\0"
    "photoModeChanged\0photoLapseChanged\0"
    "photoLapseCountChanged\0cameraModeChanged\0"
    "activeSettingsChanged\0storageFreeChanged\0"
    "storageTotalChanged\0batteryRemainingChanged\0"
    "dataReady\0data\0parametersReady\0"
    "zoomLevelChanged\0focusLevelChanged\0"
    "streamsChanged\0currentStreamChanged\0"
    "thermalStreamChanged\0autoStreamChanged\0"
    "recordTimeChanged\0streamLabelsChanged\0"
    "thermalModeChanged\0thermalOpacityChanged\0"
    "storageStatusChanged\0_initWhenReady\0"
    "_requestCameraSettings\0_requestAllParameters\0"
    "_requestParamUpdates\0_requestCaptureStatus\0"
    "_requestStorageInfo\0_downloadFinished\0"
    "_mavCommandResult\0vehicleId\0component\0"
    "command\0result\0noReponseFromVehicle\0"
    "_dataReady\0_paramDone\0_streamTimeout\0"
    "_streamStatusTimeout\0_recTimerHandler\0"
    "_checkForVideoStreams\0setVideoMode\0"
    "setPhotoMode\0toggleMode\0takePhoto\0"
    "stopTakePhoto\0startVideo\0stopVideo\0"
    "toggleVideo\0resetSettings\0formatCard\0"
    "id\0stepZoom\0direction\0startZoom\0"
    "stopZoom\0stopStream\0resumeStream\0"
    "version\0modelName\0vendor\0firmwareVersion\0"
    "focalLength\0sensorSize\0resolution\0"
    "capturesVideo\0capturesPhotos\0hasModes\0"
    "hasZoom\0hasFocus\0hasVideoStream\0"
    "photosInVideoMode\0videoInPhotoMode\0"
    "isBasic\0storageFree\0storageFreeStr\0"
    "storageTotal\0batteryRemaining\0"
    "batteryRemainingStr\0paramComplete\0"
    "zoomLevel\0focusLevel\0exposureMode\0"
    "Fact*\0ev\0iso\0shutterSpeed\0aperture\0"
    "wb\0mode\0activeSettings\0videoStatus\0"
    "VideoStatus\0photoStatus\0PhotoStatus\0"
    "cameraMode\0CameraMode\0storageStatus\0"
    "StorageStatus\0photoLapse\0photoLapseCount\0"
    "photoMode\0PhotoMode\0currentStream\0"
    "autoStream\0streams\0QmlObjectListModel*\0"
    "currentStreamInstance\0QGCVideoStreamInfo*\0"
    "thermalStreamInstance\0recordTime\0"
    "recordTimeStr\0streamLabels\0thermalMode\0"
    "ThermalViewMode\0thermalOpacity\0"
    "CAM_MODE_UNDEFINED\0CAM_MODE_PHOTO\0"
    "CAM_MODE_VIDEO\0CAM_MODE_SURVEY\0"
    "VIDEO_CAPTURE_STATUS_STOPPED\0"
    "VIDEO_CAPTURE_STATUS_RUNNING\0"
    "VIDEO_CAPTURE_STATUS_LAST\0"
    "VIDEO_CAPTURE_STATUS_UNDEFINED\0"
    "PHOTO_CAPTURE_IDLE\0PHOTO_CAPTURE_IN_PROGRESS\0"
    "PHOTO_CAPTURE_INTERVAL_IDLE\0"
    "PHOTO_CAPTURE_INTERVAL_IN_PROGRESS\0"
    "PHOTO_CAPTURE_LAST\0PHOTO_CAPTURE_STATUS_UNDEFINED\0"
    "PHOTO_CAPTURE_SINGLE\0PHOTO_CAPTURE_TIMELAPSE\0"
    "STORAGE_EMPTY\0STORAGE_UNFORMATTED\0"
    "STORAGE_READY\0STORAGE_NOT_SUPPORTED\0"
    "THERMAL_OFF\0THERMAL_BLEND\0THERMAL_FULL\0"
    "THERMAL_PIP"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCCameraControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
      49,  358, // properties
       6,  554, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  284,    2, 0x06 /* Public */,
       3,    0,  285,    2, 0x06 /* Public */,
       4,    0,  286,    2, 0x06 /* Public */,
       5,    0,  287,    2, 0x06 /* Public */,
       6,    0,  288,    2, 0x06 /* Public */,
       7,    0,  289,    2, 0x06 /* Public */,
       8,    0,  290,    2, 0x06 /* Public */,
       9,    0,  291,    2, 0x06 /* Public */,
      10,    0,  292,    2, 0x06 /* Public */,
      11,    0,  293,    2, 0x06 /* Public */,
      12,    0,  294,    2, 0x06 /* Public */,
      13,    1,  295,    2, 0x06 /* Public */,
      15,    0,  298,    2, 0x06 /* Public */,
      16,    0,  299,    2, 0x06 /* Public */,
      17,    0,  300,    2, 0x06 /* Public */,
      18,    0,  301,    2, 0x06 /* Public */,
      19,    0,  302,    2, 0x06 /* Public */,
      20,    0,  303,    2, 0x06 /* Public */,
      21,    0,  304,    2, 0x06 /* Public */,
      22,    0,  305,    2, 0x06 /* Public */,
      23,    0,  306,    2, 0x06 /* Public */,
      24,    0,  307,    2, 0x06 /* Public */,
      25,    0,  308,    2, 0x06 /* Public */,
      26,    0,  309,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  310,    2, 0x09 /* Protected */,
      28,    0,  311,    2, 0x09 /* Protected */,
      29,    0,  312,    2, 0x09 /* Protected */,
      30,    0,  313,    2, 0x09 /* Protected */,
      31,    0,  314,    2, 0x09 /* Protected */,
      32,    0,  315,    2, 0x09 /* Protected */,
      33,    0,  316,    2, 0x09 /* Protected */,
      34,    5,  317,    2, 0x09 /* Protected */,
      40,    1,  328,    2, 0x09 /* Protected */,
      41,    0,  331,    2, 0x09 /* Protected */,
      42,    0,  332,    2, 0x09 /* Protected */,
      43,    0,  333,    2, 0x09 /* Protected */,
      44,    0,  334,    2, 0x09 /* Protected */,
      45,    0,  335,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      46,    0,  336,    2, 0x02 /* Public */,
      47,    0,  337,    2, 0x02 /* Public */,
      48,    0,  338,    2, 0x02 /* Public */,
      49,    0,  339,    2, 0x02 /* Public */,
      50,    0,  340,    2, 0x02 /* Public */,
      51,    0,  341,    2, 0x02 /* Public */,
      52,    0,  342,    2, 0x02 /* Public */,
      53,    0,  343,    2, 0x02 /* Public */,
      54,    0,  344,    2, 0x02 /* Public */,
      55,    1,  345,    2, 0x02 /* Public */,
      55,    0,  348,    2, 0x22 /* Public | MethodCloned */,
      57,    1,  349,    2, 0x02 /* Public */,
      59,    1,  352,    2, 0x02 /* Public */,
      60,    0,  355,    2, 0x02 /* Public */,
      61,    0,  356,    2, 0x02 /* Public */,
      62,    0,  357,    2, 0x02 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   14,
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
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   35,   36,   37,   38,   39,
    QMetaType::Void, QMetaType::QByteArray,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      63, QMetaType::Int, 0x00495001,
      64, QMetaType::QString, 0x00495001,
      65, QMetaType::QString, 0x00495001,
      66, QMetaType::QString, 0x00495001,
      67, QMetaType::QReal, 0x00495001,
      68, QMetaType::QSizeF, 0x00495001,
      69, QMetaType::QSize, 0x00495001,
      70, QMetaType::Bool, 0x00495001,
      71, QMetaType::Bool, 0x00495001,
      72, QMetaType::Bool, 0x00495001,
      73, QMetaType::Bool, 0x00495001,
      74, QMetaType::Bool, 0x00495001,
      75, QMetaType::Bool, 0x00495001,
      76, QMetaType::Bool, 0x00495001,
      77, QMetaType::Bool, 0x00495001,
      78, QMetaType::Bool, 0x00495001,
      79, QMetaType::UInt, 0x00495001,
      80, QMetaType::QString, 0x00495001,
      81, QMetaType::UInt, 0x00495001,
      82, QMetaType::Int, 0x00495001,
      83, QMetaType::QString, 0x00495001,
      84, QMetaType::Bool, 0x00495001,
      85, QMetaType::QReal, 0x00495103,
      86, QMetaType::QReal, 0x00495103,
      87, 0x80000000 | 88, 0x00495009,
      89, 0x80000000 | 88, 0x00495009,
      90, 0x80000000 | 88, 0x00495009,
      91, 0x80000000 | 88, 0x00495009,
      92, 0x80000000 | 88, 0x00495009,
      93, 0x80000000 | 88, 0x00495009,
      94, 0x80000000 | 88, 0x00495009,
      95, QMetaType::QStringList, 0x00495001,
      96, 0x80000000 | 97, 0x00495009,
      98, 0x80000000 | 99, 0x00495009,
     100, 0x80000000 | 101, 0x0049510b,
     102, 0x80000000 | 103, 0x00495009,
     104, QMetaType::QReal, 0x00495103,
     105, QMetaType::Int, 0x00495103,
     106, 0x80000000 | 107, 0x0049510b,
     108, QMetaType::Int, 0x00495103,
     109, QMetaType::Bool, 0x00495001,
     110, 0x80000000 | 111, 0x00495009,
     112, 0x80000000 | 113, 0x00495009,
     114, 0x80000000 | 113, 0x00495009,
     115, QMetaType::UInt, 0x00495001,
     116, QMetaType::QString, 0x00495001,
     117, QMetaType::QStringList, 0x00495001,
     118, 0x80000000 | 119, 0x0049510b,
     120, QMetaType::Double, 0x00495103,

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
       8,
       8,
       9,
      10,
      10,
      12,
      13,
      14,
      12,
      12,
      12,
      12,
      12,
      12,
      12,
       7,
       1,
       2,
       6,
      23,
       4,
       5,
       3,
      16,
      18,
      15,
      16,
      17,
      19,
      19,
      20,
      21,
      22,

 // enums: name, alias, flags, count, data
     101,  101, 0x0,    4,  584,
      97,   97, 0x0,    4,  592,
      99,   99, 0x0,    6,  600,
     107,  107, 0x0,    2,  612,
     103,  103, 0x0,    4,  616,
     119,  119, 0x0,    4,  624,

 // enum data: key, value
     121, uint(QGCCameraControl::CAM_MODE_UNDEFINED),
     122, uint(QGCCameraControl::CAM_MODE_PHOTO),
     123, uint(QGCCameraControl::CAM_MODE_VIDEO),
     124, uint(QGCCameraControl::CAM_MODE_SURVEY),
     125, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_STOPPED),
     126, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_RUNNING),
     127, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_LAST),
     128, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_UNDEFINED),
     129, uint(QGCCameraControl::PHOTO_CAPTURE_IDLE),
     130, uint(QGCCameraControl::PHOTO_CAPTURE_IN_PROGRESS),
     131, uint(QGCCameraControl::PHOTO_CAPTURE_INTERVAL_IDLE),
     132, uint(QGCCameraControl::PHOTO_CAPTURE_INTERVAL_IN_PROGRESS),
     133, uint(QGCCameraControl::PHOTO_CAPTURE_LAST),
     134, uint(QGCCameraControl::PHOTO_CAPTURE_STATUS_UNDEFINED),
     135, uint(QGCCameraControl::PHOTO_CAPTURE_SINGLE),
     136, uint(QGCCameraControl::PHOTO_CAPTURE_TIMELAPSE),
     137, uint(QGCCameraControl::STORAGE_EMPTY),
     138, uint(QGCCameraControl::STORAGE_UNFORMATTED),
     139, uint(QGCCameraControl::STORAGE_READY),
     140, uint(QGCCameraControl::STORAGE_NOT_SUPPORTED),
     141, uint(QGCCameraControl::THERMAL_OFF),
     142, uint(QGCCameraControl::THERMAL_BLEND),
     143, uint(QGCCameraControl::THERMAL_FULL),
     144, uint(QGCCameraControl::THERMAL_PIP),

       0        // eod
};

void QGCCameraControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoChanged(); break;
        case 1: _t->videoStatusChanged(); break;
        case 2: _t->photoStatusChanged(); break;
        case 3: _t->photoModeChanged(); break;
        case 4: _t->photoLapseChanged(); break;
        case 5: _t->photoLapseCountChanged(); break;
        case 6: _t->cameraModeChanged(); break;
        case 7: _t->activeSettingsChanged(); break;
        case 8: _t->storageFreeChanged(); break;
        case 9: _t->storageTotalChanged(); break;
        case 10: _t->batteryRemainingChanged(); break;
        case 11: _t->dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 12: _t->parametersReady(); break;
        case 13: _t->zoomLevelChanged(); break;
        case 14: _t->focusLevelChanged(); break;
        case 15: _t->streamsChanged(); break;
        case 16: _t->currentStreamChanged(); break;
        case 17: _t->thermalStreamChanged(); break;
        case 18: _t->autoStreamChanged(); break;
        case 19: _t->recordTimeChanged(); break;
        case 20: _t->streamLabelsChanged(); break;
        case 21: _t->thermalModeChanged(); break;
        case 22: _t->thermalOpacityChanged(); break;
        case 23: _t->storageStatusChanged(); break;
        case 24: _t->_initWhenReady(); break;
        case 25: _t->_requestCameraSettings(); break;
        case 26: _t->_requestAllParameters(); break;
        case 27: _t->_requestParamUpdates(); break;
        case 28: _t->_requestCaptureStatus(); break;
        case 29: _t->_requestStorageInfo(); break;
        case 30: _t->_downloadFinished(); break;
        case 31: _t->_mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 32: _t->_dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 33: _t->_paramDone(); break;
        case 34: _t->_streamTimeout(); break;
        case 35: _t->_streamStatusTimeout(); break;
        case 36: _t->_recTimerHandler(); break;
        case 37: _t->_checkForVideoStreams(); break;
        case 38: _t->setVideoMode(); break;
        case 39: _t->setPhotoMode(); break;
        case 40: _t->toggleMode(); break;
        case 41: { bool _r = _t->takePhoto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { bool _r = _t->stopTakePhoto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->startVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->stopVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->toggleVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->resetSettings(); break;
        case 47: _t->formatCard((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->formatCard(); break;
        case 49: _t->stepZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->startZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->stopZoom(); break;
        case 52: _t->stopStream(); break;
        case 53: _t->resumeStream(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::infoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::videoStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoLapseChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoLapseCountChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::cameraModeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::activeSettingsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::storageFreeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::storageTotalChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::batteryRemainingChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::dataReady)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::parametersReady)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::zoomLevelChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::focusLevelChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::streamsChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::currentStreamChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::thermalStreamChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::autoStreamChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::recordTimeChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::streamLabelsChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::thermalModeChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::thermalOpacityChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::storageStatusChanged)) {
                *result = 23;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 30:
        case 29:
        case 28:
        case 27:
        case 26:
        case 25:
        case 24:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 43:
        case 42:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCVideoStreamInfo* >(); break;
        case 41:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->version(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->modelName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->vendor(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->firmwareVersion(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->focalLength(); break;
        case 5: *reinterpret_cast< QSizeF*>(_v) = _t->sensorSize(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = _t->resolution(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->capturesVideo(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->capturesPhotos(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hasModes(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->hasZoom(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->hasFocus(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->hasVideoStream(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->photosInVideoMode(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->videoInPhotoMode(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->isBasic(); break;
        case 16: *reinterpret_cast< quint32*>(_v) = _t->storageFree(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->storageFreeStr(); break;
        case 18: *reinterpret_cast< quint32*>(_v) = _t->storageTotal(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->batteryRemaining(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->batteryRemainingStr(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->paramComplete(); break;
        case 22: *reinterpret_cast< qreal*>(_v) = _t->zoomLevel(); break;
        case 23: *reinterpret_cast< qreal*>(_v) = _t->focusLevel(); break;
        case 24: *reinterpret_cast< Fact**>(_v) = _t->exposureMode(); break;
        case 25: *reinterpret_cast< Fact**>(_v) = _t->ev(); break;
        case 26: *reinterpret_cast< Fact**>(_v) = _t->iso(); break;
        case 27: *reinterpret_cast< Fact**>(_v) = _t->shutterSpeed(); break;
        case 28: *reinterpret_cast< Fact**>(_v) = _t->aperture(); break;
        case 29: *reinterpret_cast< Fact**>(_v) = _t->wb(); break;
        case 30: *reinterpret_cast< Fact**>(_v) = _t->mode(); break;
        case 31: *reinterpret_cast< QStringList*>(_v) = _t->activeSettings(); break;
        case 32: *reinterpret_cast< VideoStatus*>(_v) = _t->videoStatus(); break;
        case 33: *reinterpret_cast< PhotoStatus*>(_v) = _t->photoStatus(); break;
        case 34: *reinterpret_cast< CameraMode*>(_v) = _t->cameraMode(); break;
        case 35: *reinterpret_cast< StorageStatus*>(_v) = _t->storageStatus(); break;
        case 36: *reinterpret_cast< qreal*>(_v) = _t->photoLapse(); break;
        case 37: *reinterpret_cast< int*>(_v) = _t->photoLapseCount(); break;
        case 38: *reinterpret_cast< PhotoMode*>(_v) = _t->photoMode(); break;
        case 39: *reinterpret_cast< int*>(_v) = _t->currentStream(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->autoStream(); break;
        case 41: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->streams(); break;
        case 42: *reinterpret_cast< QGCVideoStreamInfo**>(_v) = _t->currentStreamInstance(); break;
        case 43: *reinterpret_cast< QGCVideoStreamInfo**>(_v) = _t->thermalStreamInstance(); break;
        case 44: *reinterpret_cast< quint32*>(_v) = _t->recordTime(); break;
        case 45: *reinterpret_cast< QString*>(_v) = _t->recordTimeStr(); break;
        case 46: *reinterpret_cast< QStringList*>(_v) = _t->streamLabels(); break;
        case 47: *reinterpret_cast< ThermalViewMode*>(_v) = _t->thermalMode(); break;
        case 48: *reinterpret_cast< double*>(_v) = _t->thermalOpacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 22: _t->setZoomLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 23: _t->setFocusLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 34: _t->setCameraMode(*reinterpret_cast< CameraMode*>(_v)); break;
        case 36: _t->setPhotoLapse(*reinterpret_cast< qreal*>(_v)); break;
        case 37: _t->setPhotoLapseCount(*reinterpret_cast< int*>(_v)); break;
        case 38: _t->setPhotoMode(*reinterpret_cast< PhotoMode*>(_v)); break;
        case 39: _t->setCurrentStream(*reinterpret_cast< int*>(_v)); break;
        case 47: _t->setThermalMode(*reinterpret_cast< ThermalViewMode*>(_v)); break;
        case 48: _t->setThermalOpacity(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCCameraControl::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_QGCCameraControl.data,
    qt_meta_data_QGCCameraControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCCameraControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCameraControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCameraControl.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int QGCCameraControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 49;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCCameraControl::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCCameraControl::videoStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCCameraControl::photoStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCCameraControl::photoModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCCameraControl::photoLapseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCCameraControl::photoLapseCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGCCameraControl::cameraModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGCCameraControl::activeSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGCCameraControl::storageFreeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGCCameraControl::storageTotalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCCameraControl::batteryRemainingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QGCCameraControl::dataReady(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QGCCameraControl::parametersReady()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QGCCameraControl::zoomLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QGCCameraControl::focusLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QGCCameraControl::streamsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QGCCameraControl::currentStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QGCCameraControl::thermalStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QGCCameraControl::autoStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void QGCCameraControl::recordTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QGCCameraControl::streamLabelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void QGCCameraControl::thermalModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void QGCCameraControl::thermalOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void QGCCameraControl::storageStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
