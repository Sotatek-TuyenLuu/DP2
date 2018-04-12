#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gdcmCommon" for configuration "MinSizeRel"
set_property(TARGET gdcmCommon APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmCommon PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmCommon.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL ""
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmCommon.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmCommon )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmCommon "${_IMPORT_PREFIX}/lib/gdcmCommon.lib" "${_IMPORT_PREFIX}/bin/gdcmCommon.dll" )

# Import target "gdcmDICT" for configuration "MinSizeRel"
set_property(TARGET gdcmDICT APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmDICT PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmDICT.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_MINSIZEREL "gdcmDSED;gdcmIOD"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL ""
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmDICT.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmDICT )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmDICT "${_IMPORT_PREFIX}/lib/gdcmDICT.lib" "${_IMPORT_PREFIX}/bin/gdcmDICT.dll" )

# Import target "gdcmDSED" for configuration "MinSizeRel"
set_property(TARGET gdcmDSED APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmDSED PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmDSED.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_MINSIZEREL "gdcmzlib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL "gdcmCommon"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmDSED.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmDSED )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmDSED "${_IMPORT_PREFIX}/lib/gdcmDSED.lib" "${_IMPORT_PREFIX}/bin/gdcmDSED.dll" )

# Import target "gdcmIOD" for configuration "MinSizeRel"
set_property(TARGET gdcmIOD APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmIOD PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmIOD.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_MINSIZEREL "gdcmexpat"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL "gdcmDSED;gdcmCommon"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmIOD.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmIOD )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmIOD "${_IMPORT_PREFIX}/lib/gdcmIOD.lib" "${_IMPORT_PREFIX}/bin/gdcmIOD.dll" )

# Import target "gdcmMSFF" for configuration "MinSizeRel"
set_property(TARGET gdcmMSFF APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmMSFF PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmMSFF.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_MINSIZEREL "gdcmjpeg8;gdcmjpeg12;gdcmjpeg16;gdcmopenjpeg;gdcmcharls"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL "gdcmDSED;gdcmDICT;gdcmIOD"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmMSFF.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmMSFF )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmMSFF "${_IMPORT_PREFIX}/lib/gdcmMSFF.lib" "${_IMPORT_PREFIX}/bin/gdcmMSFF.dll" )

# Import target "gdcmMEXD" for configuration "MinSizeRel"
set_property(TARGET gdcmMEXD APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmMEXD PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmMEXD.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_MINSIZEREL "gdcmMSFF;gdcmDICT;gdcmDSED;gdcmIOD;socketxx"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL ""
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmMEXD.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmMEXD )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmMEXD "${_IMPORT_PREFIX}/lib/gdcmMEXD.lib" "${_IMPORT_PREFIX}/bin/gdcmMEXD.dll" )

# Import target "gdcmjpeg8" for configuration "MinSizeRel"
set_property(TARGET gdcmjpeg8 APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmjpeg8 PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmjpeg8.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmjpeg8.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmjpeg8 )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmjpeg8 "${_IMPORT_PREFIX}/lib/gdcmjpeg8.lib" "${_IMPORT_PREFIX}/bin/gdcmjpeg8.dll" )

# Import target "gdcmjpeg12" for configuration "MinSizeRel"
set_property(TARGET gdcmjpeg12 APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmjpeg12 PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmjpeg12.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmjpeg12.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmjpeg12 )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmjpeg12 "${_IMPORT_PREFIX}/lib/gdcmjpeg12.lib" "${_IMPORT_PREFIX}/bin/gdcmjpeg12.dll" )

# Import target "gdcmjpeg16" for configuration "MinSizeRel"
set_property(TARGET gdcmjpeg16 APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmjpeg16 PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmjpeg16.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmjpeg16.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmjpeg16 )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmjpeg16 "${_IMPORT_PREFIX}/lib/gdcmjpeg16.lib" "${_IMPORT_PREFIX}/bin/gdcmjpeg16.dll" )

# Import target "gdcmexpat" for configuration "MinSizeRel"
set_property(TARGET gdcmexpat APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmexpat PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmexpat.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmexpat.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmexpat )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmexpat "${_IMPORT_PREFIX}/lib/gdcmexpat.lib" "${_IMPORT_PREFIX}/bin/gdcmexpat.dll" )

# Import target "gdcmopenjpeg" for configuration "MinSizeRel"
set_property(TARGET gdcmopenjpeg APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmopenjpeg PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmopenjpeg.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL ""
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmopenjpeg.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmopenjpeg )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmopenjpeg "${_IMPORT_PREFIX}/lib/gdcmopenjpeg.lib" "${_IMPORT_PREFIX}/bin/gdcmopenjpeg.dll" )

# Import target "gdcmcharls" for configuration "MinSizeRel"
set_property(TARGET gdcmcharls APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmcharls PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmcharls.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL ""
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmcharls.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmcharls )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmcharls "${_IMPORT_PREFIX}/lib/gdcmcharls.lib" "${_IMPORT_PREFIX}/bin/gdcmcharls.dll" )

# Import target "gdcmzlib" for configuration "MinSizeRel"
set_property(TARGET gdcmzlib APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmzlib PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmzlib.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmzlib.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmzlib )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmzlib "${_IMPORT_PREFIX}/lib/gdcmzlib.lib" "${_IMPORT_PREFIX}/bin/gdcmzlib.dll" )

# Import target "gdcmgetopt" for configuration "MinSizeRel"
set_property(TARGET gdcmgetopt APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(gdcmgetopt PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/gdcmgetopt.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/gdcmgetopt.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmgetopt )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmgetopt "${_IMPORT_PREFIX}/lib/gdcmgetopt.lib" "${_IMPORT_PREFIX}/bin/gdcmgetopt.dll" )

# Import target "socketxx" for configuration "MinSizeRel"
set_property(TARGET socketxx APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(socketxx PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/socketxx.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL ""
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/socketxx.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS socketxx )
list(APPEND _IMPORT_CHECK_FILES_FOR_socketxx "${_IMPORT_PREFIX}/lib/socketxx.lib" "${_IMPORT_PREFIX}/bin/socketxx.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
