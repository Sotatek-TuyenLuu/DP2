#-----------------------------------------------------------------------------
#
# VTKConfig.cmake - VTK CMake configuration file for external projects.
#
# This file is configured by VTK and used by the UseVTK.cmake module
# to load VTK's settings for an external project.

# Compute the installation prefix from this VTKConfig.cmake file location.
set(_vtk_installed_prefix "E:/D/MITK-superbuild/ep/lib/cmake/vtk-6.2")
set(_vtk_requested_prefix "${CMAKE_CURRENT_LIST_DIR}")
get_filename_component(_vtk_installed_prefix_full "${_vtk_installed_prefix}" REALPATH)
get_filename_component(_vtk_requested_prefix_full "${_vtk_requested_prefix}" REALPATH)
if (_vtk_installed_prefix_full STREQUAL _vtk_requested_prefix_full)
  set(VTK_INSTALL_PREFIX "E:/D/MITK-superbuild/ep")
else ()
  set(VTK_INSTALL_PREFIX "${CMAKE_CURRENT_LIST_DIR}")
  get_filename_component(VTK_INSTALL_PREFIX "${VTK_INSTALL_PREFIX}" PATH)
  get_filename_component(VTK_INSTALL_PREFIX "${VTK_INSTALL_PREFIX}" PATH)
  get_filename_component(VTK_INSTALL_PREFIX "${VTK_INSTALL_PREFIX}" PATH)
endif ()
set(VTK_MODULES_DIR "${VTK_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules")

# The C and C++ flags added by VTK to the cmake-configured flags.
SET(VTK_REQUIRED_C_FLAGS "")
SET(VTK_REQUIRED_CXX_FLAGS "")
SET(VTK_REQUIRED_EXE_LINKER_FLAGS "")
SET(VTK_REQUIRED_SHARED_LINKER_FLAGS "")
SET(VTK_REQUIRED_MODULE_LINKER_FLAGS "")

# The VTK version number
SET(VTK_MAJOR_VERSION "6")
SET(VTK_MINOR_VERSION "2")
SET(VTK_BUILD_VERSION "0")

# The location of the UseVTK.cmake file.
SET(VTK_CMAKE_DIR "${VTK_INSTALL_PREFIX}/lib/cmake/vtk-6.2")
SET(VTK_USE_FILE "${VTK_CMAKE_DIR}/UseVTK.cmake")

# The rendering backend VTK was configured to use.
set(VTK_RENDERING_BACKEND "OpenGL")

#-----------------------------------------------------------------------------
# Load requested modules.

# List of available VTK modules.
set(VTK_MODULES_ENABLED)

# Determine list of available VTK-modules by scanning the VTK_MODULES_DIR.
file(GLOB config_files RELATIVE "${VTK_MODULES_DIR}" "${VTK_MODULES_DIR}/*.cmake")
foreach (_file ${config_files})
  if (NOT "${_file}" MATCHES "[^\\-]+-[a-zA-Z]+\\.cmake")
    string(REGEX REPLACE "\\.cmake$" "" _module "${_file}")
    list(APPEND VTK_MODULES_ENABLED "${_module}")
  endif()
endforeach()

# Import VTK targets.
set(VTK_CONFIG_TARGETS_FILE "${VTK_INSTALL_PREFIX}/lib/cmake/vtk-6.2/VTKTargets.cmake")
if(NOT TARGET vtkCommonCore)
  include("${VTK_CONFIG_TARGETS_FILE}")
endif()

# Load module interface macros.
include("${VTK_INSTALL_PREFIX}/lib/cmake/vtk-6.2/vtkModuleAPI.cmake")

# Compute set of requested modules.
if(VTK_FIND_COMPONENTS)
  # Specific modules requested by find_package(VTK).
  set(VTK_MODULES_REQUESTED "${VTK_FIND_COMPONENTS}")
else()
  # No specific modules requested.  Use all of them.
  set(VTK_MODULES_REQUESTED "${VTK_MODULES_ENABLED}")
endif()

# Load requested modules and their dependencies into variables:
#  VTK_DEFINITIONS     = Preprocessor definitions
#  VTK_LIBRARIES       = Libraries to link
#  VTK_INCLUDE_DIRS    = Header file search path
#  VTK_LIBRARY_DIRS    = Library search path (for outside dependencies)
vtk_module_config(VTK ${VTK_MODULES_REQUESTED})

#-----------------------------------------------------------------------------

# VTK global configuration options.
SET(VTK_BUILD_SHARED_LIBS "ON")
SET(VTK_LEGACY_REMOVE "ON")
SET(VTK_LEGACY_SILENT "OFF")
SET(VTK_WRAP_PYTHON "OFF")
SET(VTK_WRAP_TCL "OFF")
SET(VTK_WRAP_JAVA "OFF")
SET(VTK_QT_VERSION "5")

# Do not add options or information here that is specific to a
# particular module.  Instead set <module>_EXPORT_OPTIONS and/or
# <module>_EXPORT_CODE_BUILD and <module>_EXPORT_CODE_INSTALL
# at the top of the module CMakeLists.txt file.
