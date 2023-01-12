#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "shapelib::shp" for configuration "Release"
set_property(TARGET shapelib::shp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(shapelib::shp PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/shp.lib"
  )

list(APPEND _cmake_import_check_targets shapelib::shp )
list(APPEND _cmake_import_check_files_for_shapelib::shp "${_IMPORT_PREFIX}/lib/shp.lib" )

# Import target "shapelib::shpcreate" for configuration "Release"
set_property(TARGET shapelib::shpcreate APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(shapelib::shpcreate PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/shpcreate.exe"
  )

list(APPEND _cmake_import_check_targets shapelib::shpcreate )
list(APPEND _cmake_import_check_files_for_shapelib::shpcreate "${_IMPORT_PREFIX}/bin/shpcreate.exe" )

# Import target "shapelib::shpadd" for configuration "Release"
set_property(TARGET shapelib::shpadd APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(shapelib::shpadd PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/shpadd.exe"
  )

list(APPEND _cmake_import_check_targets shapelib::shpadd )
list(APPEND _cmake_import_check_files_for_shapelib::shpadd "${_IMPORT_PREFIX}/bin/shpadd.exe" )

# Import target "shapelib::shpdump" for configuration "Release"
set_property(TARGET shapelib::shpdump APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(shapelib::shpdump PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/shpdump.exe"
  )

list(APPEND _cmake_import_check_targets shapelib::shpdump )
list(APPEND _cmake_import_check_files_for_shapelib::shpdump "${_IMPORT_PREFIX}/bin/shpdump.exe" )

# Import target "shapelib::shprewind" for configuration "Release"
set_property(TARGET shapelib::shprewind APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(shapelib::shprewind PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/shprewind.exe"
  )

list(APPEND _cmake_import_check_targets shapelib::shprewind )
list(APPEND _cmake_import_check_files_for_shapelib::shprewind "${_IMPORT_PREFIX}/bin/shprewind.exe" )

# Import target "shapelib::dbfcreate" for configuration "Release"
set_property(TARGET shapelib::dbfcreate APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(shapelib::dbfcreate PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/dbfcreate.exe"
  )

list(APPEND _cmake_import_check_targets shapelib::dbfcreate )
list(APPEND _cmake_import_check_files_for_shapelib::dbfcreate "${_IMPORT_PREFIX}/bin/dbfcreate.exe" )

# Import target "shapelib::dbfadd" for configuration "Release"
set_property(TARGET shapelib::dbfadd APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(shapelib::dbfadd PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/dbfadd.exe"
  )

list(APPEND _cmake_import_check_targets shapelib::dbfadd )
list(APPEND _cmake_import_check_files_for_shapelib::dbfadd "${_IMPORT_PREFIX}/bin/dbfadd.exe" )

# Import target "shapelib::dbfdump" for configuration "Release"
set_property(TARGET shapelib::dbfdump APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(shapelib::dbfdump PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/dbfdump.exe"
  )

list(APPEND _cmake_import_check_targets shapelib::dbfdump )
list(APPEND _cmake_import_check_files_for_shapelib::dbfdump "${_IMPORT_PREFIX}/bin/dbfdump.exe" )

# Import target "shapelib::shptreedump" for configuration "Release"
set_property(TARGET shapelib::shptreedump APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(shapelib::shptreedump PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/shptreedump.exe"
  )

list(APPEND _cmake_import_check_targets shapelib::shptreedump )
list(APPEND _cmake_import_check_files_for_shapelib::shptreedump "${_IMPORT_PREFIX}/bin/shptreedump.exe" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
