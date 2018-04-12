if(CMAKE_VERSION VERSION_LESS 3.2)
  message(FATAL_ERROR "MITK requires at least CMake Version 3.2")
endif()

# The MITK version number
set(MITK_VERSION_MAJOR "2016")
set(MITK_VERSION_MINOR "3")
set(MITK_VERSION_PATCH "0")
set(MITK_VERSION_STRING "2016.3.0")

#-----------------------------------------------------------------------------
# C++ language standard
#-----------------------------------------------------------------------------

set(MITK_CXX_STANDARD 11)

#-----------------------------------------------------------------------------
# Include required CMake scripts
#-----------------------------------------------------------------------------

# Update the CMake module path
set(MITK_CMAKE_MODULE_PATH "E:/D/MITK/CMake")
list(APPEND CMAKE_MODULE_PATH ${MITK_CMAKE_MODULE_PATH})

# Standard CMake macros
include(CMakeParseArguments)
include(FeatureSummary)
include(FindPackageHandleStandardArgs)
include(GenerateExportHeader)

# Include MITK macros
include(MacroParseArguments)
include(mitkFunctionAddCustomModuleTest)
include(mitkFunctionCheckMitkCompatibility)
include(mitkFunctionCheckModuleDependencies)
include(mitkFunctionCreateBlueBerryApplication)
include(mitkFunctionCreateModule)
include(mitkFunctionCreatePlugin)
include(mitkFunctionCreateProvisioningFile)
include(mitkFunctionCreateWindowsBatchScript)
include(mitkFunctionGetLibrarySearchPaths)
include(mitkFunctionInstallAutoLoadModules)
include(mitkFunctionInstallCTKPlugin)
include(mitkFunctionInstallProvisioningFiles)
include(mitkFunctionInstallThirdPartyCTKPlugins)
include(mitkFunctionOrganizeSources)
include(mitkFunctionUseModules)
include(mitkMacroCreateExecutable)
include(mitkMacroCreateModuleTests)
include(mitkMacroFindDependency)
include(mitkMacroGenerateToolsLibrary)
include(mitkMacroGetPMDPlatformString)
include(mitkMacroInstall)
include(mitkMacroInstallHelperApp)
include(mitkMacroInstallTargets)
include(mitkMacroMultiplexPicType)

#-----------------------------------------------------------------------------
# MITK flags and directories
#-----------------------------------------------------------------------------

# MITK compiler flags
set(MITK_C_FLAGS " /openmp")
set(MTTK_C_FLAGS_DEBUG "")
set(MITK_C_FLAGS_RELEASE "")
set(MITK_CXX_FLAGS "  /openmp -D_WIN32_WINNT=0x0501 -DPOCO_NO_UNWINDOWS -DWIN32_LEAN_AND_MEAN -DNOMINMAX /wd4005 /wd4231 /wd4316")
set(MTTK_CXX_FLAGS_DEBUG "")
set(MITK_CXX_FLAGS_RELEASE "")

# MITK linker flags
set(MITK_EXE_LINKER_FLAGS "")
set(MITK_SHARED_LINKER_FLAGS "")
set(MITK_MODULE_LINKER_FLAGS "")

# MITK specific directories
set(MITK_SOURCE_DIR "E:/D/MITK")
set(MITK_BINARY_DIR "E:/D/MITK-superbuild/MITK-build")
set(MITK_CMAKE_DIR "E:/D/MITK/CMake")

# MITK output directories
set(MITK_CMAKE_RUNTIME_OUTPUT_DIRECTORY "E:/D/MITK-superbuild/MITK-build/bin")
set(MITK_CMAKE_ARCHIVE_OUTPUT_DIRECTORY "E:/D/MITK-superbuild/MITK-build/lib")
set(MITK_CMAKE_LIBRARY_OUTPUT_DIRECTORY "E:/D/MITK-superbuild/MITK-build/lib")

#-----------------------------------------------------------------------------
# Miscellaneous variables
#-----------------------------------------------------------------------------

# Internal version numbers, used for approximate compatibility checks
# of a MITK development version (non-release).
set(MITK_VERSION_PLUGIN_SYSTEM 2) # dropped legacy BlueBerry plug-in CMake support

set(MITK_DATA_DIR "")
set(UTILITIES_DIR "E:/D/MITK/Utilities")
set(REGISTER_QFUNCTIONALITY_CPP_IN "")
set(MITK_DOXYGEN_TAGFILE_NAME "")
set(MITK_LEGACY_EXPORT_MACRO_NAME 1)

set(DCMTK_CMAKE_DEBUG_POSTFIX d)

# Get the canonical name of the directory to avoid potential case mismatch,
# e.g. in the drive letter on Windows.
get_filename_component(CMAKE_CURRENT_LIST_DIR_REALPATH ${CMAKE_CURRENT_LIST_DIR} REALPATH)
if(CMAKE_CURRENT_LIST_DIR_REALPATH STREQUAL MITK_BINARY_DIR)
  set(MITK_EXTERNAL_PROJECT_PREFIX E:/D/MITK-superbuild/ep)
endif()

set(MITK_MODULES_PACKAGE_DEPENDS_DIR "E:/D/MITK/CMake/PackageDepends")
if(MODULES_PACKAGE_DEPENDS_DIRS)
  list(APPEND MODULES_PACKAGE_DEPENDS_DIRS ${MITK_MODULES_PACKAGE_DEPENDS_DIR})
  list(REMOVE_DUPLICATES MODULES_PACKAGE_DEPENDS_DIRS)
else()
  set(MODULES_PACKAGE_DEPENDS_DIRS ${MITK_MODULES_PACKAGE_DEPENDS_DIR})
endif()

#-----------------------------------------------------------------------------
# External dependencies
#-----------------------------------------------------------------------------

list(APPEND CMAKE_PREFIX_PATH "E:/D/MITK-superbuild/ep")

# -----------------------------------------
# Qt variables and dependencies

set(MITK_USE_QT ON)

if(MITK_USE_QT)
  set(MITK_QT5_MINIMUM_VERSION 5.0.0)
  set(MITK_QT5_COMPONENTS Concurrent;OpenGL;PrintSupport;Script;Sql;Svg;Widgets;WebKitWidgets;Xml;XmlPatterns;UiTools;Help)
  mitkMacroFindDependency(Qt5 ${MITK_QT5_MINIMUM_VERSION} COMPONENTS ${MITK_QT5_COMPONENTS})
endif()

# -----------------------------------------
# Special Python variables

set(MITK_USE_Python OFF)
set(MITK_USE_SYSTEM_PYTHON )
if(MITK_USE_Python)
  set(PYTHON_EXECUTABLE "" CACHE FILEPATH "")
  set(PYTHON_INCLUDE_DIR "" CACHE PATH "")
  set(PYTHON_LIBRARY "" CACHE FILEPATH "")
  set(PYTHON_INCLUDE_DIR2 "" CACHE PATH "")

  mitkMacroFindDependency(PythonLibs)
  mitkMacroFindDependency(PythonInterp)
endif()

# -----------------------------------------
# Special Boost variables

set(MITK_USE_Boost TRUE)
set(MITK_USE_Boost_LIBRARIES )
set(MITK_USE_SYSTEM_Boost OFF)
if(MITK_USE_Boost)
  set(BOOST_ROOT "E:/D/MITK-superbuild/ep" CACHE PATH "")
  set(BOOST_LIBRARYDIR "E:/D/MITK-superbuild/ep/lib" CACHE PATH "")
  set(Boost_ADDITIONAL_VERSIONS "1.59" "1.59.0")
endif()

# We need this later for a DCMTK workaround
set(_dcmtk_dir_orig "E:/D/MITK-superbuild/ep")

# -----------------------------------------
# External dependencies from the superbuild
# or injected from somewhere else via
# <project>_DIR variables.


set(MITK_USE_Poco ON)
set(MITK_Poco_DIR "E:/D/MITK-superbuild/ep/lib/cmake/Poco")
set(MITK_Poco_COMPONENTS Foundation;Net;Util;XML;Zip)

set(MITK_USE_DCMTK ON)
set(MITK_DCMTK_DIR "E:/D/MITK-superbuild/ep")
set(MITK_DCMTK_COMPONENTS )

set(MITK_USE_OpenIGTLink OFF)
set(MITK_OpenIGTLink_DIR "")
set(MITK_OpenIGTLink_COMPONENTS )

set(MITK_USE_tinyxml ON)
set(MITK_tinyxml_DIR "E:/D/MITK-superbuild/ep/lib/cmake/tinyxml")
set(MITK_tinyxml_COMPONENTS )

set(MITK_USE_GDCM ON)
set(MITK_GDCM_DIR "E:/D/MITK-superbuild/ep/lib/gdcm-2.4")
set(MITK_GDCM_COMPONENTS )

set(MITK_USE_GLUT OFF)
set(MITK_GLUT_DIR "")
set(MITK_GLUT_COMPONENTS )

set(MITK_USE_Raptor2 OFF)
set(MITK_Raptor2_DIR "")
set(MITK_Raptor2_COMPONENTS )

set(MITK_USE_Eigen ON)
set(MITK_Eigen_DIR "Eigen_DIR-NOTFOUND")
set(MITK_Eigen_COMPONENTS )

set(MITK_USE_GLEW ON)
set(MITK_GLEW_DIR "E:/D/MITK-superbuild/ep/lib/cmake/GLEW")
set(MITK_GLEW_COMPONENTS )

set(MITK_USE_ANN ON)
set(MITK_ANN_DIR "E:/D/MITK-superbuild/ep/lib/cmake/ANN")
set(MITK_ANN_COMPONENTS )

set(MITK_USE_CppUnit ON)
set(MITK_CppUnit_DIR "E:/D/MITK-superbuild/ep/lib/cmake/CppUnit")
set(MITK_CppUnit_COMPONENTS )

set(MITK_USE_PCRE OFF)
set(MITK_PCRE_DIR "")
set(MITK_PCRE_COMPONENTS )

set(MITK_USE_ZLIB FALSE)
set(MITK_ZLIB_DIR "")
set(MITK_ZLIB_COMPONENTS )

set(MITK_USE_HDF5 OFF)
set(MITK_HDF5_DIR "")
set(MITK_HDF5_COMPONENTS )

set(MITK_USE_SWIG OFF)
set(MITK_SWIG_DIR "")
set(MITK_SWIG_COMPONENTS )

set(MITK_USE_Python OFF)
set(MITK_Python_DIR "")
set(MITK_Python_COMPONENTS )

set(MITK_USE_Numpy OFF)
set(MITK_Numpy_DIR "")
set(MITK_Numpy_COMPONENTS )

set(MITK_USE_OpenCV OFF)
set(MITK_OpenCV_DIR "")
set(MITK_OpenCV_COMPONENTS )

set(MITK_USE_Vigra OFF)
set(MITK_Vigra_DIR "")
set(MITK_Vigra_COMPONENTS )

set(MITK_USE_ITK TRUE)
set(MITK_ITK_DIR "E:/D/MITK-superbuild/ep/lib/cmake/ITK-4.7")
set(MITK_ITK_COMPONENTS )

set(MITK_USE_VTK TRUE)
set(MITK_VTK_DIR "E:/D/MITK-superbuild/ep/lib/cmake/vtk-6.2")
set(MITK_VTK_COMPONENTS )

set(MITK_USE_Boost TRUE)
set(MITK_Boost_DIR "Boost_DIR-NOTFOUND")
set(MITK_Boost_COMPONENTS )

set(MITK_USE_SimpleITK OFF)
set(MITK_SimpleITK_DIR "")
set(MITK_SimpleITK_COMPONENTS )

set(MITK_USE_ACVD OFF)
set(MITK_ACVD_DIR "")
set(MITK_ACVD_COMPONENTS )

set(MITK_USE_CTK ON)
set(MITK_CTK_DIR "E:/D/MITK-superbuild/ep/src/CTK-build")
set(MITK_CTK_COMPONENTS )

set(MITK_USE_Rasqal OFF)
set(MITK_Rasqal_DIR "")
set(MITK_Rasqal_COMPONENTS )

set(MITK_USE_Redland OFF)
set(MITK_Redland_DIR "")
set(MITK_Redland_COMPONENTS )

set(MITK_USE_SOFA OFF)
set(MITK_SOFA_DIR "")
set(MITK_SOFA_COMPONENTS )

set(MITK_USE_VMTK OFF)
set(MITK_VMTK_DIR "")
set(MITK_VMTK_COMPONENTS )

set(MITK_USE_Qwt ON)
set(MITK_Qwt_DIR "E:/D/MITK-superbuild/ep/lib/cmake/Qwt")
set(MITK_Qwt_COMPONENTS )

if(MITK_USE_Poco)
  set(Poco_DIR ${MITK_Poco_DIR})
  if(MITK_Poco_COMPONENTS)
    mitkMacroFindDependency(Poco COMPONENTS ${MITK_Poco_COMPONENTS})
  else()
    mitkMacroFindDependency(Poco)
  endif()
endif()
if(MITK_USE_DCMTK)
  set(DCMTK_DIR ${MITK_DCMTK_DIR})
  if(MITK_DCMTK_COMPONENTS)
    mitkMacroFindDependency(DCMTK COMPONENTS ${MITK_DCMTK_COMPONENTS})
  else()
    mitkMacroFindDependency(DCMTK)
  endif()
endif()
if(MITK_USE_OpenIGTLink)
  set(OpenIGTLink_DIR ${MITK_OpenIGTLink_DIR})
  if(MITK_OpenIGTLink_COMPONENTS)
    mitkMacroFindDependency(OpenIGTLink COMPONENTS ${MITK_OpenIGTLink_COMPONENTS})
  else()
    mitkMacroFindDependency(OpenIGTLink)
  endif()
endif()
if(MITK_USE_tinyxml)
  set(tinyxml_DIR ${MITK_tinyxml_DIR})
  if(MITK_tinyxml_COMPONENTS)
    mitkMacroFindDependency(tinyxml COMPONENTS ${MITK_tinyxml_COMPONENTS})
  else()
    mitkMacroFindDependency(tinyxml)
  endif()
endif()
if(MITK_USE_GDCM)
  set(GDCM_DIR ${MITK_GDCM_DIR})
  if(MITK_GDCM_COMPONENTS)
    mitkMacroFindDependency(GDCM COMPONENTS ${MITK_GDCM_COMPONENTS})
  else()
    mitkMacroFindDependency(GDCM)
  endif()
endif()
if(MITK_USE_GLUT)
  set(GLUT_DIR ${MITK_GLUT_DIR})
  if(MITK_GLUT_COMPONENTS)
    mitkMacroFindDependency(GLUT COMPONENTS ${MITK_GLUT_COMPONENTS})
  else()
    mitkMacroFindDependency(GLUT)
  endif()
endif()
if(MITK_USE_Raptor2)
  set(Raptor2_DIR ${MITK_Raptor2_DIR})
  if(MITK_Raptor2_COMPONENTS)
    mitkMacroFindDependency(Raptor2 COMPONENTS ${MITK_Raptor2_COMPONENTS})
  else()
    mitkMacroFindDependency(Raptor2)
  endif()
endif()
if(MITK_USE_Eigen)
  set(Eigen_DIR ${MITK_Eigen_DIR})
  if(MITK_Eigen_COMPONENTS)
    mitkMacroFindDependency(Eigen COMPONENTS ${MITK_Eigen_COMPONENTS})
  else()
    mitkMacroFindDependency(Eigen)
  endif()
endif()
if(MITK_USE_GLEW)
  set(GLEW_DIR ${MITK_GLEW_DIR})
  if(MITK_GLEW_COMPONENTS)
    mitkMacroFindDependency(GLEW COMPONENTS ${MITK_GLEW_COMPONENTS})
  else()
    mitkMacroFindDependency(GLEW)
  endif()
endif()
if(MITK_USE_ANN)
  set(ANN_DIR ${MITK_ANN_DIR})
  if(MITK_ANN_COMPONENTS)
    mitkMacroFindDependency(ANN COMPONENTS ${MITK_ANN_COMPONENTS})
  else()
    mitkMacroFindDependency(ANN)
  endif()
endif()
if(MITK_USE_CppUnit)
  set(CppUnit_DIR ${MITK_CppUnit_DIR})
  if(MITK_CppUnit_COMPONENTS)
    mitkMacroFindDependency(CppUnit COMPONENTS ${MITK_CppUnit_COMPONENTS})
  else()
    mitkMacroFindDependency(CppUnit)
  endif()
endif()
if(MITK_USE_HDF5)
  set(HDF5_DIR ${MITK_HDF5_DIR})
  if(MITK_HDF5_COMPONENTS)
    mitkMacroFindDependency(HDF5 COMPONENTS ${MITK_HDF5_COMPONENTS})
  else()
    mitkMacroFindDependency(HDF5)
  endif()
endif()
if(MITK_USE_OpenCV)
  set(OpenCV_DIR ${MITK_OpenCV_DIR})
  if(MITK_OpenCV_COMPONENTS)
    mitkMacroFindDependency(OpenCV COMPONENTS ${MITK_OpenCV_COMPONENTS})
  else()
    mitkMacroFindDependency(OpenCV)
  endif()
endif()
if(MITK_USE_Vigra)
  set(Vigra_DIR ${MITK_Vigra_DIR})
  if(MITK_Vigra_COMPONENTS)
    mitkMacroFindDependency(Vigra COMPONENTS ${MITK_Vigra_COMPONENTS})
  else()
    mitkMacroFindDependency(Vigra)
  endif()
endif()
if(MITK_USE_ITK)
  set(ITK_DIR ${MITK_ITK_DIR})
  if(MITK_ITK_COMPONENTS)
    mitkMacroFindDependency(ITK COMPONENTS ${MITK_ITK_COMPONENTS})
  else()
    mitkMacroFindDependency(ITK)
  endif()
endif()
if(MITK_USE_VTK)
  set(VTK_DIR ${MITK_VTK_DIR})
  if(MITK_VTK_COMPONENTS)
    mitkMacroFindDependency(VTK COMPONENTS ${MITK_VTK_COMPONENTS})
  else()
    mitkMacroFindDependency(VTK)
  endif()
endif()
if(MITK_USE_Boost)
  set(Boost_DIR ${MITK_Boost_DIR})
  if(MITK_Boost_COMPONENTS)
    mitkMacroFindDependency(Boost COMPONENTS ${MITK_Boost_COMPONENTS})
  else()
    mitkMacroFindDependency(Boost)
  endif()
endif()
if(MITK_USE_SimpleITK)
  set(SimpleITK_DIR ${MITK_SimpleITK_DIR})
  if(MITK_SimpleITK_COMPONENTS)
    mitkMacroFindDependency(SimpleITK COMPONENTS ${MITK_SimpleITK_COMPONENTS})
  else()
    mitkMacroFindDependency(SimpleITK)
  endif()
endif()
if(MITK_USE_ACVD)
  set(ACVD_DIR ${MITK_ACVD_DIR})
  if(MITK_ACVD_COMPONENTS)
    mitkMacroFindDependency(ACVD COMPONENTS ${MITK_ACVD_COMPONENTS})
  else()
    mitkMacroFindDependency(ACVD)
  endif()
endif()
if(MITK_USE_CTK)
  set(CTK_DIR ${MITK_CTK_DIR})
  if(MITK_CTK_COMPONENTS)
    mitkMacroFindDependency(CTK COMPONENTS ${MITK_CTK_COMPONENTS})
  else()
    mitkMacroFindDependency(CTK)
  endif()
endif()
if(MITK_USE_Rasqal)
  set(Rasqal_DIR ${MITK_Rasqal_DIR})
  if(MITK_Rasqal_COMPONENTS)
    mitkMacroFindDependency(Rasqal COMPONENTS ${MITK_Rasqal_COMPONENTS})
  else()
    mitkMacroFindDependency(Rasqal)
  endif()
endif()
if(MITK_USE_Redland)
  set(Redland_DIR ${MITK_Redland_DIR})
  if(MITK_Redland_COMPONENTS)
    mitkMacroFindDependency(Redland COMPONENTS ${MITK_Redland_COMPONENTS})
  else()
    mitkMacroFindDependency(Redland)
  endif()
endif()
if(MITK_USE_SOFA)
  set(SOFA_DIR ${MITK_SOFA_DIR})
  if(MITK_SOFA_COMPONENTS)
    mitkMacroFindDependency(SOFA COMPONENTS ${MITK_SOFA_COMPONENTS})
  else()
    mitkMacroFindDependency(SOFA)
  endif()
endif()
if(MITK_USE_VMTK)
  set(VMTK_DIR ${MITK_VMTK_DIR})
  if(MITK_VMTK_COMPONENTS)
    mitkMacroFindDependency(VMTK COMPONENTS ${MITK_VMTK_COMPONENTS})
  else()
    mitkMacroFindDependency(VMTK)
  endif()
endif()
if(MITK_USE_Qwt)
  set(Qwt_DIR ${MITK_Qwt_DIR})
  if(MITK_Qwt_COMPONENTS)
    mitkMacroFindDependency(Qwt COMPONENTS ${MITK_Qwt_COMPONENTS})
  else()
    mitkMacroFindDependency(Qwt)
  endif()
endif()

# Ensure the MITK module path comes first
set(CMAKE_MODULE_PATH ${MITK_CMAKE_MODULE_PATH} ${CMAKE_MODULE_PATH})

# -----------------------------------------
# Special handling for DCMTK

if(MITK_USE_DCMTK)
  # Due to the preferred CONFIG mode in find_package calls above,
  # the DCMTKConfig.cmake file is read, which does not provide useful
  # package information. We explictly need MODULE mode to find DCMTK.
  if(${_dcmtk_dir_orig} MATCHES "${MITK_EXTERNAL_PROJECT_PREFIX}.*")
    # Help our FindDCMTK.cmake script find our super-build DCMTK
    set(DCMTK_DIR ${MITK_EXTERNAL_PROJECT_PREFIX})
  else()
    # Use the original value
    set(DCMTK_DIR ${_dcmtk_dir_orig})
  endif()
  find_package(DCMTK REQUIRED MODULE)
endif()

# -----------------------------------------
# Special handling for SOFA

if(MITK_USE_SOFA)
  # The SOFAConfig.cmake file does not provide exported targets or
  # libraries with absolute paths, hence we need to make the link
  # directories globally available until the SOFAConfig.cmake file
  # supports a proper mechanism for handling targets.
# find_package(SOFA PATHS ${SOFA_DIR} CONFIG REQUIRED)
  link_directories(${SOFA_LIBRARY_DIRS})
endif()

# -----------------------------------------
# Special handling for VMTK

if(MITK_USE_VMTK)
  # Same as SOFA above
  link_directories(${VMTK_LIBRARY_DIRS})
endif()

# -----------------------------------------
# Special handling for Boost

if(MITK_USE_Boost)
  # Same as SOFA above
  link_directories(${Boost_LIBRARY_DIRS})
endif()

# -----------------------------------------
# Special handling for OpenIGTLink

if(MITK_USE_OpenIGTLink)
  # Same as SOFA above
  link_directories(${OpenIGTLink_LIBRARY_DIRS})
endif()

# -----------------------------------------
# Internal project dependencies

set(CppMicroServices_DIR "E:/D/MITK-superbuild/MITK-build/Modules/CppMicroServices")
mitkMacroFindDependency(CppMicroServices)

set(MITK_USE_BLUEBERRY ON)
if(MITK_USE_BLUEBERRY)

  set(MITK_PLUGIN_USE_FILE "E:/D/MITK-superbuild/MITK-build/MitkPluginUseFile.cmake")
  if(MITK_PLUGIN_USE_FILE)
    if(EXISTS "${MITK_PLUGIN_USE_FILE}")
      include("${MITK_PLUGIN_USE_FILE}")
    endif()
  endif()

  set(MITK_PLUGIN_PROVISIONING_FILE "E:/D/MITK-superbuild/MITK-build/bin/MitkWorkbench.provisioning")
  set(MITK_PROVISIONING_FILES
      "${BLUEBERRY_PLUGIN_PROVISIONING_FILE}"
      "${MITK_PLUGIN_PROVISIONING_FILE}")

endif()

set(BLUEBERRY_USE_QT_HELP OFF)
if(BLUEBERRY_USE_QT_HELP AND DOXYGEN_VERSION VERSION_LESS "1.8.7")
  message("Setting BLUEBERRY_USE_QT_HELP to OFF because Doxygen version 1.8.7 or newer not found.")
  set(BLUEBERRY_USE_QT_HELP OFF)
endif()

set(BLUEBERRY_QTPLUGIN_PATH "")

set(QT_HELPGENERATOR_EXECUTABLE "C:/Qt/5.4/msvc2013_opengl/bin/qhelpgenerator.exe")
set(QT_COLLECTIONGENERATOR_EXECUTABLE "C:/Qt/5.4/msvc2013_opengl/bin/qcollectiongenerator.exe")
set(QT_ASSISTANT_EXECUTABLE "C:/Qt/5.4/msvc2013_opengl/bin/assistant.exe")
set(QT_XMLPATTERNS_EXECUTABLE "C:/Qt/5.4/msvc2013_opengl/bin/xmlpatterns.exe")


#-----------------------------------------------------------------------------
# MITK sub-project variables
#-----------------------------------------------------------------------------

# External SDK directories
set(MITK_PMD_SDK_DIR )

# MITK ToF use variables

set(MITK_TOF_PMDCAMCUBE_AVAILABLE OFF)
if(MITK_TOF_PMDCAMCUBE_AVAILABLE AND NOT ${PROJECT_NAME} STREQUAL "MITK")
  option(MITK_USE_TOF_PMDCAMCUBE "Enable support for PMD Cam Cube" OFF)
  mark_as_advanced(MITK_USE_TOF_PMDCAMCUBE)
endif()

set(MITK_TOF_PMDCAMBOARD_AVAILABLE OFF)
if(MITK_TOF_PMDCAMBOARD_AVAILABLE AND NOT ${PROJECT_NAME} STREQUAL "MITK")
  option(MITK_USE_TOF_PMDCAMBOARD "Enable support for PMD Cam Board" OFF)
  mark_as_advanced(MITK_USE_TOF_PMDCAMBOARD)
endif()

set(MITK_TOF_PMDO3_AVAILABLE OFF)
if(MITK_TOF_PMDO3_AVAILABLE AND NOT ${PROJECT_NAME} STREQUAL "MITK")
  option(MITK_USE_TOF_PMDO3 "Enable support for PMD =3" OFF)
  mark_as_advanced(MITK_USE_TOF_PMDO3)
endif()

set(MITK_TOF_KINECT_AVAILABLE OFF)
if(MITK_TOF_KINECT_AVAILABLE AND NOT ${PROJECT_NAME} STREQUAL "MITK")
  option(MITK_USE_TOF_KINECT "Enable support for Kinect" OFF)
  mark_as_advanced(MITK_USE_TOF_KINECT)
endif()

set(MITK_TOF_MESASR4000_AVAILABLE OFF)
if(MITK_TOF_MESASR4000_AVAILABLE AND NOT ${PROJECT_NAME} STREQUAL "MITK")
  option(MITK_USE_TOF_MESASR4000 "Enable support for MESA SR4000" OFF)
  mark_as_advanced(MITK_USE_TOF_MESASR4000)
endif()

if(MITK_USE_IGT)
  #include("${MITK_DIR}/mitkIGTConfig.cmake")
endif()

#-----------------------------------------------------------------------------
# Import MITK targets and set custom properties
#-----------------------------------------------------------------------------

if(NOT MITK_EXPORTS_FILE_INCLUDED)
  if(EXISTS "E:/D/MITK-superbuild/MITK-build/MitkExports.cmake")
    set(MITK_EXPORTS_FILE_INCLUDED 1)
    include("E:/D/MITK-superbuild/MITK-build/MitkExports.cmake")
  endif()
endif()

# Set properties on exported targets

set_target_properties(MitkCore PROPERTIES MITK_AUTOLOAD_TARGETS "MitkDICOMReaderServices;MitkMultilabelIO;MitkIGTIO;MitkVtkShaders;MitkIOExt;MitkIpPicSupportIO")
set_target_properties(MitkLegacyIO PROPERTIES MITK_MODULE_DEPRECATED_SINCE "2014.10")
set_target_properties(MitkLegacyGL PROPERTIES MITK_MODULE_DEPRECATED_SINCE "2015_05")
set_target_properties(MitkDICOMReaderServices PROPERTIES MITK_AUTOLOAD_DIRECTORY "MitkCore")
set_target_properties(MitkMultilabelIO PROPERTIES MITK_AUTOLOAD_DIRECTORY "MitkCore")
set_target_properties(MitkIGTIO PROPERTIES MITK_AUTOLOAD_DIRECTORY "MitkCore")
set_target_properties(MitkVtkShaders PROPERTIES MITK_AUTOLOAD_DIRECTORY "MitkCore")
set_target_properties(MitkIOExt PROPERTIES MITK_AUTOLOAD_DIRECTORY "MitkCore")
set_target_properties(MitkIpPicSupportIO PROPERTIES MITK_AUTOLOAD_DIRECTORY "MitkCore")
set_target_properties(org_mitk_core_services PROPERTIES MITK_AUTOLOAD_TARGETS "MitkDICOMReaderServices;MitkMultilabelIO;MitkIGTIO;MitkVtkShaders;MitkIOExt;MitkIpPicSupportIO")
set_target_properties(org_mitk_core_ext PROPERTIES MITK_AUTOLOAD_TARGETS "MitkDICOMReaderServices;MitkMultilabelIO;MitkIGTIO;MitkVtkShaders;MitkIOExt;MitkIpPicSupportIO")

#-----------------------------------------------------------------------------
# Install rules
#-----------------------------------------------------------------------------

# Install rules for ToF libraries loaded at runtime
if(EXISTS "E:/D/MITK-superbuild/MITK-build/mitkToFHardwareInstallRules.cmake")
  include("E:/D/MITK-superbuild/MITK-build/mitkToFHardwareInstallRules.cmake")
endif()
