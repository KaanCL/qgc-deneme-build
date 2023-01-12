/****************************************************************************
** Meta object code from reading C++ file 'Vehicle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../qgroundcontrol/src/Vehicle/Vehicle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vehicle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Vehicle_t {
    QByteArrayData data[475];
    char stringdata0[7875];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Vehicle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Vehicle_t qt_meta_stringdata_Vehicle = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Vehicle"
QT_MOC_LITERAL(1, 8, 17), // "coordinateChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 42, 10), // "coordinate"
QT_MOC_LITERAL(5, 53, 22), // "joystickEnabledChanged"
QT_MOC_LITERAL(6, 76, 7), // "enabled"
QT_MOC_LITERAL(7, 84, 22), // "mavlinkMessageReceived"
QT_MOC_LITERAL(8, 107, 17), // "mavlink_message_t"
QT_MOC_LITERAL(9, 125, 7), // "message"
QT_MOC_LITERAL(10, 133, 19), // "homePositionChanged"
QT_MOC_LITERAL(11, 153, 12), // "homePosition"
QT_MOC_LITERAL(12, 166, 20), // "armedPositionChanged"
QT_MOC_LITERAL(13, 187, 12), // "armedChanged"
QT_MOC_LITERAL(14, 200, 5), // "armed"
QT_MOC_LITERAL(15, 206, 17), // "flightModeChanged"
QT_MOC_LITERAL(16, 224, 10), // "flightMode"
QT_MOC_LITERAL(17, 235, 13), // "flyingChanged"
QT_MOC_LITERAL(18, 249, 6), // "flying"
QT_MOC_LITERAL(19, 256, 14), // "landingChanged"
QT_MOC_LITERAL(20, 271, 7), // "landing"
QT_MOC_LITERAL(21, 279, 17), // "guidedModeChanged"
QT_MOC_LITERAL(22, 297, 10), // "guidedMode"
QT_MOC_LITERAL(23, 308, 22), // "vtolInFwdFlightChanged"
QT_MOC_LITERAL(24, 331, 15), // "vtolInFwdFlight"
QT_MOC_LITERAL(25, 347, 18), // "prearmErrorChanged"
QT_MOC_LITERAL(26, 366, 11), // "prearmError"
QT_MOC_LITERAL(27, 378, 19), // "soloFirmwareChanged"
QT_MOC_LITERAL(28, 398, 12), // "soloFirmware"
QT_MOC_LITERAL(29, 411, 25), // "defaultCruiseSpeedChanged"
QT_MOC_LITERAL(30, 437, 11), // "cruiseSpeed"
QT_MOC_LITERAL(31, 449, 24), // "defaultHoverSpeedChanged"
QT_MOC_LITERAL(32, 474, 10), // "hoverSpeed"
QT_MOC_LITERAL(33, 485, 19), // "firmwareTypeChanged"
QT_MOC_LITERAL(34, 505, 18), // "vehicleTypeChanged"
QT_MOC_LITERAL(35, 524, 20), // "cameraManagerChanged"
QT_MOC_LITERAL(36, 545, 17), // "hobbsMeterChanged"
QT_MOC_LITERAL(37, 563, 24), // "capabilitiesKnownChanged"
QT_MOC_LITERAL(38, 588, 17), // "capabilitiesKnown"
QT_MOC_LITERAL(39, 606, 33), // "initialPlanRequestCompleteCha..."
QT_MOC_LITERAL(40, 640, 26), // "initialPlanRequestComplete"
QT_MOC_LITERAL(41, 667, 21), // "capabilityBitsChanged"
QT_MOC_LITERAL(42, 689, 8), // "uint64_t"
QT_MOC_LITERAL(43, 698, 14), // "capabilityBits"
QT_MOC_LITERAL(44, 713, 21), // "toolIndicatorsChanged"
QT_MOC_LITERAL(45, 735, 21), // "modeIndicatorsChanged"
QT_MOC_LITERAL(46, 757, 19), // "textMessageReceived"
QT_MOC_LITERAL(47, 777, 5), // "uasid"
QT_MOC_LITERAL(48, 783, 11), // "componentid"
QT_MOC_LITERAL(49, 795, 8), // "severity"
QT_MOC_LITERAL(50, 804, 4), // "text"
QT_MOC_LITERAL(51, 809, 24), // "calibrationEventReceived"
QT_MOC_LITERAL(52, 834, 43), // "QSharedPointer<events::parser..."
QT_MOC_LITERAL(53, 878, 5), // "event"
QT_MOC_LITERAL(54, 884, 21), // "checkListStateChanged"
QT_MOC_LITERAL(55, 906, 23), // "messagesReceivedChanged"
QT_MOC_LITERAL(56, 930, 19), // "messagesSentChanged"
QT_MOC_LITERAL(57, 950, 19), // "messagesLostChanged"
QT_MOC_LITERAL(58, 970, 18), // "messageTypeChanged"
QT_MOC_LITERAL(59, 989, 22), // "newMessageCountChanged"
QT_MOC_LITERAL(60, 1012, 19), // "messageCountChanged"
QT_MOC_LITERAL(61, 1032, 24), // "formattedMessagesChanged"
QT_MOC_LITERAL(62, 1057, 19), // "newFormattedMessage"
QT_MOC_LITERAL(63, 1077, 16), // "formattedMessage"
QT_MOC_LITERAL(64, 1094, 18), // "latestErrorChanged"
QT_MOC_LITERAL(65, 1113, 16), // "longitudeChanged"
QT_MOC_LITERAL(66, 1130, 20), // "currentConfigChanged"
QT_MOC_LITERAL(67, 1151, 21), // "flowImageIndexChanged"
QT_MOC_LITERAL(68, 1173, 13), // "rcRSSIChanged"
QT_MOC_LITERAL(69, 1187, 6), // "rcRSSI"
QT_MOC_LITERAL(70, 1194, 21), // "telemetryRRSSIChanged"
QT_MOC_LITERAL(71, 1216, 5), // "value"
QT_MOC_LITERAL(72, 1222, 21), // "telemetryLRSSIChanged"
QT_MOC_LITERAL(73, 1244, 24), // "telemetryRXErrorsChanged"
QT_MOC_LITERAL(74, 1269, 21), // "telemetryFixedChanged"
QT_MOC_LITERAL(75, 1291, 24), // "telemetryTXBufferChanged"
QT_MOC_LITERAL(76, 1316, 22), // "telemetryLNoiseChanged"
QT_MOC_LITERAL(77, 1339, 22), // "telemetryRNoiseChanged"
QT_MOC_LITERAL(78, 1362, 17), // "autoDisarmChanged"
QT_MOC_LITERAL(79, 1380, 18), // "flightModesChanged"
QT_MOC_LITERAL(80, 1399, 25), // "sensorsPresentBitsChanged"
QT_MOC_LITERAL(81, 1425, 18), // "sensorsPresentBits"
QT_MOC_LITERAL(82, 1444, 25), // "sensorsEnabledBitsChanged"
QT_MOC_LITERAL(83, 1470, 18), // "sensorsEnabledBits"
QT_MOC_LITERAL(84, 1489, 24), // "sensorsHealthBitsChanged"
QT_MOC_LITERAL(85, 1514, 17), // "sensorsHealthBits"
QT_MOC_LITERAL(86, 1532, 27), // "sensorsUnhealthyBitsChanged"
QT_MOC_LITERAL(87, 1560, 20), // "sensorsUnhealthyBits"
QT_MOC_LITERAL(88, 1581, 18), // "orbitActiveChanged"
QT_MOC_LITERAL(89, 1600, 11), // "orbitActive"
QT_MOC_LITERAL(90, 1612, 26), // "readyToFlyAvailableChanged"
QT_MOC_LITERAL(91, 1639, 19), // "readyToFlyAvailable"
QT_MOC_LITERAL(92, 1659, 17), // "readyToFlyChanged"
QT_MOC_LITERAL(93, 1677, 9), // "readyToFy"
QT_MOC_LITERAL(94, 1687, 24), // "allSensorsHealthyChanged"
QT_MOC_LITERAL(95, 1712, 17), // "allSensorsHealthy"
QT_MOC_LITERAL(96, 1730, 21), // "requiresGpsFixChanged"
QT_MOC_LITERAL(97, 1752, 21), // "haveMRSpeedLimChanged"
QT_MOC_LITERAL(98, 1774, 21), // "haveFWSpeedLimChanged"
QT_MOC_LITERAL(99, 1796, 22), // "firmwareVersionChanged"
QT_MOC_LITERAL(100, 1819, 28), // "firmwareCustomVersionChanged"
QT_MOC_LITERAL(101, 1848, 14), // "gitHashChanged"
QT_MOC_LITERAL(102, 1863, 4), // "hash"
QT_MOC_LITERAL(103, 1868, 17), // "vehicleUIDChanged"
QT_MOC_LITERAL(104, 1886, 19), // "loadProgressChanged"
QT_MOC_LITERAL(105, 1906, 17), // "rcChannelsChanged"
QT_MOC_LITERAL(106, 1924, 12), // "channelCount"
QT_MOC_LITERAL(107, 1937, 19), // "int[cMaxRcChannels]"
QT_MOC_LITERAL(108, 1957, 9), // "pwmValues"
QT_MOC_LITERAL(109, 1967, 24), // "remoteControlRSSIChanged"
QT_MOC_LITERAL(110, 1992, 7), // "uint8_t"
QT_MOC_LITERAL(111, 2000, 4), // "rssi"
QT_MOC_LITERAL(112, 2005, 13), // "mavlinkRawImu"
QT_MOC_LITERAL(113, 2019, 17), // "mavlinkScaledImu1"
QT_MOC_LITERAL(114, 2037, 17), // "mavlinkScaledImu2"
QT_MOC_LITERAL(115, 2055, 17), // "mavlinkScaledImu3"
QT_MOC_LITERAL(116, 2073, 14), // "mavlinkLogData"
QT_MOC_LITERAL(117, 2088, 8), // "Vehicle*"
QT_MOC_LITERAL(118, 2097, 7), // "vehicle"
QT_MOC_LITERAL(119, 2105, 13), // "target_system"
QT_MOC_LITERAL(120, 2119, 16), // "target_component"
QT_MOC_LITERAL(121, 2136, 8), // "uint16_t"
QT_MOC_LITERAL(122, 2145, 8), // "sequence"
QT_MOC_LITERAL(123, 2154, 13), // "first_message"
QT_MOC_LITERAL(124, 2168, 4), // "data"
QT_MOC_LITERAL(125, 2173, 5), // "acked"
QT_MOC_LITERAL(126, 2179, 16), // "mavCommandResult"
QT_MOC_LITERAL(127, 2196, 9), // "vehicleId"
QT_MOC_LITERAL(128, 2206, 15), // "targetComponent"
QT_MOC_LITERAL(129, 2222, 7), // "command"
QT_MOC_LITERAL(130, 2230, 9), // "ackResult"
QT_MOC_LITERAL(131, 2240, 11), // "failureCode"
QT_MOC_LITERAL(132, 2252, 20), // "mavlinkSerialControl"
QT_MOC_LITERAL(133, 2273, 6), // "device"
QT_MOC_LITERAL(134, 2280, 5), // "flags"
QT_MOC_LITERAL(135, 2286, 7), // "timeout"
QT_MOC_LITERAL(136, 2294, 8), // "uint32_t"
QT_MOC_LITERAL(137, 2303, 8), // "baudrate"
QT_MOC_LITERAL(138, 2312, 22), // "requestProtocolVersion"
QT_MOC_LITERAL(139, 2335, 7), // "version"
QT_MOC_LITERAL(140, 2343, 20), // "mavlinkStatusChanged"
QT_MOC_LITERAL(141, 2364, 17), // "gimbalRollChanged"
QT_MOC_LITERAL(142, 2382, 18), // "gimbalPitchChanged"
QT_MOC_LITERAL(143, 2401, 16), // "gimbalYawChanged"
QT_MOC_LITERAL(144, 2418, 17), // "gimbalDataChanged"
QT_MOC_LITERAL(145, 2436, 19), // "isROIEnabledChanged"
QT_MOC_LITERAL(146, 2456, 22), // "initialConnectComplete"
QT_MOC_LITERAL(147, 2479, 25), // "sensorsParametersResetAck"
QT_MOC_LITERAL(148, 2505, 7), // "success"
QT_MOC_LITERAL(149, 2513, 18), // "setVtolInFwdFlight"
QT_MOC_LITERAL(150, 2532, 34), // "_offlineFirmwareTypeSettingCh..."
QT_MOC_LITERAL(151, 2567, 15), // "varFirmwareType"
QT_MOC_LITERAL(152, 2583, 33), // "_offlineVehicleTypeSettingCha..."
QT_MOC_LITERAL(153, 2617, 14), // "varVehicleType"
QT_MOC_LITERAL(154, 2632, 23), // "_mavlinkMessageReceived"
QT_MOC_LITERAL(155, 2656, 14), // "LinkInterface*"
QT_MOC_LITERAL(156, 2671, 4), // "link"
QT_MOC_LITERAL(157, 2676, 24), // "_sendMessageMultipleNext"
QT_MOC_LITERAL(158, 2701, 16), // "_parametersReady"
QT_MOC_LITERAL(159, 2718, 15), // "parametersReady"
QT_MOC_LITERAL(160, 2734, 25), // "_remoteControlRSSIChanged"
QT_MOC_LITERAL(161, 2760, 24), // "_handleFlightModeChanged"
QT_MOC_LITERAL(162, 2785, 21), // "_announceArmedChanged"
QT_MOC_LITERAL(163, 2807, 33), // "_offlineCruiseSpeedSettingCha..."
QT_MOC_LITERAL(164, 2841, 32), // "_offlineHoverSpeedSettingChanged"
QT_MOC_LITERAL(165, 2874, 18), // "_handleTextMessage"
QT_MOC_LITERAL(166, 2893, 8), // "newCount"
QT_MOC_LITERAL(167, 2902, 26), // "_handletextMessageReceived"
QT_MOC_LITERAL(168, 2929, 11), // "UASMessage*"
QT_MOC_LITERAL(169, 2941, 24), // "_imageProtocolImageReady"
QT_MOC_LITERAL(170, 2966, 19), // "_prearmErrorTimeout"
QT_MOC_LITERAL(171, 2986, 25), // "_firstMissionLoadComplete"
QT_MOC_LITERAL(172, 3012, 26), // "_firstGeoFenceLoadComplete"
QT_MOC_LITERAL(173, 3039, 28), // "_firstRallyPointLoadComplete"
QT_MOC_LITERAL(174, 3068, 35), // "_sendMavCommandResponseTimeou..."
QT_MOC_LITERAL(175, 3104, 25), // "_clearCameraTriggerPoints"
QT_MOC_LITERAL(176, 3130, 28), // "_updateDistanceHeadingToHome"
QT_MOC_LITERAL(177, 3159, 23), // "_updateMissionItemIndex"
QT_MOC_LITERAL(178, 3183, 22), // "_updateHeadingToNextWP"
QT_MOC_LITERAL(179, 3206, 20), // "_updateDistanceToGCS"
QT_MOC_LITERAL(180, 3227, 16), // "_updateHomepoint"
QT_MOC_LITERAL(181, 3244, 17), // "_updateHobbsMeter"
QT_MOC_LITERAL(182, 3262, 19), // "_vehicleParamLoaded"
QT_MOC_LITERAL(183, 3282, 5), // "ready"
QT_MOC_LITERAL(184, 3288, 21), // "_sendQGCTimeToVehicle"
QT_MOC_LITERAL(185, 3310, 21), // "_mavlinkMessageStatus"
QT_MOC_LITERAL(186, 3332, 5), // "uasId"
QT_MOC_LITERAL(187, 3338, 9), // "totalSent"
QT_MOC_LITERAL(188, 3348, 13), // "totalReceived"
QT_MOC_LITERAL(189, 3362, 9), // "totalLoss"
QT_MOC_LITERAL(190, 3372, 11), // "lossPercent"
QT_MOC_LITERAL(191, 3384, 14), // "_trafficUpdate"
QT_MOC_LITERAL(192, 3399, 5), // "alert"
QT_MOC_LITERAL(193, 3405, 10), // "traffic_id"
QT_MOC_LITERAL(194, 3416, 10), // "vehicle_id"
QT_MOC_LITERAL(195, 3427, 8), // "location"
QT_MOC_LITERAL(196, 3436, 7), // "heading"
QT_MOC_LITERAL(197, 3444, 22), // "_orbitTelemetryTimeout"
QT_MOC_LITERAL(198, 3467, 17), // "_updateFlightTime"
QT_MOC_LITERAL(199, 3485, 18), // "_gotProgressUpdate"
QT_MOC_LITERAL(200, 3504, 13), // "progressValue"
QT_MOC_LITERAL(201, 3518, 13), // "resetCounters"
QT_MOC_LITERAL(202, 3532, 13), // "resetMessages"
QT_MOC_LITERAL(203, 3546, 26), // "virtualTabletJoystickValue"
QT_MOC_LITERAL(204, 3573, 4), // "roll"
QT_MOC_LITERAL(205, 3578, 5), // "pitch"
QT_MOC_LITERAL(206, 3584, 3), // "yaw"
QT_MOC_LITERAL(207, 3588, 6), // "thrust"
QT_MOC_LITERAL(208, 3595, 13), // "guidedModeRTL"
QT_MOC_LITERAL(209, 3609, 8), // "smartRTL"
QT_MOC_LITERAL(210, 3618, 14), // "guidedModeLand"
QT_MOC_LITERAL(211, 3633, 17), // "guidedModeTakeoff"
QT_MOC_LITERAL(212, 3651, 16), // "altitudeRelative"
QT_MOC_LITERAL(213, 3668, 22), // "minimumTakeoffAltitude"
QT_MOC_LITERAL(214, 3691, 32), // "maximumHorizontalSpeedMultirotor"
QT_MOC_LITERAL(215, 3724, 25), // "maximumEquivalentAirspeed"
QT_MOC_LITERAL(216, 3750, 25), // "minimumEquivalentAirspeed"
QT_MOC_LITERAL(217, 3776, 22), // "guidedModeGotoLocation"
QT_MOC_LITERAL(218, 3799, 9), // "gotoCoord"
QT_MOC_LITERAL(219, 3809, 24), // "guidedModeChangeAltitude"
QT_MOC_LITERAL(220, 3834, 14), // "altitudeChange"
QT_MOC_LITERAL(221, 3849, 12), // "pauseVehicle"
QT_MOC_LITERAL(222, 3862, 27), // "guidedModeChangeGroundSpeed"
QT_MOC_LITERAL(223, 3890, 11), // "groundspeed"
QT_MOC_LITERAL(224, 3902, 34), // "guidedModeChangeEquivalentAir..."
QT_MOC_LITERAL(225, 3937, 8), // "airspeed"
QT_MOC_LITERAL(226, 3946, 15), // "guidedModeOrbit"
QT_MOC_LITERAL(227, 3962, 11), // "centerCoord"
QT_MOC_LITERAL(228, 3974, 6), // "radius"
QT_MOC_LITERAL(229, 3981, 12), // "amslAltitude"
QT_MOC_LITERAL(230, 3994, 13), // "guidedModeROI"
QT_MOC_LITERAL(231, 4008, 17), // "stopGuidedModeROI"
QT_MOC_LITERAL(232, 4026, 13), // "emergencyStop"
QT_MOC_LITERAL(233, 4040, 12), // "abortLanding"
QT_MOC_LITERAL(234, 4053, 16), // "climbOutAltitude"
QT_MOC_LITERAL(235, 4070, 12), // "startMission"
QT_MOC_LITERAL(236, 4083, 25), // "setCurrentMissionSequence"
QT_MOC_LITERAL(237, 4109, 3), // "seq"
QT_MOC_LITERAL(238, 4113, 13), // "rebootVehicle"
QT_MOC_LITERAL(239, 4127, 13), // "clearMessages"
QT_MOC_LITERAL(240, 4141, 8), // "sendPlan"
QT_MOC_LITERAL(241, 4150, 8), // "planFile"
QT_MOC_LITERAL(242, 4159, 14), // "versionCompare"
QT_MOC_LITERAL(243, 4174, 8), // "QString&"
QT_MOC_LITERAL(244, 4183, 7), // "compare"
QT_MOC_LITERAL(245, 4191, 5), // "major"
QT_MOC_LITERAL(246, 4197, 5), // "minor"
QT_MOC_LITERAL(247, 4203, 5), // "patch"
QT_MOC_LITERAL(248, 4209, 9), // "motorTest"
QT_MOC_LITERAL(249, 4219, 5), // "motor"
QT_MOC_LITERAL(250, 4225, 7), // "percent"
QT_MOC_LITERAL(251, 4233, 11), // "timeoutSecs"
QT_MOC_LITERAL(252, 4245, 9), // "showError"
QT_MOC_LITERAL(253, 4255, 25), // "setPIDTuningTelemetryMode"
QT_MOC_LITERAL(254, 4281, 22), // "PIDTuningTelemetryMode"
QT_MOC_LITERAL(255, 4304, 4), // "mode"
QT_MOC_LITERAL(256, 4309, 18), // "gimbalControlValue"
QT_MOC_LITERAL(257, 4328, 15), // "gimbalPitchStep"
QT_MOC_LITERAL(258, 4344, 9), // "direction"
QT_MOC_LITERAL(259, 4354, 13), // "gimbalYawStep"
QT_MOC_LITERAL(260, 4368, 12), // "centerGimbal"
QT_MOC_LITERAL(261, 4381, 8), // "forceArm"
QT_MOC_LITERAL(262, 4390, 14), // "sendParamMapRC"
QT_MOC_LITERAL(263, 4405, 9), // "paramName"
QT_MOC_LITERAL(264, 4415, 5), // "scale"
QT_MOC_LITERAL(265, 4421, 11), // "centerValue"
QT_MOC_LITERAL(266, 4433, 8), // "tuningID"
QT_MOC_LITERAL(267, 4442, 8), // "minValue"
QT_MOC_LITERAL(268, 4451, 8), // "maxValue"
QT_MOC_LITERAL(269, 4460, 18), // "clearAllParamMapRC"
QT_MOC_LITERAL(270, 4479, 12), // "closeVehicle"
QT_MOC_LITERAL(271, 4492, 19), // "triggerSimpleCamera"
QT_MOC_LITERAL(272, 4512, 15), // "flashBootloader"
QT_MOC_LITERAL(273, 4528, 15), // "vehicleTypeName"
QT_MOC_LITERAL(274, 4544, 11), // "sendCommand"
QT_MOC_LITERAL(275, 4556, 6), // "compId"
QT_MOC_LITERAL(276, 4563, 6), // "param1"
QT_MOC_LITERAL(277, 4570, 6), // "param2"
QT_MOC_LITERAL(278, 4577, 6), // "param3"
QT_MOC_LITERAL(279, 4584, 6), // "param4"
QT_MOC_LITERAL(280, 4591, 6), // "param5"
QT_MOC_LITERAL(281, 4598, 6), // "param6"
QT_MOC_LITERAL(282, 4605, 6), // "param7"
QT_MOC_LITERAL(283, 4612, 2), // "id"
QT_MOC_LITERAL(284, 4615, 9), // "autopilot"
QT_MOC_LITERAL(285, 4625, 16), // "AutoPilotPlugin*"
QT_MOC_LITERAL(286, 4642, 13), // "armedPosition"
QT_MOC_LITERAL(287, 4656, 10), // "autoDisarm"
QT_MOC_LITERAL(288, 4667, 22), // "flightModeSetAvailable"
QT_MOC_LITERAL(289, 4690, 11), // "flightModes"
QT_MOC_LITERAL(290, 4702, 24), // "extraJoystickFlightModes"
QT_MOC_LITERAL(291, 4727, 16), // "trajectoryPoints"
QT_MOC_LITERAL(292, 4744, 17), // "TrajectoryPoints*"
QT_MOC_LITERAL(293, 4762, 19), // "cameraTriggerPoints"
QT_MOC_LITERAL(294, 4782, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(295, 4802, 8), // "latitude"
QT_MOC_LITERAL(296, 4811, 9), // "longitude"
QT_MOC_LITERAL(297, 4821, 15), // "messageTypeNone"
QT_MOC_LITERAL(298, 4837, 17), // "messageTypeNormal"
QT_MOC_LITERAL(299, 4855, 18), // "messageTypeWarning"
QT_MOC_LITERAL(300, 4874, 16), // "messageTypeError"
QT_MOC_LITERAL(301, 4891, 15), // "newMessageCount"
QT_MOC_LITERAL(302, 4907, 12), // "messageCount"
QT_MOC_LITERAL(303, 4920, 17), // "formattedMessages"
QT_MOC_LITERAL(304, 4938, 11), // "latestError"
QT_MOC_LITERAL(305, 4950, 15), // "joystickEnabled"
QT_MOC_LITERAL(306, 4966, 14), // "flowImageIndex"
QT_MOC_LITERAL(307, 4981, 11), // "px4Firmware"
QT_MOC_LITERAL(308, 4993, 11), // "apmFirmware"
QT_MOC_LITERAL(309, 5005, 15), // "genericFirmware"
QT_MOC_LITERAL(310, 5021, 16), // "messagesReceived"
QT_MOC_LITERAL(311, 5038, 12), // "messagesSent"
QT_MOC_LITERAL(312, 5051, 12), // "messagesLost"
QT_MOC_LITERAL(313, 5064, 7), // "airship"
QT_MOC_LITERAL(314, 5072, 9), // "fixedWing"
QT_MOC_LITERAL(315, 5082, 10), // "multiRotor"
QT_MOC_LITERAL(316, 5093, 4), // "vtol"
QT_MOC_LITERAL(317, 5098, 5), // "rover"
QT_MOC_LITERAL(318, 5104, 3), // "sub"
QT_MOC_LITERAL(319, 5108, 30), // "supportsThrottleModeCenterZero"
QT_MOC_LITERAL(320, 5139, 22), // "supportsNegativeThrust"
QT_MOC_LITERAL(321, 5162, 16), // "supportsJSButton"
QT_MOC_LITERAL(322, 5179, 13), // "supportsRadio"
QT_MOC_LITERAL(323, 5193, 25), // "supportsMotorInterference"
QT_MOC_LITERAL(324, 5219, 10), // "motorCount"
QT_MOC_LITERAL(325, 5230, 13), // "coaxialMotors"
QT_MOC_LITERAL(326, 5244, 13), // "xConfigMotors"
QT_MOC_LITERAL(327, 5258, 23), // "isOfflineEditingVehicle"
QT_MOC_LITERAL(328, 5282, 16), // "brandImageIndoor"
QT_MOC_LITERAL(329, 5299, 17), // "brandImageOutdoor"
QT_MOC_LITERAL(330, 5317, 17), // "missionFlightMode"
QT_MOC_LITERAL(331, 5335, 15), // "pauseFlightMode"
QT_MOC_LITERAL(332, 5351, 13), // "rtlFlightMode"
QT_MOC_LITERAL(333, 5365, 18), // "smartRTLFlightMode"
QT_MOC_LITERAL(334, 5384, 16), // "supportsSmartRTL"
QT_MOC_LITERAL(335, 5401, 14), // "landFlightMode"
QT_MOC_LITERAL(336, 5416, 21), // "takeControlFlightMode"
QT_MOC_LITERAL(337, 5438, 16), // "followFlightMode"
QT_MOC_LITERAL(338, 5455, 18), // "firmwareTypeString"
QT_MOC_LITERAL(339, 5474, 17), // "vehicleTypeString"
QT_MOC_LITERAL(340, 5492, 18), // "vehicleImageOpaque"
QT_MOC_LITERAL(341, 5511, 19), // "vehicleImageOutline"
QT_MOC_LITERAL(342, 5531, 19), // "vehicleImageCompass"
QT_MOC_LITERAL(343, 5551, 14), // "telemetryRRSSI"
QT_MOC_LITERAL(344, 5566, 14), // "telemetryLRSSI"
QT_MOC_LITERAL(345, 5581, 17), // "telemetryRXErrors"
QT_MOC_LITERAL(346, 5599, 14), // "telemetryFixed"
QT_MOC_LITERAL(347, 5614, 17), // "telemetryTXBuffer"
QT_MOC_LITERAL(348, 5632, 15), // "telemetryLNoise"
QT_MOC_LITERAL(349, 5648, 15), // "telemetryRNoise"
QT_MOC_LITERAL(350, 5664, 14), // "toolIndicators"
QT_MOC_LITERAL(351, 5679, 14), // "modeIndicators"
QT_MOC_LITERAL(352, 5694, 16), // "staticCameraList"
QT_MOC_LITERAL(353, 5711, 13), // "cameraManager"
QT_MOC_LITERAL(354, 5725, 17), // "QGCCameraManager*"
QT_MOC_LITERAL(355, 5743, 10), // "hobbsMeter"
QT_MOC_LITERAL(356, 5754, 20), // "supportsTerrainFrame"
QT_MOC_LITERAL(357, 5775, 16), // "mavlinkSentCount"
QT_MOC_LITERAL(358, 5792, 20), // "mavlinkReceivedCount"
QT_MOC_LITERAL(359, 5813, 16), // "mavlinkLossCount"
QT_MOC_LITERAL(360, 5830, 18), // "mavlinkLossPercent"
QT_MOC_LITERAL(361, 5849, 10), // "gimbalRoll"
QT_MOC_LITERAL(362, 5860, 11), // "gimbalPitch"
QT_MOC_LITERAL(363, 5872, 9), // "gimbalYaw"
QT_MOC_LITERAL(364, 5882, 10), // "gimbalData"
QT_MOC_LITERAL(365, 5893, 12), // "isROIEnabled"
QT_MOC_LITERAL(366, 5906, 14), // "checkListState"
QT_MOC_LITERAL(367, 5921, 9), // "CheckList"
QT_MOC_LITERAL(368, 5931, 10), // "readyToFly"
QT_MOC_LITERAL(369, 5942, 19), // "sysStatusSensorInfo"
QT_MOC_LITERAL(370, 5962, 14), // "requiresGpsFix"
QT_MOC_LITERAL(371, 5977, 12), // "loadProgress"
QT_MOC_LITERAL(372, 5990, 14), // "orbitMapCircle"
QT_MOC_LITERAL(373, 6005, 13), // "QGCMapCircle*"
QT_MOC_LITERAL(374, 6019, 19), // "guidedModeSupported"
QT_MOC_LITERAL(375, 6039, 21), // "pauseVehicleSupported"
QT_MOC_LITERAL(376, 6061, 18), // "orbitModeSupported"
QT_MOC_LITERAL(377, 6080, 16), // "roiModeSupported"
QT_MOC_LITERAL(378, 6097, 23), // "takeoffVehicleSupported"
QT_MOC_LITERAL(379, 6121, 14), // "gotoFlightMode"
QT_MOC_LITERAL(380, 6136, 17), // "haveMRSpeedLimits"
QT_MOC_LITERAL(381, 6154, 17), // "haveFWSpeedLimits"
QT_MOC_LITERAL(382, 6172, 16), // "parameterManager"
QT_MOC_LITERAL(383, 6189, 17), // "ParameterManager*"
QT_MOC_LITERAL(384, 6207, 18), // "vehicleLinkManager"
QT_MOC_LITERAL(385, 6226, 19), // "VehicleLinkManager*"
QT_MOC_LITERAL(386, 6246, 15), // "objectAvoidance"
QT_MOC_LITERAL(387, 6262, 23), // "VehicleObjectAvoidance*"
QT_MOC_LITERAL(388, 6286, 8), // "autotune"
QT_MOC_LITERAL(389, 6295, 9), // "Autotune*"
QT_MOC_LITERAL(390, 6305, 5), // "Fact*"
QT_MOC_LITERAL(391, 6311, 8), // "rollRate"
QT_MOC_LITERAL(392, 6320, 9), // "pitchRate"
QT_MOC_LITERAL(393, 6330, 7), // "yawRate"
QT_MOC_LITERAL(394, 6338, 11), // "groundSpeed"
QT_MOC_LITERAL(395, 6350, 8), // "airSpeed"
QT_MOC_LITERAL(396, 6359, 16), // "airSpeedSetpoint"
QT_MOC_LITERAL(397, 6376, 9), // "climbRate"
QT_MOC_LITERAL(398, 6386, 12), // "altitudeAMSL"
QT_MOC_LITERAL(399, 6399, 14), // "altitudeTuning"
QT_MOC_LITERAL(400, 6414, 22), // "altitudeTuningSetpoint"
QT_MOC_LITERAL(401, 6437, 11), // "xTrackError"
QT_MOC_LITERAL(402, 6449, 14), // "flightDistance"
QT_MOC_LITERAL(403, 6464, 14), // "distanceToHome"
QT_MOC_LITERAL(404, 6479, 16), // "missionItemIndex"
QT_MOC_LITERAL(405, 6496, 15), // "headingToNextWP"
QT_MOC_LITERAL(406, 6512, 13), // "headingToHome"
QT_MOC_LITERAL(407, 6526, 13), // "distanceToGCS"
QT_MOC_LITERAL(408, 6540, 5), // "hobbs"
QT_MOC_LITERAL(409, 6546, 11), // "throttlePct"
QT_MOC_LITERAL(410, 6558, 3), // "gps"
QT_MOC_LITERAL(411, 6562, 10), // "FactGroup*"
QT_MOC_LITERAL(412, 6573, 4), // "gps2"
QT_MOC_LITERAL(413, 6578, 4), // "wind"
QT_MOC_LITERAL(414, 6583, 9), // "vibration"
QT_MOC_LITERAL(415, 6593, 11), // "temperature"
QT_MOC_LITERAL(416, 6605, 5), // "clock"
QT_MOC_LITERAL(417, 6611, 8), // "setpoint"
QT_MOC_LITERAL(418, 6620, 9), // "escStatus"
QT_MOC_LITERAL(419, 6630, 15), // "estimatorStatus"
QT_MOC_LITERAL(420, 6646, 7), // "terrain"
QT_MOC_LITERAL(421, 6654, 15), // "distanceSensors"
QT_MOC_LITERAL(422, 6670, 13), // "localPosition"
QT_MOC_LITERAL(423, 6684, 21), // "localPositionSetpoint"
QT_MOC_LITERAL(424, 6706, 10), // "hygrometer"
QT_MOC_LITERAL(425, 6717, 9), // "batteries"
QT_MOC_LITERAL(426, 6727, 9), // "actuators"
QT_MOC_LITERAL(427, 6737, 10), // "Actuators*"
QT_MOC_LITERAL(428, 6748, 26), // "healthAndArmingCheckReport"
QT_MOC_LITERAL(429, 6775, 27), // "HealthAndArmingCheckReport*"
QT_MOC_LITERAL(430, 6803, 20), // "firmwareMajorVersion"
QT_MOC_LITERAL(431, 6824, 20), // "firmwareMinorVersion"
QT_MOC_LITERAL(432, 6845, 20), // "firmwarePatchVersion"
QT_MOC_LITERAL(433, 6866, 19), // "firmwareVersionType"
QT_MOC_LITERAL(434, 6886, 25), // "firmwareVersionTypeString"
QT_MOC_LITERAL(435, 6912, 26), // "firmwareCustomMajorVersion"
QT_MOC_LITERAL(436, 6939, 26), // "firmwareCustomMinorVersion"
QT_MOC_LITERAL(437, 6966, 26), // "firmwareCustomPatchVersion"
QT_MOC_LITERAL(438, 6993, 7), // "gitHash"
QT_MOC_LITERAL(439, 7001, 10), // "vehicleUID"
QT_MOC_LITERAL(440, 7012, 13), // "vehicleUIDStr"
QT_MOC_LITERAL(441, 7026, 16), // "MavlinkSysStatus"
QT_MOC_LITERAL(442, 7043, 21), // "SysStatusSensor3dGyro"
QT_MOC_LITERAL(443, 7065, 22), // "SysStatusSensor3dAccel"
QT_MOC_LITERAL(444, 7088, 20), // "SysStatusSensor3dMag"
QT_MOC_LITERAL(445, 7109, 31), // "SysStatusSensorAbsolutePressure"
QT_MOC_LITERAL(446, 7141, 35), // "SysStatusSensorDifferentialPr..."
QT_MOC_LITERAL(447, 7177, 18), // "SysStatusSensorGPS"
QT_MOC_LITERAL(448, 7196, 26), // "SysStatusSensorOpticalFlow"
QT_MOC_LITERAL(449, 7223, 29), // "SysStatusSensorVisionPosition"
QT_MOC_LITERAL(450, 7253, 28), // "SysStatusSensorLaserPosition"
QT_MOC_LITERAL(451, 7282, 34), // "SysStatusSensorExternalGround..."
QT_MOC_LITERAL(452, 7317, 33), // "SysStatusSensorAngularRateCon..."
QT_MOC_LITERAL(453, 7351, 36), // "SysStatusSensorAttitudeStabil..."
QT_MOC_LITERAL(454, 7388, 26), // "SysStatusSensorYawPosition"
QT_MOC_LITERAL(455, 7415, 31), // "SysStatusSensorZAltitudeControl"
QT_MOC_LITERAL(456, 7447, 32), // "SysStatusSensorXYPositionControl"
QT_MOC_LITERAL(457, 7480, 27), // "SysStatusSensorMotorOutputs"
QT_MOC_LITERAL(458, 7508, 25), // "SysStatusSensorRCReceiver"
QT_MOC_LITERAL(459, 7534, 22), // "SysStatusSensor3dGyro2"
QT_MOC_LITERAL(460, 7557, 23), // "SysStatusSensor3dAccel2"
QT_MOC_LITERAL(461, 7581, 21), // "SysStatusSensor3dMag2"
QT_MOC_LITERAL(462, 7603, 23), // "SysStatusSensorGeoFence"
QT_MOC_LITERAL(463, 7627, 19), // "SysStatusSensorAHRS"
QT_MOC_LITERAL(464, 7647, 22), // "SysStatusSensorTerrain"
QT_MOC_LITERAL(465, 7670, 27), // "SysStatusSensorReverseMotor"
QT_MOC_LITERAL(466, 7698, 22), // "SysStatusSensorLogging"
QT_MOC_LITERAL(467, 7721, 22), // "SysStatusSensorBattery"
QT_MOC_LITERAL(468, 7744, 17), // "CheckListNotSetup"
QT_MOC_LITERAL(469, 7762, 15), // "CheckListPassed"
QT_MOC_LITERAL(470, 7778, 15), // "CheckListFailed"
QT_MOC_LITERAL(471, 7794, 12), // "ModeDisabled"
QT_MOC_LITERAL(472, 7807, 19), // "ModeRateAndAttitude"
QT_MOC_LITERAL(473, 7827, 23), // "ModeVelocityAndPosition"
QT_MOC_LITERAL(474, 7851, 23) // "ModeAltitudeAndAirspeed"

    },
    "Vehicle\0coordinateChanged\0\0QGeoCoordinate\0"
    "coordinate\0joystickEnabledChanged\0"
    "enabled\0mavlinkMessageReceived\0"
    "mavlink_message_t\0message\0homePositionChanged\0"
    "homePosition\0armedPositionChanged\0"
    "armedChanged\0armed\0flightModeChanged\0"
    "flightMode\0flyingChanged\0flying\0"
    "landingChanged\0landing\0guidedModeChanged\0"
    "guidedMode\0vtolInFwdFlightChanged\0"
    "vtolInFwdFlight\0prearmErrorChanged\0"
    "prearmError\0soloFirmwareChanged\0"
    "soloFirmware\0defaultCruiseSpeedChanged\0"
    "cruiseSpeed\0defaultHoverSpeedChanged\0"
    "hoverSpeed\0firmwareTypeChanged\0"
    "vehicleTypeChanged\0cameraManagerChanged\0"
    "hobbsMeterChanged\0capabilitiesKnownChanged\0"
    "capabilitiesKnown\0initialPlanRequestCompleteChanged\0"
    "initialPlanRequestComplete\0"
    "capabilityBitsChanged\0uint64_t\0"
    "capabilityBits\0toolIndicatorsChanged\0"
    "modeIndicatorsChanged\0textMessageReceived\0"
    "uasid\0componentid\0severity\0text\0"
    "calibrationEventReceived\0"
    "QSharedPointer<events::parser::ParsedEvent>\0"
    "event\0checkListStateChanged\0"
    "messagesReceivedChanged\0messagesSentChanged\0"
    "messagesLostChanged\0messageTypeChanged\0"
    "newMessageCountChanged\0messageCountChanged\0"
    "formattedMessagesChanged\0newFormattedMessage\0"
    "formattedMessage\0latestErrorChanged\0"
    "longitudeChanged\0currentConfigChanged\0"
    "flowImageIndexChanged\0rcRSSIChanged\0"
    "rcRSSI\0telemetryRRSSIChanged\0value\0"
    "telemetryLRSSIChanged\0telemetryRXErrorsChanged\0"
    "telemetryFixedChanged\0telemetryTXBufferChanged\0"
    "telemetryLNoiseChanged\0telemetryRNoiseChanged\0"
    "autoDisarmChanged\0flightModesChanged\0"
    "sensorsPresentBitsChanged\0sensorsPresentBits\0"
    "sensorsEnabledBitsChanged\0sensorsEnabledBits\0"
    "sensorsHealthBitsChanged\0sensorsHealthBits\0"
    "sensorsUnhealthyBitsChanged\0"
    "sensorsUnhealthyBits\0orbitActiveChanged\0"
    "orbitActive\0readyToFlyAvailableChanged\0"
    "readyToFlyAvailable\0readyToFlyChanged\0"
    "readyToFy\0allSensorsHealthyChanged\0"
    "allSensorsHealthy\0requiresGpsFixChanged\0"
    "haveMRSpeedLimChanged\0haveFWSpeedLimChanged\0"
    "firmwareVersionChanged\0"
    "firmwareCustomVersionChanged\0"
    "gitHashChanged\0hash\0vehicleUIDChanged\0"
    "loadProgressChanged\0rcChannelsChanged\0"
    "channelCount\0int[cMaxRcChannels]\0"
    "pwmValues\0remoteControlRSSIChanged\0"
    "uint8_t\0rssi\0mavlinkRawImu\0mavlinkScaledImu1\0"
    "mavlinkScaledImu2\0mavlinkScaledImu3\0"
    "mavlinkLogData\0Vehicle*\0vehicle\0"
    "target_system\0target_component\0uint16_t\0"
    "sequence\0first_message\0data\0acked\0"
    "mavCommandResult\0vehicleId\0targetComponent\0"
    "command\0ackResult\0failureCode\0"
    "mavlinkSerialControl\0device\0flags\0"
    "timeout\0uint32_t\0baudrate\0"
    "requestProtocolVersion\0version\0"
    "mavlinkStatusChanged\0gimbalRollChanged\0"
    "gimbalPitchChanged\0gimbalYawChanged\0"
    "gimbalDataChanged\0isROIEnabledChanged\0"
    "initialConnectComplete\0sensorsParametersResetAck\0"
    "success\0setVtolInFwdFlight\0"
    "_offlineFirmwareTypeSettingChanged\0"
    "varFirmwareType\0_offlineVehicleTypeSettingChanged\0"
    "varVehicleType\0_mavlinkMessageReceived\0"
    "LinkInterface*\0link\0_sendMessageMultipleNext\0"
    "_parametersReady\0parametersReady\0"
    "_remoteControlRSSIChanged\0"
    "_handleFlightModeChanged\0_announceArmedChanged\0"
    "_offlineCruiseSpeedSettingChanged\0"
    "_offlineHoverSpeedSettingChanged\0"
    "_handleTextMessage\0newCount\0"
    "_handletextMessageReceived\0UASMessage*\0"
    "_imageProtocolImageReady\0_prearmErrorTimeout\0"
    "_firstMissionLoadComplete\0"
    "_firstGeoFenceLoadComplete\0"
    "_firstRallyPointLoadComplete\0"
    "_sendMavCommandResponseTimeoutCheck\0"
    "_clearCameraTriggerPoints\0"
    "_updateDistanceHeadingToHome\0"
    "_updateMissionItemIndex\0_updateHeadingToNextWP\0"
    "_updateDistanceToGCS\0_updateHomepoint\0"
    "_updateHobbsMeter\0_vehicleParamLoaded\0"
    "ready\0_sendQGCTimeToVehicle\0"
    "_mavlinkMessageStatus\0uasId\0totalSent\0"
    "totalReceived\0totalLoss\0lossPercent\0"
    "_trafficUpdate\0alert\0traffic_id\0"
    "vehicle_id\0location\0heading\0"
    "_orbitTelemetryTimeout\0_updateFlightTime\0"
    "_gotProgressUpdate\0progressValue\0"
    "resetCounters\0resetMessages\0"
    "virtualTabletJoystickValue\0roll\0pitch\0"
    "yaw\0thrust\0guidedModeRTL\0smartRTL\0"
    "guidedModeLand\0guidedModeTakeoff\0"
    "altitudeRelative\0minimumTakeoffAltitude\0"
    "maximumHorizontalSpeedMultirotor\0"
    "maximumEquivalentAirspeed\0"
    "minimumEquivalentAirspeed\0"
    "guidedModeGotoLocation\0gotoCoord\0"
    "guidedModeChangeAltitude\0altitudeChange\0"
    "pauseVehicle\0guidedModeChangeGroundSpeed\0"
    "groundspeed\0guidedModeChangeEquivalentAirspeed\0"
    "airspeed\0guidedModeOrbit\0centerCoord\0"
    "radius\0amslAltitude\0guidedModeROI\0"
    "stopGuidedModeROI\0emergencyStop\0"
    "abortLanding\0climbOutAltitude\0"
    "startMission\0setCurrentMissionSequence\0"
    "seq\0rebootVehicle\0clearMessages\0"
    "sendPlan\0planFile\0versionCompare\0"
    "QString&\0compare\0major\0minor\0patch\0"
    "motorTest\0motor\0percent\0timeoutSecs\0"
    "showError\0setPIDTuningTelemetryMode\0"
    "PIDTuningTelemetryMode\0mode\0"
    "gimbalControlValue\0gimbalPitchStep\0"
    "direction\0gimbalYawStep\0centerGimbal\0"
    "forceArm\0sendParamMapRC\0paramName\0"
    "scale\0centerValue\0tuningID\0minValue\0"
    "maxValue\0clearAllParamMapRC\0closeVehicle\0"
    "triggerSimpleCamera\0flashBootloader\0"
    "vehicleTypeName\0sendCommand\0compId\0"
    "param1\0param2\0param3\0param4\0param5\0"
    "param6\0param7\0id\0autopilot\0AutoPilotPlugin*\0"
    "armedPosition\0autoDisarm\0"
    "flightModeSetAvailable\0flightModes\0"
    "extraJoystickFlightModes\0trajectoryPoints\0"
    "TrajectoryPoints*\0cameraTriggerPoints\0"
    "QmlObjectListModel*\0latitude\0longitude\0"
    "messageTypeNone\0messageTypeNormal\0"
    "messageTypeWarning\0messageTypeError\0"
    "newMessageCount\0messageCount\0"
    "formattedMessages\0latestError\0"
    "joystickEnabled\0flowImageIndex\0"
    "px4Firmware\0apmFirmware\0genericFirmware\0"
    "messagesReceived\0messagesSent\0"
    "messagesLost\0airship\0fixedWing\0"
    "multiRotor\0vtol\0rover\0sub\0"
    "supportsThrottleModeCenterZero\0"
    "supportsNegativeThrust\0supportsJSButton\0"
    "supportsRadio\0supportsMotorInterference\0"
    "motorCount\0coaxialMotors\0xConfigMotors\0"
    "isOfflineEditingVehicle\0brandImageIndoor\0"
    "brandImageOutdoor\0missionFlightMode\0"
    "pauseFlightMode\0rtlFlightMode\0"
    "smartRTLFlightMode\0supportsSmartRTL\0"
    "landFlightMode\0takeControlFlightMode\0"
    "followFlightMode\0firmwareTypeString\0"
    "vehicleTypeString\0vehicleImageOpaque\0"
    "vehicleImageOutline\0vehicleImageCompass\0"
    "telemetryRRSSI\0telemetryLRSSI\0"
    "telemetryRXErrors\0telemetryFixed\0"
    "telemetryTXBuffer\0telemetryLNoise\0"
    "telemetryRNoise\0toolIndicators\0"
    "modeIndicators\0staticCameraList\0"
    "cameraManager\0QGCCameraManager*\0"
    "hobbsMeter\0supportsTerrainFrame\0"
    "mavlinkSentCount\0mavlinkReceivedCount\0"
    "mavlinkLossCount\0mavlinkLossPercent\0"
    "gimbalRoll\0gimbalPitch\0gimbalYaw\0"
    "gimbalData\0isROIEnabled\0checkListState\0"
    "CheckList\0readyToFly\0sysStatusSensorInfo\0"
    "requiresGpsFix\0loadProgress\0orbitMapCircle\0"
    "QGCMapCircle*\0guidedModeSupported\0"
    "pauseVehicleSupported\0orbitModeSupported\0"
    "roiModeSupported\0takeoffVehicleSupported\0"
    "gotoFlightMode\0haveMRSpeedLimits\0"
    "haveFWSpeedLimits\0parameterManager\0"
    "ParameterManager*\0vehicleLinkManager\0"
    "VehicleLinkManager*\0objectAvoidance\0"
    "VehicleObjectAvoidance*\0autotune\0"
    "Autotune*\0Fact*\0rollRate\0pitchRate\0"
    "yawRate\0groundSpeed\0airSpeed\0"
    "airSpeedSetpoint\0climbRate\0altitudeAMSL\0"
    "altitudeTuning\0altitudeTuningSetpoint\0"
    "xTrackError\0flightDistance\0distanceToHome\0"
    "missionItemIndex\0headingToNextWP\0"
    "headingToHome\0distanceToGCS\0hobbs\0"
    "throttlePct\0gps\0FactGroup*\0gps2\0wind\0"
    "vibration\0temperature\0clock\0setpoint\0"
    "escStatus\0estimatorStatus\0terrain\0"
    "distanceSensors\0localPosition\0"
    "localPositionSetpoint\0hygrometer\0"
    "batteries\0actuators\0Actuators*\0"
    "healthAndArmingCheckReport\0"
    "HealthAndArmingCheckReport*\0"
    "firmwareMajorVersion\0firmwareMinorVersion\0"
    "firmwarePatchVersion\0firmwareVersionType\0"
    "firmwareVersionTypeString\0"
    "firmwareCustomMajorVersion\0"
    "firmwareCustomMinorVersion\0"
    "firmwareCustomPatchVersion\0gitHash\0"
    "vehicleUID\0vehicleUIDStr\0MavlinkSysStatus\0"
    "SysStatusSensor3dGyro\0SysStatusSensor3dAccel\0"
    "SysStatusSensor3dMag\0"
    "SysStatusSensorAbsolutePressure\0"
    "SysStatusSensorDifferentialPressure\0"
    "SysStatusSensorGPS\0SysStatusSensorOpticalFlow\0"
    "SysStatusSensorVisionPosition\0"
    "SysStatusSensorLaserPosition\0"
    "SysStatusSensorExternalGroundTruth\0"
    "SysStatusSensorAngularRateControl\0"
    "SysStatusSensorAttitudeStabilization\0"
    "SysStatusSensorYawPosition\0"
    "SysStatusSensorZAltitudeControl\0"
    "SysStatusSensorXYPositionControl\0"
    "SysStatusSensorMotorOutputs\0"
    "SysStatusSensorRCReceiver\0"
    "SysStatusSensor3dGyro2\0SysStatusSensor3dAccel2\0"
    "SysStatusSensor3dMag2\0SysStatusSensorGeoFence\0"
    "SysStatusSensorAHRS\0SysStatusSensorTerrain\0"
    "SysStatusSensorReverseMotor\0"
    "SysStatusSensorLogging\0SysStatusSensorBattery\0"
    "CheckListNotSetup\0CheckListPassed\0"
    "CheckListFailed\0ModeDisabled\0"
    "ModeRateAndAttitude\0ModeVelocityAndPosition\0"
    "ModeAltitudeAndAirspeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Vehicle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     164,   14, // methods
     168, 1366, // properties
       3, 2038, // enums/sets
       0,    0, // constructors
       0,       // flags
      83,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  834,    2, 0x06 /* Public */,
       5,    1,  837,    2, 0x06 /* Public */,
       7,    1,  840,    2, 0x06 /* Public */,
      10,    1,  843,    2, 0x06 /* Public */,
      12,    0,  846,    2, 0x06 /* Public */,
      13,    1,  847,    2, 0x06 /* Public */,
      15,    1,  850,    2, 0x06 /* Public */,
      17,    1,  853,    2, 0x06 /* Public */,
      19,    1,  856,    2, 0x06 /* Public */,
      21,    1,  859,    2, 0x06 /* Public */,
      23,    1,  862,    2, 0x06 /* Public */,
      25,    1,  865,    2, 0x06 /* Public */,
      27,    1,  868,    2, 0x06 /* Public */,
      29,    1,  871,    2, 0x06 /* Public */,
      31,    1,  874,    2, 0x06 /* Public */,
      33,    0,  877,    2, 0x06 /* Public */,
      34,    0,  878,    2, 0x06 /* Public */,
      35,    0,  879,    2, 0x06 /* Public */,
      36,    0,  880,    2, 0x06 /* Public */,
      37,    1,  881,    2, 0x06 /* Public */,
      39,    1,  884,    2, 0x06 /* Public */,
      41,    1,  887,    2, 0x06 /* Public */,
      44,    0,  890,    2, 0x06 /* Public */,
      45,    0,  891,    2, 0x06 /* Public */,
      46,    4,  892,    2, 0x06 /* Public */,
      51,    4,  901,    2, 0x06 /* Public */,
      54,    0,  910,    2, 0x06 /* Public */,
      55,    0,  911,    2, 0x06 /* Public */,
      56,    0,  912,    2, 0x06 /* Public */,
      57,    0,  913,    2, 0x06 /* Public */,
      58,    0,  914,    2, 0x06 /* Public */,
      59,    0,  915,    2, 0x06 /* Public */,
      60,    0,  916,    2, 0x06 /* Public */,
      61,    0,  917,    2, 0x06 /* Public */,
      62,    1,  918,    2, 0x06 /* Public */,
      64,    0,  921,    2, 0x06 /* Public */,
      65,    0,  922,    2, 0x06 /* Public */,
      66,    0,  923,    2, 0x06 /* Public */,
      67,    0,  924,    2, 0x06 /* Public */,
      68,    1,  925,    2, 0x06 /* Public */,
      70,    1,  928,    2, 0x06 /* Public */,
      72,    1,  931,    2, 0x06 /* Public */,
      73,    1,  934,    2, 0x06 /* Public */,
      74,    1,  937,    2, 0x06 /* Public */,
      75,    1,  940,    2, 0x06 /* Public */,
      76,    1,  943,    2, 0x06 /* Public */,
      77,    1,  946,    2, 0x06 /* Public */,
      78,    0,  949,    2, 0x06 /* Public */,
      79,    0,  950,    2, 0x06 /* Public */,
      80,    1,  951,    2, 0x06 /* Public */,
      82,    1,  954,    2, 0x06 /* Public */,
      84,    1,  957,    2, 0x06 /* Public */,
      86,    1,  960,    2, 0x06 /* Public */,
      88,    1,  963,    2, 0x06 /* Public */,
      90,    1,  966,    2, 0x06 /* Public */,
      92,    1,  969,    2, 0x06 /* Public */,
      94,    1,  972,    2, 0x06 /* Public */,
      96,    0,  975,    2, 0x06 /* Public */,
      97,    0,  976,    2, 0x06 /* Public */,
      98,    0,  977,    2, 0x06 /* Public */,
      99,    0,  978,    2, 0x06 /* Public */,
     100,    0,  979,    2, 0x06 /* Public */,
     101,    1,  980,    2, 0x06 /* Public */,
     103,    0,  983,    2, 0x06 /* Public */,
     104,    1,  984,    2, 0x06 /* Public */,
     105,    2,  987,    2, 0x06 /* Public */,
     109,    1,  992,    2, 0x06 /* Public */,
     112,    1,  995,    2, 0x06 /* Public */,
     113,    1,  998,    2, 0x06 /* Public */,
     114,    1, 1001,    2, 0x06 /* Public */,
     115,    1, 1004,    2, 0x06 /* Public */,
     116,    7, 1007,    2, 0x06 /* Public */,
     126,    5, 1022,    2, 0x06 /* Public */,
     132,    5, 1033,    2, 0x06 /* Public */,
     138,    1, 1044,    2, 0x06 /* Public */,
     140,    0, 1047,    2, 0x06 /* Public */,
     141,    0, 1048,    2, 0x06 /* Public */,
     142,    0, 1049,    2, 0x06 /* Public */,
     143,    0, 1050,    2, 0x06 /* Public */,
     144,    0, 1051,    2, 0x06 /* Public */,
     145,    0, 1052,    2, 0x06 /* Public */,
     146,    0, 1053,    2, 0x06 /* Public */,
     147,    1, 1054,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     149,    1, 1057,    2, 0x0a /* Public */,
     150,    1, 1060,    2, 0x0a /* Public */,
     152,    1, 1063,    2, 0x0a /* Public */,
     154,    2, 1066,    2, 0x08 /* Private */,
     157,    0, 1071,    2, 0x08 /* Private */,
     158,    1, 1072,    2, 0x08 /* Private */,
     160,    1, 1075,    2, 0x08 /* Private */,
     161,    1, 1078,    2, 0x08 /* Private */,
     162,    1, 1081,    2, 0x08 /* Private */,
     163,    1, 1084,    2, 0x08 /* Private */,
     164,    1, 1087,    2, 0x08 /* Private */,
     165,    1, 1090,    2, 0x08 /* Private */,
     167,    1, 1093,    2, 0x08 /* Private */,
     169,    0, 1096,    2, 0x08 /* Private */,
     170,    0, 1097,    2, 0x08 /* Private */,
     171,    0, 1098,    2, 0x08 /* Private */,
     172,    0, 1099,    2, 0x08 /* Private */,
     173,    0, 1100,    2, 0x08 /* Private */,
     174,    0, 1101,    2, 0x08 /* Private */,
     175,    0, 1102,    2, 0x08 /* Private */,
     176,    0, 1103,    2, 0x08 /* Private */,
     177,    0, 1104,    2, 0x08 /* Private */,
     178,    0, 1105,    2, 0x08 /* Private */,
     179,    0, 1106,    2, 0x08 /* Private */,
     180,    0, 1107,    2, 0x08 /* Private */,
     181,    0, 1108,    2, 0x08 /* Private */,
     182,    1, 1109,    2, 0x08 /* Private */,
     184,    0, 1112,    2, 0x08 /* Private */,
     185,    5, 1113,    2, 0x08 /* Private */,
     191,    5, 1124,    2, 0x08 /* Private */,
     197,    0, 1135,    2, 0x08 /* Private */,
     198,    0, 1136,    2, 0x08 /* Private */,
     199,    1, 1137,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     201,    0, 1140,    2, 0x02 /* Public */,
     202,    0, 1141,    2, 0x02 /* Public */,
     203,    4, 1142,    2, 0x02 /* Public */,
     208,    1, 1151,    2, 0x02 /* Public */,
     210,    0, 1154,    2, 0x02 /* Public */,
     211,    1, 1155,    2, 0x02 /* Public */,
     213,    0, 1158,    2, 0x02 /* Public */,
     214,    0, 1159,    2, 0x02 /* Public */,
     215,    0, 1160,    2, 0x02 /* Public */,
     216,    0, 1161,    2, 0x02 /* Public */,
     217,    1, 1162,    2, 0x02 /* Public */,
     219,    2, 1165,    2, 0x02 /* Public */,
     222,    1, 1170,    2, 0x02 /* Public */,
     224,    1, 1173,    2, 0x02 /* Public */,
     226,    3, 1176,    2, 0x02 /* Public */,
     230,    1, 1183,    2, 0x02 /* Public */,
     231,    0, 1186,    2, 0x02 /* Public */,
     221,    0, 1187,    2, 0x02 /* Public */,
     232,    0, 1188,    2, 0x02 /* Public */,
     233,    1, 1189,    2, 0x02 /* Public */,
     235,    0, 1192,    2, 0x02 /* Public */,
     236,    1, 1193,    2, 0x02 /* Public */,
     238,    0, 1196,    2, 0x02 /* Public */,
     239,    0, 1197,    2, 0x02 /* Public */,
     240,    1, 1198,    2, 0x02 /* Public */,
     242,    1, 1201,    2, 0x02 /* Public */,
     242,    3, 1204,    2, 0x02 /* Public */,
     248,    4, 1211,    2, 0x02 /* Public */,
     253,    1, 1220,    2, 0x02 /* Public */,
     256,    2, 1223,    2, 0x02 /* Public */,
     257,    1, 1228,    2, 0x02 /* Public */,
     259,    1, 1231,    2, 0x02 /* Public */,
     260,    0, 1234,    2, 0x02 /* Public */,
     261,    0, 1235,    2, 0x02 /* Public */,
     262,    6, 1236,    2, 0x02 /* Public */,
     269,    0, 1249,    2, 0x02 /* Public */,
     270,    0, 1250,    2, 0x02 /* Public */,
     271,    0, 1251,    2, 0x02 /* Public */,
     272,    0, 1252,    2, 0x02 /* Public */,
     273,    0, 1253,    2, 0x02 /* Public */,
     274,   10, 1254,    2, 0x02 /* Public */,
     274,    9, 1275,    2, 0x22 /* Public | MethodCloned */,
     274,    8, 1294,    2, 0x22 /* Public | MethodCloned */,
     274,    7, 1311,    2, 0x22 /* Public | MethodCloned */,
     274,    6, 1326,    2, 0x22 /* Public | MethodCloned */,
     274,    5, 1339,    2, 0x22 /* Public | MethodCloned */,
     274,    4, 1350,    2, 0x22 /* Public | MethodCloned */,
     274,    3, 1359,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Void, QMetaType::Double,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   47,   48,   49,   50,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 52,   47,   48,   49,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::UInt,   71,
    QMetaType::Void, QMetaType::UInt,   71,
    QMetaType::Void, QMetaType::UInt,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   81,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void, QMetaType::Int,   85,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Bool,   89,
    QMetaType::Void, QMetaType::Bool,   91,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  102,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   71,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 107,  106,  108,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 117, 0x80000000 | 110, 0x80000000 | 110, 0x80000000 | 121, 0x80000000 | 110, QMetaType::QByteArray, QMetaType::Bool,  118,  119,  120,  122,  123,  124,  125,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  127,  128,  129,  130,  131,
    QMetaType::Void, 0x80000000 | 110, 0x80000000 | 110, 0x80000000 | 121, 0x80000000 | 136, QMetaType::QByteArray,  133,  134,  135,  137,  124,
    QMetaType::Void, QMetaType::UInt,  139,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  148,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::QVariant,  151,
    QMetaType::Void, QMetaType::QVariant,  153,
    QMetaType::Void, 0x80000000 | 155, 0x80000000 | 8,  156,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  159,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QVariant,   71,
    QMetaType::Void, QMetaType::QVariant,   71,
    QMetaType::Void, QMetaType::Int,  166,
    QMetaType::Void, 0x80000000 | 168,    9,
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  183,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 42, 0x80000000 | 42, 0x80000000 | 42, QMetaType::Float,  186,  187,  188,  189,  190,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 3, QMetaType::Float,  192,  193,  194,  195,  196,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  200,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  204,  205,  206,  207,
    QMetaType::Void, QMetaType::Bool,  209,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,  212,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, 0x80000000 | 3,  218,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,  220,  221,
    QMetaType::Void, QMetaType::Double,  223,
    QMetaType::Void, QMetaType::Double,  225,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,  227,  228,  229,
    QMetaType::Void, 0x80000000 | 3,  227,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,  234,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  237,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  241,
    QMetaType::Int, 0x80000000 | 243,  244,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  245,  246,  247,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  249,  250,  251,  252,
    QMetaType::Void, 0x80000000 | 254,  255,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,  205,  206,
    QMetaType::Void, QMetaType::Int,  258,
    QMetaType::Void, QMetaType::Int,  258,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Double, QMetaType::Double,  263,  264,  265,  266,  267,  268,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  275,  129,  252,  276,  277,  278,  279,  280,  281,  282,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  275,  129,  252,  276,  277,  278,  279,  280,  281,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  275,  129,  252,  276,  277,  278,  279,  280,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  275,  129,  252,  276,  277,  278,  279,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,  275,  129,  252,  276,  277,  278,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double,  275,  129,  252,  276,  277,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double,  275,  129,  252,  276,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  275,  129,  252,

 // properties: name, type, flags
     283, QMetaType::Int, 0x00095401,
     284, 0x80000000 | 285, 0x00095409,
       4, 0x80000000 | 3, 0x00495009,
      11, 0x80000000 | 3, 0x00495009,
     286, 0x80000000 | 3, 0x00495009,
      14, QMetaType::Bool, 0x00495003,
     287, QMetaType::Bool, 0x00495001,
     288, QMetaType::Bool, 0x00095401,
     289, QMetaType::QStringList, 0x00495001,
     290, QMetaType::QStringList, 0x00495001,
      16, QMetaType::QString, 0x00495103,
     291, 0x80000000 | 292, 0x00095409,
     293, 0x80000000 | 294, 0x00095409,
     295, QMetaType::Float, 0x00495001,
     296, QMetaType::Float, 0x00495001,
     297, QMetaType::Bool, 0x00495001,
     298, QMetaType::Bool, 0x00495001,
     299, QMetaType::Bool, 0x00495001,
     300, QMetaType::Bool, 0x00495001,
     301, QMetaType::Int, 0x00495001,
     302, QMetaType::Int, 0x00495001,
     303, QMetaType::QString, 0x00495001,
     304, QMetaType::QString, 0x00495001,
     305, QMetaType::Bool, 0x00495103,
     306, QMetaType::Int, 0x00495001,
      69, QMetaType::Int, 0x00495001,
     307, QMetaType::Bool, 0x00495001,
     308, QMetaType::Bool, 0x00495001,
      28, QMetaType::Bool, 0x00495103,
     309, QMetaType::Bool, 0x00095401,
     310, QMetaType::UInt, 0x00495001,
     311, QMetaType::UInt, 0x00495001,
     312, QMetaType::UInt, 0x00495001,
     313, QMetaType::Bool, 0x00495001,
     314, QMetaType::Bool, 0x00495001,
     315, QMetaType::Bool, 0x00495001,
     316, QMetaType::Bool, 0x00495001,
     317, QMetaType::Bool, 0x00495001,
     318, QMetaType::Bool, 0x00495001,
     319, QMetaType::Bool, 0x00095401,
     320, QMetaType::Bool, 0x00095401,
     321, QMetaType::Bool, 0x00095401,
     322, QMetaType::Bool, 0x00095401,
     323, QMetaType::Bool, 0x00095401,
      26, QMetaType::QString, 0x00495103,
     324, QMetaType::Int, 0x00095401,
     325, QMetaType::Bool, 0x00095401,
     326, QMetaType::Bool, 0x00095401,
     327, QMetaType::Bool, 0x00095401,
     328, QMetaType::QString, 0x00495001,
     329, QMetaType::QString, 0x00495001,
      81, QMetaType::Int, 0x00495001,
      83, QMetaType::Int, 0x00495001,
      85, QMetaType::Int, 0x00495001,
      87, QMetaType::Int, 0x00495001,
     330, QMetaType::QString, 0x00095401,
     331, QMetaType::QString, 0x00095401,
     332, QMetaType::QString, 0x00095401,
     333, QMetaType::QString, 0x00095401,
     334, QMetaType::Bool, 0x00095401,
     335, QMetaType::QString, 0x00095401,
     336, QMetaType::QString, 0x00095401,
     337, QMetaType::QString, 0x00095401,
     338, QMetaType::QString, 0x00495001,
     339, QMetaType::QString, 0x00495001,
     340, QMetaType::QString, 0x00095401,
     341, QMetaType::QString, 0x00095401,
     342, QMetaType::QString, 0x00095401,
     343, QMetaType::Int, 0x00495001,
     344, QMetaType::Int, 0x00495001,
     345, QMetaType::UInt, 0x00495001,
     346, QMetaType::UInt, 0x00495001,
     347, QMetaType::UInt, 0x00495001,
     348, QMetaType::Int, 0x00495001,
     349, QMetaType::Int, 0x00495001,
     350, QMetaType::QVariantList, 0x00495001,
     351, QMetaType::QVariantList, 0x00495001,
      40, QMetaType::Bool, 0x00495001,
     352, QMetaType::QVariantList, 0x00095401,
     353, 0x80000000 | 354, 0x00495009,
     355, QMetaType::QString, 0x00495001,
      24, QMetaType::Bool, 0x00495103,
     356, QMetaType::Bool, 0x00495001,
     357, QMetaType::ULongLong, 0x00495001,
     358, QMetaType::ULongLong, 0x00495001,
     359, QMetaType::ULongLong, 0x00495001,
     360, QMetaType::Float, 0x00495001,
     361, QMetaType::QReal, 0x00495001,
     362, QMetaType::QReal, 0x00495001,
     363, QMetaType::QReal, 0x00495001,
     364, QMetaType::Bool, 0x00495001,
     365, QMetaType::Bool, 0x00495001,
     366, 0x80000000 | 367, 0x0049510b,
      91, QMetaType::Bool, 0x00495001,
     368, QMetaType::Bool, 0x00495001,
     369, QMetaType::QObjectStar, 0x00095401,
      95, QMetaType::Bool, 0x00495001,
     370, QMetaType::Bool, 0x00495001,
     371, QMetaType::Double, 0x00495001,
     146, QMetaType::Bool, 0x00495001,
      89, QMetaType::Bool, 0x00495001,
     372, 0x80000000 | 373, 0x00095409,
      18, QMetaType::Bool, 0x00495001,
      20, QMetaType::Bool, 0x00495001,
      22, QMetaType::Bool, 0x00495103,
     374, QMetaType::Bool, 0x00095401,
     375, QMetaType::Bool, 0x00095401,
     376, QMetaType::Bool, 0x00095401,
     377, QMetaType::Bool, 0x00095401,
     378, QMetaType::Bool, 0x00095401,
     379, QMetaType::QString, 0x00095401,
     380, QMetaType::Bool, 0x00495001,
     381, QMetaType::Bool, 0x00495001,
     382, 0x80000000 | 383, 0x00095409,
     384, 0x80000000 | 385, 0x00095409,
     386, 0x80000000 | 387, 0x00095409,
     388, 0x80000000 | 389, 0x00095409,
     204, 0x80000000 | 390, 0x00095409,
     205, 0x80000000 | 390, 0x00095409,
     196, 0x80000000 | 390, 0x00095409,
     391, 0x80000000 | 390, 0x00095409,
     392, 0x80000000 | 390, 0x00095409,
     393, 0x80000000 | 390, 0x00095409,
     394, 0x80000000 | 390, 0x00095409,
     395, 0x80000000 | 390, 0x00095409,
     396, 0x80000000 | 390, 0x00095409,
     397, 0x80000000 | 390, 0x00095409,
     212, 0x80000000 | 390, 0x00095409,
     398, 0x80000000 | 390, 0x00095409,
     399, 0x80000000 | 390, 0x00095409,
     400, 0x80000000 | 390, 0x00095409,
     401, 0x80000000 | 390, 0x00095409,
     402, 0x80000000 | 390, 0x00095409,
     403, 0x80000000 | 390, 0x00095409,
     404, 0x80000000 | 390, 0x00095409,
     405, 0x80000000 | 390, 0x00095409,
     406, 0x80000000 | 390, 0x00095409,
     407, 0x80000000 | 390, 0x00095409,
     408, 0x80000000 | 390, 0x00095409,
     409, 0x80000000 | 390, 0x00095409,
     410, 0x80000000 | 411, 0x00095409,
     412, 0x80000000 | 411, 0x00095409,
     413, 0x80000000 | 411, 0x00095409,
     414, 0x80000000 | 411, 0x00095409,
     415, 0x80000000 | 411, 0x00095409,
     416, 0x80000000 | 411, 0x00095409,
     417, 0x80000000 | 411, 0x00095409,
     418, 0x80000000 | 411, 0x00095409,
     419, 0x80000000 | 411, 0x00095409,
     420, 0x80000000 | 411, 0x00095409,
     421, 0x80000000 | 411, 0x00095409,
     422, 0x80000000 | 411, 0x00095409,
     423, 0x80000000 | 411, 0x00095409,
     424, 0x80000000 | 411, 0x00095409,
     425, 0x80000000 | 294, 0x00095409,
     426, 0x80000000 | 427, 0x00095409,
     428, 0x80000000 | 429, 0x00095409,
     430, QMetaType::Int, 0x00495001,
     431, QMetaType::Int, 0x00495001,
     432, QMetaType::Int, 0x00495001,
     433, QMetaType::Int, 0x00495001,
     434, QMetaType::QString, 0x00495001,
     435, QMetaType::Int, 0x00495001,
     436, QMetaType::Int, 0x00495001,
     437, QMetaType::Int, 0x00495001,
     438, QMetaType::QString, 0x00495001,
     439, QMetaType::ULongLong, 0x00495001,
     440, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       3,
       4,
       5,
      47,
       0,
      48,
      48,
       6,
       0,
       0,
       0,
       0,
      30,
      30,
      30,
      30,
      31,
      32,
      33,
      35,
       1,
      38,
      39,
      15,
      15,
      12,
       0,
      27,
      28,
      29,
      16,
      16,
      16,
      16,
      16,
      16,
       0,
       0,
       0,
       0,
       0,
      11,
       0,
       0,
       0,
       0,
      15,
      15,
      49,
      50,
      51,
      52,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
      15,
      16,
       0,
       0,
       0,
      40,
      41,
      42,
      43,
      44,
      45,
      46,
      22,
      23,
      20,
       0,
      17,
      18,
      10,
      15,
      75,
      75,
      75,
      75,
      76,
      77,
      78,
      79,
      80,
      26,
      54,
      55,
       0,
      56,
      57,
      64,
      81,
      53,
       0,
       7,
       8,
       9,
       0,
       0,
       0,
       0,
       0,
       0,
      58,
      59,
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
      60,
      60,
      60,
      60,
      60,
      61,
      61,
      61,
      62,
      63,
      63,

 // enums: name, alias, flags, count, data
     441,  441, 0x0,   26, 2053,
     367,  367, 0x0,    3, 2105,
     254,  254, 0x0,    4, 2111,

 // enum data: key, value
     442, uint(Vehicle::SysStatusSensor3dGyro),
     443, uint(Vehicle::SysStatusSensor3dAccel),
     444, uint(Vehicle::SysStatusSensor3dMag),
     445, uint(Vehicle::SysStatusSensorAbsolutePressure),
     446, uint(Vehicle::SysStatusSensorDifferentialPressure),
     447, uint(Vehicle::SysStatusSensorGPS),
     448, uint(Vehicle::SysStatusSensorOpticalFlow),
     449, uint(Vehicle::SysStatusSensorVisionPosition),
     450, uint(Vehicle::SysStatusSensorLaserPosition),
     451, uint(Vehicle::SysStatusSensorExternalGroundTruth),
     452, uint(Vehicle::SysStatusSensorAngularRateControl),
     453, uint(Vehicle::SysStatusSensorAttitudeStabilization),
     454, uint(Vehicle::SysStatusSensorYawPosition),
     455, uint(Vehicle::SysStatusSensorZAltitudeControl),
     456, uint(Vehicle::SysStatusSensorXYPositionControl),
     457, uint(Vehicle::SysStatusSensorMotorOutputs),
     458, uint(Vehicle::SysStatusSensorRCReceiver),
     459, uint(Vehicle::SysStatusSensor3dGyro2),
     460, uint(Vehicle::SysStatusSensor3dAccel2),
     461, uint(Vehicle::SysStatusSensor3dMag2),
     462, uint(Vehicle::SysStatusSensorGeoFence),
     463, uint(Vehicle::SysStatusSensorAHRS),
     464, uint(Vehicle::SysStatusSensorTerrain),
     465, uint(Vehicle::SysStatusSensorReverseMotor),
     466, uint(Vehicle::SysStatusSensorLogging),
     467, uint(Vehicle::SysStatusSensorBattery),
     468, uint(Vehicle::CheckListNotSetup),
     469, uint(Vehicle::CheckListPassed),
     470, uint(Vehicle::CheckListFailed),
     471, uint(Vehicle::ModeDisabled),
     472, uint(Vehicle::ModeRateAndAttitude),
     473, uint(Vehicle::ModeVelocityAndPosition),
     474, uint(Vehicle::ModeAltitudeAndAirspeed),

       0        // eod
};

void Vehicle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vehicle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinateChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->joystickEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->mavlinkMessageReceived((*reinterpret_cast< const mavlink_message_t(*)>(_a[1]))); break;
        case 3: _t->homePositionChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 4: _t->armedPositionChanged(); break;
        case 5: _t->armedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->flightModeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->flyingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->landingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->guidedModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->vtolInFwdFlightChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->prearmErrorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->soloFirmwareChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->defaultCruiseSpeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->defaultHoverSpeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->firmwareTypeChanged(); break;
        case 16: _t->vehicleTypeChanged(); break;
        case 17: _t->cameraManagerChanged(); break;
        case 18: _t->hobbsMeterChanged(); break;
        case 19: _t->capabilitiesKnownChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->initialPlanRequestCompleteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->capabilityBitsChanged((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 22: _t->toolIndicatorsChanged(); break;
        case 23: _t->modeIndicatorsChanged(); break;
        case 24: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 25: _t->calibrationEventReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QSharedPointer<events::parser::ParsedEvent>(*)>(_a[4]))); break;
        case 26: _t->checkListStateChanged(); break;
        case 27: _t->messagesReceivedChanged(); break;
        case 28: _t->messagesSentChanged(); break;
        case 29: _t->messagesLostChanged(); break;
        case 30: _t->messageTypeChanged(); break;
        case 31: _t->newMessageCountChanged(); break;
        case 32: _t->messageCountChanged(); break;
        case 33: _t->formattedMessagesChanged(); break;
        case 34: _t->newFormattedMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->latestErrorChanged(); break;
        case 36: _t->longitudeChanged(); break;
        case 37: _t->currentConfigChanged(); break;
        case 38: _t->flowImageIndexChanged(); break;
        case 39: _t->rcRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->telemetryRRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->telemetryLRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->telemetryRXErrorsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 43: _t->telemetryFixedChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 44: _t->telemetryTXBufferChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 45: _t->telemetryLNoiseChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->telemetryRNoiseChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->autoDisarmChanged(); break;
        case 48: _t->flightModesChanged(); break;
        case 49: _t->sensorsPresentBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->sensorsEnabledBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->sensorsHealthBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->sensorsUnhealthyBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->orbitActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->readyToFlyAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->readyToFlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->allSensorsHealthyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->requiresGpsFixChanged(); break;
        case 58: _t->haveMRSpeedLimChanged(); break;
        case 59: _t->haveFWSpeedLimChanged(); break;
        case 60: _t->firmwareVersionChanged(); break;
        case 61: _t->firmwareCustomVersionChanged(); break;
        case 62: _t->gitHashChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 63: _t->vehicleUIDChanged(); break;
        case 64: _t->loadProgressChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 65: _t->rcChannelsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)[cMaxRcChannels]>(_a[2]))); break;
        case 66: _t->remoteControlRSSIChanged((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 67: _t->mavlinkRawImu((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 68: _t->mavlinkScaledImu1((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 69: _t->mavlinkScaledImu2((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 70: _t->mavlinkScaledImu3((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 71: _t->mavlinkLogData((*reinterpret_cast< Vehicle*(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4])),(*reinterpret_cast< uint8_t(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 72: _t->mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 73: _t->mavlinkSerialControl((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint32_t(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5]))); break;
        case 74: _t->requestProtocolVersion((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 75: _t->mavlinkStatusChanged(); break;
        case 76: _t->gimbalRollChanged(); break;
        case 77: _t->gimbalPitchChanged(); break;
        case 78: _t->gimbalYawChanged(); break;
        case 79: _t->gimbalDataChanged(); break;
        case 80: _t->isROIEnabledChanged(); break;
        case 81: _t->initialConnectComplete(); break;
        case 82: _t->sensorsParametersResetAck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: _t->setVtolInFwdFlight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: _t->_offlineFirmwareTypeSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 85: _t->_offlineVehicleTypeSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 86: _t->_mavlinkMessageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 87: _t->_sendMessageMultipleNext(); break;
        case 88: _t->_parametersReady((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->_remoteControlRSSIChanged((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 90: _t->_handleFlightModeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 91: _t->_announceArmedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: _t->_offlineCruiseSpeedSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 93: _t->_offlineHoverSpeedSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 94: _t->_handleTextMessage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 95: _t->_handletextMessageReceived((*reinterpret_cast< UASMessage*(*)>(_a[1]))); break;
        case 96: _t->_imageProtocolImageReady(); break;
        case 97: _t->_prearmErrorTimeout(); break;
        case 98: _t->_firstMissionLoadComplete(); break;
        case 99: _t->_firstGeoFenceLoadComplete(); break;
        case 100: _t->_firstRallyPointLoadComplete(); break;
        case 101: _t->_sendMavCommandResponseTimeoutCheck(); break;
        case 102: _t->_clearCameraTriggerPoints(); break;
        case 103: _t->_updateDistanceHeadingToHome(); break;
        case 104: _t->_updateMissionItemIndex(); break;
        case 105: _t->_updateHeadingToNextWP(); break;
        case 106: _t->_updateDistanceToGCS(); break;
        case 107: _t->_updateHomepoint(); break;
        case 108: _t->_updateHobbsMeter(); break;
        case 109: _t->_vehicleParamLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 110: _t->_sendQGCTimeToVehicle(); break;
        case 111: _t->_mavlinkMessageStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint64_t(*)>(_a[2])),(*reinterpret_cast< uint64_t(*)>(_a[3])),(*reinterpret_cast< uint64_t(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 112: _t->_trafficUpdate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QGeoCoordinate(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 113: _t->_orbitTelemetryTimeout(); break;
        case 114: _t->_updateFlightTime(); break;
        case 115: _t->_gotProgressUpdate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 116: _t->resetCounters(); break;
        case 117: _t->resetMessages(); break;
        case 118: _t->virtualTabletJoystickValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 119: _t->guidedModeRTL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 120: _t->guidedModeLand(); break;
        case 121: _t->guidedModeTakeoff((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 122: { double _r = _t->minimumTakeoffAltitude();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 123: { double _r = _t->maximumHorizontalSpeedMultirotor();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 124: { double _r = _t->maximumEquivalentAirspeed();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 125: { double _r = _t->minimumEquivalentAirspeed();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 126: _t->guidedModeGotoLocation((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 127: _t->guidedModeChangeAltitude((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 128: _t->guidedModeChangeGroundSpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 129: _t->guidedModeChangeEquivalentAirspeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 130: _t->guidedModeOrbit((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 131: _t->guidedModeROI((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 132: _t->stopGuidedModeROI(); break;
        case 133: _t->pauseVehicle(); break;
        case 134: _t->emergencyStop(); break;
        case 135: _t->abortLanding((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 136: _t->startMission(); break;
        case 137: _t->setCurrentMissionSequence((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 138: _t->rebootVehicle(); break;
        case 139: _t->clearMessages(); break;
        case 140: _t->sendPlan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 141: { int _r = _t->versionCompare((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 142: { int _r = _t->versionCompare((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 143: _t->motorTest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 144: _t->setPIDTuningTelemetryMode((*reinterpret_cast< PIDTuningTelemetryMode(*)>(_a[1]))); break;
        case 145: _t->gimbalControlValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 146: _t->gimbalPitchStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 147: _t->gimbalYawStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 148: _t->centerGimbal(); break;
        case 149: _t->forceArm(); break;
        case 150: _t->sendParamMapRC((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 151: _t->clearAllParamMapRC(); break;
        case 152: _t->closeVehicle(); break;
        case 153: _t->triggerSimpleCamera(); break;
        case 154: _t->flashBootloader(); break;
        case 155: { QString _r = _t->vehicleTypeName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 156: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10]))); break;
        case 157: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9]))); break;
        case 158: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        case 159: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 160: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 161: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 162: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 163: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 71:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 112:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 126:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 130:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 131:
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
            using _t = void (Vehicle::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::coordinateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::joystickEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const mavlink_message_t & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkMessageReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::homePositionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::armedPositionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::armedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flightModeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flyingChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::landingChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::guidedModeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::vtolInFwdFlightChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::prearmErrorChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::soloFirmwareChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::defaultCruiseSpeedChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::defaultHoverSpeedChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::firmwareTypeChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::vehicleTypeChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::cameraManagerChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::hobbsMeterChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::capabilitiesKnownChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::initialPlanRequestCompleteChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::capabilityBitsChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::toolIndicatorsChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::modeIndicatorsChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::textMessageReceived)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int , int , QSharedPointer<events::parser::ParsedEvent> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::calibrationEventReceived)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::checkListStateChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messagesReceivedChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messagesSentChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messagesLostChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messageTypeChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::newMessageCountChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messageCountChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::formattedMessagesChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::newFormattedMessage)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::latestErrorChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::longitudeChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::currentConfigChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flowImageIndexChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::rcRSSIChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryRRSSIChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryLRSSIChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryRXErrorsChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryFixedChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryTXBufferChanged)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryLNoiseChanged)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryRNoiseChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::autoDisarmChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flightModesChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsPresentBitsChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsEnabledBitsChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsHealthBitsChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsUnhealthyBitsChanged)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::orbitActiveChanged)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::readyToFlyAvailableChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::readyToFlyChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::allSensorsHealthyChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::requiresGpsFixChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::haveMRSpeedLimChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::haveFWSpeedLimChanged)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::firmwareVersionChanged)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::firmwareCustomVersionChanged)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::gitHashChanged)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::vehicleUIDChanged)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::loadProgressChanged)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int [cMaxRcChannels]);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::rcChannelsChanged)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::remoteControlRSSIChanged)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkRawImu)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkScaledImu1)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkScaledImu2)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkScaledImu3)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(Vehicle * , uint8_t , uint8_t , uint16_t , uint8_t , QByteArray , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkLogData)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavCommandResult)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint8_t , uint8_t , uint16_t , uint32_t , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkSerialControl)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::requestProtocolVersion)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkStatusChanged)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::gimbalRollChanged)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::gimbalPitchChanged)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::gimbalYawChanged)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::gimbalDataChanged)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::isROIEnabledChanged)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::initialConnectComplete)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsParametersResetAck)) {
                *result = 82;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 139:
        case 138:
        case 137:
        case 136:
        case 135:
        case 134:
        case 133:
        case 132:
        case 131:
        case 130:
        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
        case 124:
        case 123:
        case 122:
        case 121:
        case 120:
        case 119:
        case 118:
        case 117:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 153:
        case 152:
        case 151:
        case 150:
        case 149:
        case 148:
        case 147:
        case 146:
        case 145:
        case 144:
        case 143:
        case 142:
        case 141:
        case 140:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FactGroup* >(); break;
        case 156:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HealthAndArmingCheckReport* >(); break;
        case 101:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMapCircle* >(); break;
        case 4:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 154:
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        case 114:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VehicleLinkManager* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Vehicle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< AutoPilotPlugin**>(_v) = _t->_autopilotPlugin; break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 3: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->homePosition(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->armedPosition(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->armed(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->autoDisarm(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->flightModeSetAvailable(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->flightModes(); break;
        case 9: *reinterpret_cast< QStringList*>(_v) = _t->extraJoystickFlightModes(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->flightMode(); break;
        case 11: *reinterpret_cast< TrajectoryPoints**>(_v) = _t->_trajectoryPoints; break;
        case 12: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->cameraTriggerPoints(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->latitude(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->longitude(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->messageTypeNone(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->messageTypeNormal(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->messageTypeWarning(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->messageTypeError(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->newMessageCount(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->messageCount(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->formattedMessages(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->latestError(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->joystickEnabled(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->flowImageIndex(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->rcRSSI(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->px4Firmware(); break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->apmFirmware(); break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->soloFirmware(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->genericFirmware(); break;
        case 30: *reinterpret_cast< uint*>(_v) = _t->messagesReceived(); break;
        case 31: *reinterpret_cast< uint*>(_v) = _t->messagesSent(); break;
        case 32: *reinterpret_cast< uint*>(_v) = _t->messagesLost(); break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->airship(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->fixedWing(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->multiRotor(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->vtol(); break;
        case 37: *reinterpret_cast< bool*>(_v) = _t->rover(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->sub(); break;
        case 39: *reinterpret_cast< bool*>(_v) = _t->supportsThrottleModeCenterZero(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->supportsNegativeThrust(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->supportsJSButton(); break;
        case 42: *reinterpret_cast< bool*>(_v) = _t->supportsRadio(); break;
        case 43: *reinterpret_cast< bool*>(_v) = _t->supportsMotorInterference(); break;
        case 44: *reinterpret_cast< QString*>(_v) = _t->prearmError(); break;
        case 45: *reinterpret_cast< int*>(_v) = _t->motorCount(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->coaxialMotors(); break;
        case 47: *reinterpret_cast< bool*>(_v) = _t->xConfigMotors(); break;
        case 48: *reinterpret_cast< bool*>(_v) = _t->isOfflineEditingVehicle(); break;
        case 49: *reinterpret_cast< QString*>(_v) = _t->brandImageIndoor(); break;
        case 50: *reinterpret_cast< QString*>(_v) = _t->brandImageOutdoor(); break;
        case 51: *reinterpret_cast< int*>(_v) = _t->sensorsPresentBits(); break;
        case 52: *reinterpret_cast< int*>(_v) = _t->sensorsEnabledBits(); break;
        case 53: *reinterpret_cast< int*>(_v) = _t->sensorsHealthBits(); break;
        case 54: *reinterpret_cast< int*>(_v) = _t->sensorsUnhealthyBits(); break;
        case 55: *reinterpret_cast< QString*>(_v) = _t->missionFlightMode(); break;
        case 56: *reinterpret_cast< QString*>(_v) = _t->pauseFlightMode(); break;
        case 57: *reinterpret_cast< QString*>(_v) = _t->rtlFlightMode(); break;
        case 58: *reinterpret_cast< QString*>(_v) = _t->smartRTLFlightMode(); break;
        case 59: *reinterpret_cast< bool*>(_v) = _t->supportsSmartRTL(); break;
        case 60: *reinterpret_cast< QString*>(_v) = _t->landFlightMode(); break;
        case 61: *reinterpret_cast< QString*>(_v) = _t->takeControlFlightMode(); break;
        case 62: *reinterpret_cast< QString*>(_v) = _t->followFlightMode(); break;
        case 63: *reinterpret_cast< QString*>(_v) = _t->firmwareTypeString(); break;
        case 64: *reinterpret_cast< QString*>(_v) = _t->vehicleTypeString(); break;
        case 65: *reinterpret_cast< QString*>(_v) = _t->vehicleImageOpaque(); break;
        case 66: *reinterpret_cast< QString*>(_v) = _t->vehicleImageOutline(); break;
        case 67: *reinterpret_cast< QString*>(_v) = _t->vehicleImageCompass(); break;
        case 68: *reinterpret_cast< int*>(_v) = _t->telemetryRRSSI(); break;
        case 69: *reinterpret_cast< int*>(_v) = _t->telemetryLRSSI(); break;
        case 70: *reinterpret_cast< uint*>(_v) = _t->telemetryRXErrors(); break;
        case 71: *reinterpret_cast< uint*>(_v) = _t->telemetryFixed(); break;
        case 72: *reinterpret_cast< uint*>(_v) = _t->telemetryTXBuffer(); break;
        case 73: *reinterpret_cast< int*>(_v) = _t->telemetryLNoise(); break;
        case 74: *reinterpret_cast< int*>(_v) = _t->telemetryRNoise(); break;
        case 75: *reinterpret_cast< QVariantList*>(_v) = _t->toolIndicators(); break;
        case 76: *reinterpret_cast< QVariantList*>(_v) = _t->modeIndicators(); break;
        case 77: *reinterpret_cast< bool*>(_v) = _t->initialPlanRequestComplete(); break;
        case 78: *reinterpret_cast< QVariantList*>(_v) = _t->staticCameraList(); break;
        case 79: *reinterpret_cast< QGCCameraManager**>(_v) = _t->cameraManager(); break;
        case 80: *reinterpret_cast< QString*>(_v) = _t->hobbsMeter(); break;
        case 81: *reinterpret_cast< bool*>(_v) = _t->vtolInFwdFlight(); break;
        case 82: *reinterpret_cast< bool*>(_v) = _t->supportsTerrainFrame(); break;
        case 83: *reinterpret_cast< quint64*>(_v) = _t->mavlinkSentCount(); break;
        case 84: *reinterpret_cast< quint64*>(_v) = _t->mavlinkReceivedCount(); break;
        case 85: *reinterpret_cast< quint64*>(_v) = _t->mavlinkLossCount(); break;
        case 86: *reinterpret_cast< float*>(_v) = _t->mavlinkLossPercent(); break;
        case 87: *reinterpret_cast< qreal*>(_v) = _t->gimbalRoll(); break;
        case 88: *reinterpret_cast< qreal*>(_v) = _t->gimbalPitch(); break;
        case 89: *reinterpret_cast< qreal*>(_v) = _t->gimbalYaw(); break;
        case 90: *reinterpret_cast< bool*>(_v) = _t->gimbalData(); break;
        case 91: *reinterpret_cast< bool*>(_v) = _t->isROIEnabled(); break;
        case 92: *reinterpret_cast< CheckList*>(_v) = _t->checkListState(); break;
        case 93: *reinterpret_cast< bool*>(_v) = _t->readyToFlyAvailable(); break;
        case 94: *reinterpret_cast< bool*>(_v) = _t->readyToFly(); break;
        case 95: *reinterpret_cast< QObject**>(_v) = _t->sysStatusSensorInfo(); break;
        case 96: *reinterpret_cast< bool*>(_v) = _t->allSensorsHealthy(); break;
        case 97: *reinterpret_cast< bool*>(_v) = _t->requiresGpsFix(); break;
        case 98: *reinterpret_cast< double*>(_v) = _t->loadProgress(); break;
        case 99: *reinterpret_cast< bool*>(_v) = _t->isInitialConnectComplete(); break;
        case 100: *reinterpret_cast< bool*>(_v) = _t->orbitActive(); break;
        case 101: *reinterpret_cast< QGCMapCircle**>(_v) = _t->orbitMapCircle(); break;
        case 102: *reinterpret_cast< bool*>(_v) = _t->flying(); break;
        case 103: *reinterpret_cast< bool*>(_v) = _t->landing(); break;
        case 104: *reinterpret_cast< bool*>(_v) = _t->guidedMode(); break;
        case 105: *reinterpret_cast< bool*>(_v) = _t->guidedModeSupported(); break;
        case 106: *reinterpret_cast< bool*>(_v) = _t->pauseVehicleSupported(); break;
        case 107: *reinterpret_cast< bool*>(_v) = _t->orbitModeSupported(); break;
        case 108: *reinterpret_cast< bool*>(_v) = _t->roiModeSupported(); break;
        case 109: *reinterpret_cast< bool*>(_v) = _t->takeoffVehicleSupported(); break;
        case 110: *reinterpret_cast< QString*>(_v) = _t->gotoFlightMode(); break;
        case 111: *reinterpret_cast< bool*>(_v) = _t->haveMRSpeedLimits(); break;
        case 112: *reinterpret_cast< bool*>(_v) = _t->haveFWSpeedLimits(); break;
        case 113: *reinterpret_cast< ParameterManager**>(_v) = _t->parameterManager(); break;
        case 114: *reinterpret_cast< VehicleLinkManager**>(_v) = _t->vehicleLinkManager(); break;
        case 115: *reinterpret_cast< VehicleObjectAvoidance**>(_v) = _t->objectAvoidance(); break;
        case 116: *reinterpret_cast< Autotune**>(_v) = _t->autotune(); break;
        case 117: *reinterpret_cast< Fact**>(_v) = _t->roll(); break;
        case 118: *reinterpret_cast< Fact**>(_v) = _t->pitch(); break;
        case 119: *reinterpret_cast< Fact**>(_v) = _t->heading(); break;
        case 120: *reinterpret_cast< Fact**>(_v) = _t->rollRate(); break;
        case 121: *reinterpret_cast< Fact**>(_v) = _t->pitchRate(); break;
        case 122: *reinterpret_cast< Fact**>(_v) = _t->yawRate(); break;
        case 123: *reinterpret_cast< Fact**>(_v) = _t->groundSpeed(); break;
        case 124: *reinterpret_cast< Fact**>(_v) = _t->airSpeed(); break;
        case 125: *reinterpret_cast< Fact**>(_v) = _t->airSpeedSetpoint(); break;
        case 126: *reinterpret_cast< Fact**>(_v) = _t->climbRate(); break;
        case 127: *reinterpret_cast< Fact**>(_v) = _t->altitudeRelative(); break;
        case 128: *reinterpret_cast< Fact**>(_v) = _t->altitudeAMSL(); break;
        case 129: *reinterpret_cast< Fact**>(_v) = _t->altitudeTuning(); break;
        case 130: *reinterpret_cast< Fact**>(_v) = _t->altitudeTuningSetpoint(); break;
        case 131: *reinterpret_cast< Fact**>(_v) = _t->xTrackError(); break;
        case 132: *reinterpret_cast< Fact**>(_v) = _t->flightDistance(); break;
        case 133: *reinterpret_cast< Fact**>(_v) = _t->distanceToHome(); break;
        case 134: *reinterpret_cast< Fact**>(_v) = _t->missionItemIndex(); break;
        case 135: *reinterpret_cast< Fact**>(_v) = _t->headingToNextWP(); break;
        case 136: *reinterpret_cast< Fact**>(_v) = _t->headingToHome(); break;
        case 137: *reinterpret_cast< Fact**>(_v) = _t->distanceToGCS(); break;
        case 138: *reinterpret_cast< Fact**>(_v) = _t->hobbs(); break;
        case 139: *reinterpret_cast< Fact**>(_v) = _t->throttlePct(); break;
        case 140: *reinterpret_cast< FactGroup**>(_v) = _t->gpsFactGroup(); break;
        case 141: *reinterpret_cast< FactGroup**>(_v) = _t->gps2FactGroup(); break;
        case 142: *reinterpret_cast< FactGroup**>(_v) = _t->windFactGroup(); break;
        case 143: *reinterpret_cast< FactGroup**>(_v) = _t->vibrationFactGroup(); break;
        case 144: *reinterpret_cast< FactGroup**>(_v) = _t->temperatureFactGroup(); break;
        case 145: *reinterpret_cast< FactGroup**>(_v) = _t->clockFactGroup(); break;
        case 146: *reinterpret_cast< FactGroup**>(_v) = _t->setpointFactGroup(); break;
        case 147: *reinterpret_cast< FactGroup**>(_v) = _t->escStatusFactGroup(); break;
        case 148: *reinterpret_cast< FactGroup**>(_v) = _t->estimatorStatusFactGroup(); break;
        case 149: *reinterpret_cast< FactGroup**>(_v) = _t->terrainFactGroup(); break;
        case 150: *reinterpret_cast< FactGroup**>(_v) = _t->distanceSensorFactGroup(); break;
        case 151: *reinterpret_cast< FactGroup**>(_v) = _t->localPositionFactGroup(); break;
        case 152: *reinterpret_cast< FactGroup**>(_v) = _t->localPositionSetpointFactGroup(); break;
        case 153: *reinterpret_cast< FactGroup**>(_v) = _t->hygrometerFactGroup(); break;
        case 154: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->batteries(); break;
        case 155: *reinterpret_cast< Actuators**>(_v) = _t->actuators(); break;
        case 156: *reinterpret_cast< HealthAndArmingCheckReport**>(_v) = _t->healthAndArmingCheckReport(); break;
        case 157: *reinterpret_cast< int*>(_v) = _t->firmwareMajorVersion(); break;
        case 158: *reinterpret_cast< int*>(_v) = _t->firmwareMinorVersion(); break;
        case 159: *reinterpret_cast< int*>(_v) = _t->firmwarePatchVersion(); break;
        case 160: *reinterpret_cast< int*>(_v) = _t->firmwareVersionType(); break;
        case 161: *reinterpret_cast< QString*>(_v) = _t->firmwareVersionTypeString(); break;
        case 162: *reinterpret_cast< int*>(_v) = _t->firmwareCustomMajorVersion(); break;
        case 163: *reinterpret_cast< int*>(_v) = _t->firmwareCustomMinorVersion(); break;
        case 164: *reinterpret_cast< int*>(_v) = _t->firmwareCustomPatchVersion(); break;
        case 165: *reinterpret_cast< QString*>(_v) = _t->gitHash(); break;
        case 166: *reinterpret_cast< quint64*>(_v) = _t->vehicleUID(); break;
        case 167: *reinterpret_cast< QString*>(_v) = _t->vehicleUIDStr(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Vehicle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setArmedShowError(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setFlightMode(*reinterpret_cast< QString*>(_v)); break;
        case 23: _t->setJoystickEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 28: _t->setSoloFirmware(*reinterpret_cast< bool*>(_v)); break;
        case 44: _t->setPrearmError(*reinterpret_cast< QString*>(_v)); break;
        case 81: _t->setVtolInFwdFlight(*reinterpret_cast< bool*>(_v)); break;
        case 92: _t->setCheckListState(*reinterpret_cast< CheckList*>(_v)); break;
        case 104: _t->setGuidedMode(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Vehicle::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_Vehicle.data,
    qt_meta_data_Vehicle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Vehicle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vehicle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Vehicle.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int Vehicle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 164)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 164;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 164)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 164;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 168;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 168;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 168;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 168;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 168;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 168;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Vehicle::coordinateChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Vehicle::joystickEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Vehicle::mavlinkMessageReceived(const mavlink_message_t & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Vehicle::homePositionChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Vehicle::armedPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Vehicle::armedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Vehicle::flightModeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Vehicle::flyingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Vehicle::landingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Vehicle::guidedModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Vehicle::vtolInFwdFlightChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Vehicle::prearmErrorChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Vehicle::soloFirmwareChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Vehicle::defaultCruiseSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Vehicle::defaultHoverSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Vehicle::firmwareTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Vehicle::vehicleTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Vehicle::cameraManagerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Vehicle::hobbsMeterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Vehicle::capabilitiesKnownChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Vehicle::initialPlanRequestCompleteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Vehicle::capabilityBitsChanged(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Vehicle::toolIndicatorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Vehicle::modeIndicatorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Vehicle::textMessageReceived(int _t1, int _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Vehicle::calibrationEventReceived(int _t1, int _t2, int _t3, QSharedPointer<events::parser::ParsedEvent> _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Vehicle::checkListStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Vehicle::messagesReceivedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void Vehicle::messagesSentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void Vehicle::messagesLostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void Vehicle::messageTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Vehicle::newMessageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void Vehicle::messageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Vehicle::formattedMessagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void Vehicle::newFormattedMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Vehicle::latestErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void Vehicle::longitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void Vehicle::currentConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void Vehicle::flowImageIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void Vehicle::rcRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Vehicle::telemetryRRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Vehicle::telemetryLRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Vehicle::telemetryRXErrorsChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Vehicle::telemetryFixedChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Vehicle::telemetryTXBufferChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Vehicle::telemetryLNoiseChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Vehicle::telemetryRNoiseChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void Vehicle::autoDisarmChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 47, nullptr);
}

// SIGNAL 48
void Vehicle::flightModesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 48, nullptr);
}

// SIGNAL 49
void Vehicle::sensorsPresentBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Vehicle::sensorsEnabledBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Vehicle::sensorsHealthBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void Vehicle::sensorsUnhealthyBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void Vehicle::orbitActiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void Vehicle::readyToFlyAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void Vehicle::readyToFlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void Vehicle::allSensorsHealthyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void Vehicle::requiresGpsFixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 57, nullptr);
}

// SIGNAL 58
void Vehicle::haveMRSpeedLimChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 58, nullptr);
}

// SIGNAL 59
void Vehicle::haveFWSpeedLimChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 59, nullptr);
}

// SIGNAL 60
void Vehicle::firmwareVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 60, nullptr);
}

// SIGNAL 61
void Vehicle::firmwareCustomVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 61, nullptr);
}

// SIGNAL 62
void Vehicle::gitHashChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void Vehicle::vehicleUIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 63, nullptr);
}

// SIGNAL 64
void Vehicle::loadProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void Vehicle::rcChannelsChanged(int _t1, int _t2[cMaxRcChannels])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void Vehicle::remoteControlRSSIChanged(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void Vehicle::mavlinkRawImu(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void Vehicle::mavlinkScaledImu1(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void Vehicle::mavlinkScaledImu2(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void Vehicle::mavlinkScaledImu3(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void Vehicle::mavlinkLogData(Vehicle * _t1, uint8_t _t2, uint8_t _t3, uint16_t _t4, uint8_t _t5, QByteArray _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void Vehicle::mavCommandResult(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void Vehicle::mavlinkSerialControl(uint8_t _t1, uint8_t _t2, uint16_t _t3, uint32_t _t4, QByteArray _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void Vehicle::requestProtocolVersion(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void Vehicle::mavlinkStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 75, nullptr);
}

// SIGNAL 76
void Vehicle::gimbalRollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 76, nullptr);
}

// SIGNAL 77
void Vehicle::gimbalPitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 77, nullptr);
}

// SIGNAL 78
void Vehicle::gimbalYawChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 78, nullptr);
}

// SIGNAL 79
void Vehicle::gimbalDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 79, nullptr);
}

// SIGNAL 80
void Vehicle::isROIEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 80, nullptr);
}

// SIGNAL 81
void Vehicle::initialConnectComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 81, nullptr);
}

// SIGNAL 82
void Vehicle::sensorsParametersResetAck(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
