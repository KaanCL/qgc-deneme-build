# Install script for directory: C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/QGC-ROS2/cmakeBuild/libs/qmdnsengine/src/qmdnsengine.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qmdnsengine" TYPE FILE FILES
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/abstractserver.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/bitmap.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/browser.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/cache.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/dns.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/hostname.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/mdns.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/message.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/prober.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/provider.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/query.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/record.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/resolver.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/server.h"
    "C:/QGC-ROS2/qgroundcontrol/libs/qmdnsengine/src/include/qmdnsengine/service.h"
    "C:/QGC-ROS2/cmakeBuild/libs/qmdnsengine/src/qmdnsengine_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig.cmake"
         "C:/QGC-ROS2/cmakeBuild/libs/qmdnsengine/src/CMakeFiles/Export/a37091932cd5bb4ab4add08ef219ad85/qmdnsengineConfig.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine/qmdnsengineConfig.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine" TYPE FILE FILES "C:/QGC-ROS2/cmakeBuild/libs/qmdnsengine/src/CMakeFiles/Export/a37091932cd5bb4ab4add08ef219ad85/qmdnsengineConfig.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine" TYPE FILE FILES "C:/QGC-ROS2/cmakeBuild/libs/qmdnsengine/src/CMakeFiles/Export/a37091932cd5bb4ab4add08ef219ad85/qmdnsengineConfig-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qmdnsengine" TYPE FILE FILES "C:/QGC-ROS2/cmakeBuild/libs/qmdnsengine/src/qmdnsengineConfigVersion.cmake")
endif()

