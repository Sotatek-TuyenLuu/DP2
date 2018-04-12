#-----------------------------------------------------------------------------
#
# GDCMConfig.cmake - CMake configuration file for external projects.
#
# This file is configured by GDCM and used by the UseGDCM.cmake
# module to load GDCM's settings for an external project.

# The GDCM version number.
set(GDCM_MAJOR_VERSION "2")
set(GDCM_MINOR_VERSION "4")
set(GDCM_BUILD_VERSION "1")

# The libraries.
set(GDCM_LIBRARIES "")

# The CMake macros dir.
set(GDCM_CMAKE_DIR "")

# The configuration options.
set(GDCM_BUILD_SHARED_LIBS "ON")
set(GDCM_USE_VTK "OFF")

# The "use" file.
set(GDCM_USE_FILE "")

# The VTK options.
if(GDCM_USE_VTK)
  set(GDCM_VTK_DIR "")
endif()

get_filename_component(SELF_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
if(EXISTS ${SELF_DIR}/GDCMTargets.cmake)
  # This is an install tree
  include(${SELF_DIR}/GDCMTargets.cmake)
  get_filename_component(GDCM_INCLUDE_ROOT "${SELF_DIR}/../../include/gdcm-2.4" ABSOLUTE)
  set(GDCM_INCLUDE_DIRS ${GDCM_INCLUDE_ROOT})
  get_filename_component(GDCM_LIB_ROOT "${SELF_DIR}/../../lib" ABSOLUTE)
  set(GDCM_LIBRARY_DIRS ${GDCM_LIB_ROOT})
else()
  if(EXISTS ${SELF_DIR}/GDCMExports.cmake)
    # This is a build tree
    set( GDCM_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/GDCM/Source/Common;E:/D/MITK-superbuild/ep/src/GDCM-build/Source/Common;E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition;E:/D/MITK-superbuild/ep/src/GDCM/Source/MediaStorageAndFileFormat;E:/D/MITK-superbuild/ep/src/GDCM/Source/MessageExchangeDefinition;E:/D/MITK-superbuild/ep/src/GDCM/Source/DataDictionary;E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition")
    set(GDCM_LIBRARY_DIRS "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/$(Configuration)")

    include(${SELF_DIR}/GDCMExports.cmake)

  else()
    message(FATAL_ERROR "ooops")
  endif()
endif()

set(GDCM_USE_FILE ${SELF_DIR}/UseGDCM.cmake)

# Backward compatible part:
set(GDCM_FOUND       TRUE)
