
#
# CTKConfig.cmake - CTK CMake configuration file for external projects.
#
# This file is configured by CTK and used by the UseCTK.cmake module
# to load CTK's settings for an external project.



####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was CTKConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

# Help finding external projects which might have been
# installed with CTK in the same install location
list(APPEND CMAKE_PREFIX_PATH ${PACKAGE_PREFIX_DIR})

# CMake extension module directory
set_and_check(CTK_CMAKE_DIR "${PACKAGE_PREFIX_DIR}/src/CTK/CMake")
set_and_check(CTK_CMAKE_UTILITIES_DIR "${PACKAGE_PREFIX_DIR}/src/CTK/Utilities/CMake")

# The location of the UseCTK.cmake file.
set_and_check(CTK_USE_FILE "${PACKAGE_PREFIX_DIR}/src/CTK-build/UseCTK.cmake")

# Include CTK Plugin specific variables
set_and_check(CTK_PLUGIN_USE_FILE "${PACKAGE_PREFIX_DIR}/src/CTK-build/CTKPluginUseFile.cmake")

set_and_check(CTK_TARGETS "${PACKAGE_PREFIX_DIR}/src/CTK-build/CTKExports.cmake")

# Directory containing the ctkConfig.h file
set_and_check(CTK_CONFIG_H_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/src/CTK-build/CTK-build")

# Set the header template which defines custom export/import macros
# for shared libraries
set_and_check(CTK_EXPORT_HEADER_TEMPLATE "${PACKAGE_PREFIX_DIR}/src/CTK/Libs/ctkExport.h.in")

# Set CTK library directory
set_and_check(CTK_LIBRARY_DIR "${PACKAGE_PREFIX_DIR}/src/CTK-build/CTK-build/bin")
set(CTK_LIBRARY_DIRS ${CTK_LIBRARY_DIR})

# CTK specific variables
set(CTK_CMAKE_DEBUG_POSTFIX "")

# Import CTK targets
if(NOT TARGET CTKCore)
  include(${CTK_TARGETS})
endif()

####### Expanded from @CTK_CONFIG_CODE@ #######
# The CTK DGraph executable used to compute target dependency graphs
set(CTK_DGRAPH_EXECUTABLE "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Utilities/DGraph/Debug/DGraph.exe")
# Qt configuration
set(CTK_QT_QMAKE_EXECUTABLE "")
# The CTK Qt designer plugins directory
set(CTK_QTDESIGNERPLUGINS_DIR "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin")
# CTK library include dirctories
set(CTKCore_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build")
set(CTKPluginFramework_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/PluginFramework;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core")
set(CTKWidgets_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Widgets;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core")
set(CTKDICOMCore_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/DICOM/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/DICOM/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core;E:/D/MITK-superbuild/ep/include/dcmtk/config;E:/D/MITK-superbuild/ep/include;E:/D/MITK-superbuild/ep/include/dcmtk/dcmdata;E:/D/MITK-superbuild/ep/include/dcmtk/dcmimage;E:/D/MITK-superbuild/ep/include/dcmtk/dcmimgle;E:/D/MITK-superbuild/ep/include/dcmtk/dcmjpeg;E:/D/MITK-superbuild/ep/include/dcmtk/dcmjpls;E:/D/MITK-superbuild/ep/include/dcmtk/dcmnet;E:/D/MITK-superbuild/ep/include/dcmtk/dcmpstat;E:/D/MITK-superbuild/ep/include/dcmtk/dcmqrdb;E:/D/MITK-superbuild/ep/include/dcmtk/dcmsign;E:/D/MITK-superbuild/ep/include/dcmtk/dcmsr;E:/D/MITK-superbuild/ep/include/dcmtk/dcmtls;E:/D/MITK-superbuild/ep/include/dcmtk/ofstd;E:/D/MITK-superbuild/ep/include/dcmtk/oflog;E:/D/MITK-superbuild/ep/include/dcmtk")
set(CTKDICOMWidgets_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/DICOM/Widgets;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/DICOM/Widgets;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/DICOM/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/DICOM/Core;E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core;E:/D/MITK-superbuild/ep/include/dcmtk/config;E:/D/MITK-superbuild/ep/include;E:/D/MITK-superbuild/ep/include/dcmtk/dcmdata;E:/D/MITK-superbuild/ep/include/dcmtk/dcmimage;E:/D/MITK-superbuild/ep/include/dcmtk/dcmimgle;E:/D/MITK-superbuild/ep/include/dcmtk/dcmjpeg;E:/D/MITK-superbuild/ep/include/dcmtk/dcmjpls;E:/D/MITK-superbuild/ep/include/dcmtk/dcmnet;E:/D/MITK-superbuild/ep/include/dcmtk/dcmpstat;E:/D/MITK-superbuild/ep/include/dcmtk/dcmqrdb;E:/D/MITK-superbuild/ep/include/dcmtk/dcmsign;E:/D/MITK-superbuild/ep/include/dcmtk/dcmsr;E:/D/MITK-superbuild/ep/include/dcmtk/dcmtls;E:/D/MITK-superbuild/ep/include/dcmtk/ofstd;E:/D/MITK-superbuild/ep/include/dcmtk/oflog;E:/D/MITK-superbuild/ep/include/dcmtk;E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Widgets")
set(CTKCommandLineModulesCore_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core")
set(CTKCommandLineModulesFrontendQtGui_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Frontend/QtGui;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Frontend/QtGui;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Core;E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core")
set(CTKCommandLineModulesBackendLocalProcess_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Backend/LocalProcess;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Backend/LocalProcess;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Core;E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core")
set(CTKXNATCore_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/XNAT/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/XNAT/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI;E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-build")
set(CTKTesting_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/Testing;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Testing;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build")
set(CTK_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/PluginFramework;E:/D/MITK-superbuild/ep/src/CTK/Libs/Widgets;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Widgets;E:/D/MITK-superbuild/ep/src/CTK/Libs/DICOM/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/DICOM/Core;E:/D/MITK-superbuild/ep/include/dcmtk/config;E:/D/MITK-superbuild/ep/include;E:/D/MITK-superbuild/ep/include/dcmtk/dcmdata;E:/D/MITK-superbuild/ep/include/dcmtk/dcmimage;E:/D/MITK-superbuild/ep/include/dcmtk/dcmimgle;E:/D/MITK-superbuild/ep/include/dcmtk/dcmjpeg;E:/D/MITK-superbuild/ep/include/dcmtk/dcmjpls;E:/D/MITK-superbuild/ep/include/dcmtk/dcmnet;E:/D/MITK-superbuild/ep/include/dcmtk/dcmpstat;E:/D/MITK-superbuild/ep/include/dcmtk/dcmqrdb;E:/D/MITK-superbuild/ep/include/dcmtk/dcmsign;E:/D/MITK-superbuild/ep/include/dcmtk/dcmsr;E:/D/MITK-superbuild/ep/include/dcmtk/dcmtls;E:/D/MITK-superbuild/ep/include/dcmtk/ofstd;E:/D/MITK-superbuild/ep/include/dcmtk/oflog;E:/D/MITK-superbuild/ep/include/dcmtk;E:/D/MITK-superbuild/ep/src/CTK/Libs/DICOM/Widgets;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/DICOM/Widgets;E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Core;E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Frontend/QtGui;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Frontend/QtGui;E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Backend/LocalProcess;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Backend/LocalProcess;E:/D/MITK-superbuild/ep/src/CTK/Libs/XNAT/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/XNAT/Core;E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI;E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/Testing;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Testing")
# CTK library directories that could be used for linking
set(CTKCore_LIBRARY_DIRS "")
set(CTKPluginFramework_LIBRARY_DIRS "")
set(CTKWidgets_LIBRARY_DIRS "")
set(CTKDICOMCore_LIBRARY_DIRS "")
set(CTKDICOMWidgets_LIBRARY_DIRS "")
set(CTKCommandLineModulesCore_LIBRARY_DIRS "")
set(CTKCommandLineModulesFrontendQtGui_LIBRARY_DIRS "")
set(CTKCommandLineModulesBackendLocalProcess_LIBRARY_DIRS "")
set(CTKXNATCore_LIBRARY_DIRS "E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-build")
# External project libraries
set(CTK_EXTERNAL_LIBRARIES "general;Qt5::Core;general;dbghelp;general;Qt5::Sql;general;Qt5::Concurrent;general;Qt5::XmlPatterns;general;Qt5::Widgets;general;Qt5::Concurrent;general;Qt5::Widgets;general;Qt5::Xml;general;Qt5::OpenGL;general;netapi32;general;wsock32;general;Qt5::Sql;general;Qt5::Gui;general;qRestAPI;general;Qt5::UiTools;general;Qt5::Widgets")
##################################################

# Include CTK macros
include("${CTK_CMAKE_DIR}/ctkFunctionGetGccVersion.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionCheckCompilerFlags.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionGetCompilerVisibilityFlags.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroParseArguments.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroSetPaths.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroListFilter.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroBuildLibWrapper.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroBuildPlugin.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroBuildQtPlugin.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroTargetLibraries.cmake") # Import multiple macros
include("${CTK_CMAKE_DIR}/ctkFunctionExtractOptionNameAndValue.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroValidateBuildOptions.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionGenerateDGraphInput.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionGeneratePluginManifest.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionGeneratePluginUseFile.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroGeneratePluginResourceFile.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionGetIncludeDirs.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionGetLibraryDirs.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionExtractPluginTargets.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionGetAllPluginTargets.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionGetTargetDependencies.cmake")
include("${CTK_CMAKE_DIR}/ctkFunctionGetPluginDependencies.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroSetupPlugins.cmake")
include("${CTK_CMAKE_DIR}/ctkMacroGenerateMocs.cmake")

if(CMAKE_VERSION VERSION_LESS 3)
  include("${CTK_CMAKE_DIR}/CMakeFindDependencyMacro.cmake")
else()
  include(CMakeFindDependencyMacro)
endif()

# List all libraries
SET(CTK_LIBRARIES CTKCore;CTKPluginFramework;CTKWidgets;CTKDICOMCore;CTKDICOMWidgets;CTKCommandLineModulesCore;CTKCommandLineModulesFrontendQtGui;CTKCommandLineModulesBackendLocalProcess;CTKXNATCore)

# List all CTK libraries wrapped with PythonQt
SET(CTK_WRAPPED_LIBRARIES_PYTHONQT )

# Include CTK Plugin specific variables
include(${CTK_PLUGIN_USE_FILE})

# Qt configuration
set(CTK_QT_VERSION "5")
set(CTK_QT5_COMPONENTS Core;Xml;XmlPatterns;Concurrent;Sql;Test;Widgets;OpenGL;UiTools;Script)

# Update CMake module path so that calling "find_package(DCMTK)" works as expected 
# after calling "find_package(CTK)"
# Ideally projects like DCMTK or PythonQt should provide both "Config" and "Use" files.
set(CMAKE_MODULE_PATH
  ${CTK_CMAKE_UTILITIES_DIR}
  ${CMAKE_MODULE_PATH}
  )

# Relative install paths
set(CTK_INSTALL_BIN_DIR "bin")
set(CTK_INSTALL_INCLUDE_DIR "include/ctk-0.1")
set(CTK_INSTALL_LIB_DIR "lib/ctk-0.1")
set(CTK_INSTALL_PLUGIN_INCLUDE_DIR "include/ctk-0.1")
set(CTK_INSTALL_PLUGIN_DIR "lib/ctk-0.1/plugins")
set(CTK_INSTALL_QTPLUGIN_DIR "lib/ctk-0.1")

# A CTK install tree always provides one build configuration. A CTK
# build tree may provide either one or multiple build configurations
# depending on the CMake generator used. Since CTK can be used either
# from a build tree or an install tree it is useful for outside
# projects to know the configurations available. If this
# CTKConfig.cmake is in a CTK install tree CTK_CONFIGURATION_TYPES
# will be empty and CTK_BUILD_TYPE will be set to the value of
# CMAKE_BUILD_TYPE used to build CTK. If CTKConfig.cmake is in a CTK
# build tree then CTK_CONFIGURATION_TYPES and CTK_BUILD_TYPE will have
# values matching CMAKE_CONFIGURATION_TYPES and CMAKE_BUILD_TYPE for
# that build tree (only one will ever be set).
SET(CTK_CONFIGURATION_TYPES Debug;Release;MinSizeRel;RelWithDebInfo)
SET(CTK_BUILD_TYPE )

# CTK external projects variables

set(DCMTK_DIR "E:/D/MITK-superbuild/ep")
set(qRestAPI_DIR "E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-build")
find_dependency(DCMTK)
find_dependency(qRestAPI)
