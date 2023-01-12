# Install script for directory: C:/QGC-ROS2/qgroundcontrol/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/QGroundControl")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/QGC-ROS2/cmakeBuild/src/ui/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/ADSB/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/Airmap/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/AnalyzeView/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/api/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/Audio/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/AutoPilotPlugins/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/Camera/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/comm/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/Compression/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/FactSystem/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/FirmwarePlugin/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/FlightDisplay/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/FlightMap/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/FollowMe/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/Geo/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/GPS/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/Joystick/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/RosComm/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/MissionManager/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/PlanView/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/PositionManager/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/QmlControls/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/QtLocationPlugin/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/Settings/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/Terrain/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/uas/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/Vehicle/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/VehicleSetup/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/VideoManager/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/VideoReceiver/cmake_install.cmake")

endif()

