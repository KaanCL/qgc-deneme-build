# Install script for directory: C:/QGC-ROS2/qgroundcontrol

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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/QGroundControl.exe")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild" TYPE EXECUTABLE FILES "C:/QGC-ROS2/cmakeBuild/QGroundControl.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/qgroundcontrol/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild/qgroundcontrol" TYPE DIRECTORY FILES "C:/QGC-ROS2/qgroundcontrol/resources/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/applications/org.mavlink.qgroundcontrol.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild/applications" TYPE FILE FILES "C:/QGC-ROS2/qgroundcontrol/deploy/org.mavlink.qgroundcontrol.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/icons/hicolor/128x128/apps/org.mavlink.qgroundcontrol.png")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild/icons/hicolor/128x128/apps" TYPE FILE RENAME "org.mavlink.qgroundcontrol.png" FILES "C:/QGC-ROS2/qgroundcontrol/resources/icons/qgroundcontrol.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/metainfo/org.mavlink.qgroundcontrol.metainfo.xml")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild/metainfo" TYPE FILE FILES "C:/QGC-ROS2/qgroundcontrol/deploy/org.mavlink.qgroundcontrol.metainfo.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild//qml")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild/" TYPE DIRECTORY FILES "C:/Qt/5.15.2/msvc2019_64/qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/Qt5QuickControls2.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild" TYPE FILE FILES "C:/Qt/5.15.2/msvc2019_64/bin/Qt5QuickControls2.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/Qt5MultimediaQuick.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild" TYPE FILE FILES "C:/Qt/5.15.2/msvc2019_64/bin/Qt5MultimediaQuick.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/Qt5QuickControls2.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild" TYPE FILE FILES "C:/Qt/5.15.2/msvc2019_64/bin/Qt5QuickControls2.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/Qt5QuickShapes.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild" TYPE FILE FILES "C:/Qt/5.15.2/msvc2019_64/bin/Qt5QuickShapes.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/Qt5QmlWorkerScript.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild" TYPE FILE FILES "C:/Qt/5.15.2/msvc2019_64/bin/Qt5QmlWorkerScript.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/Qt5RemoteObjects.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild" TYPE FILE FILES "C:/Qt/5.15.2/msvc2019_64/bin/Qt5RemoteObjects.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/QGC-ROS2/cmakeBuild/Qt5QmlWorkerScript.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "C:/QGC-ROS2/cmakeBuild" TYPE FILE FILES "C:/Qt/5.15.2/msvc2019_64/bin/Qt5QmlWorkerScript.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
        file(READ "C:/QGC-ROS2/cmakeBuild/QGroundControl_path" _file)
        execute_process(
            COMMAND "C:/Qt/Tools/CMake_64/bin/cmake.exe" -E
                env PATH="C:/Qt/5.15.2/msvc2019_64/bin" "C:/Qt/5.15.2/msvc2019_64/bin/windeployqt.exe"
                    --dry-run
                    --no-compiler-runtime
                    --no-angle
                    --no-opengl-sw
                    --list mapping
                    ${_file}
            OUTPUT_VARIABLE _output
            OUTPUT_STRIP_TRAILING_WHITESPACE
        )
        separate_arguments(_files WINDOWS_COMMAND ${_output})
        while(_files)
            list(GET _files 0 _src)
            list(GET _files 1 _dest)
            execute_process(
                COMMAND "C:/Qt/Tools/CMake_64/bin/cmake.exe" -E
                    copy ${_src} "${CMAKE_INSTALL_PREFIX}/QGroundControl-installer.exe/${_dest}"
            )
            list(REMOVE_AT _files 0 1)
        endwhile()
        
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-console-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-console-l1-2-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-datetime-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-debug-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-errorhandling-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-file-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-file-l1-2-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-file-l2-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-handle-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-heap-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-interlocked-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-libraryloader-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-localization-l1-2-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-memory-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-namedpipe-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-processenvironment-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-processthreads-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-processthreads-l1-1-1.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-profile-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-rtlsupport-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-string-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-synch-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-synch-l1-2-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-sysinfo-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-timezone-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-core-util-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-conio-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-convert-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-environment-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-filesystem-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-heap-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-locale-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-math-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-multibyte-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-private-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-process-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-runtime-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-stdio-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-string-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-time-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/api-ms-win-crt-utility-l1-1-0.dll"
    "C:/Program Files (x86)/Windows Kits/10/Redist/10.0.19041.0/ucrt/DLLs/x64/ucrtbase.dll"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE DIRECTORY FILES "")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/QGC-ROS2/cmakeBuild/libs/cmake_install.cmake")
  include("C:/QGC-ROS2/cmakeBuild/src/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/QGC-ROS2/cmakeBuild/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
