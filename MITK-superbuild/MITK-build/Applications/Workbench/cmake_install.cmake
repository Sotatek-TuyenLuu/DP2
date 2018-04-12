# Install script for directory: E:/D/MITK/Applications/Workbench

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/D/CMakeExternals/Install")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Debug/liborg_commontk_configadmin.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Release/liborg_commontk_configadmin.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Debug/liborg_commontk_eventadmin.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Release/liborg_commontk_eventadmin.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkDICOMReaderServices.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkDICOMReaderServices.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkMultilabelIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkMultilabelIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkIGTIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkIGTIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkVtkShaders.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkVtkShaders.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkIOExt.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkIOExt.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkIpPicSupportIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkIpPicSupportIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkDICOMReaderServices.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkDICOMReaderServices.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkMultilabelIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkMultilabelIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkIGTIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkIGTIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkVtkShaders.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkVtkShaders.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkIOExt.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkIOExt.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Debug/MitkIpPicSupportIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/MitkCore" TYPE FILE FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkCore/Release/MitkIpPicSupportIO.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "E:/D/MITK-superbuild/MITK-build/bin/Debug/MitkWorkbench.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "E:/D/MITK-superbuild/MITK-build/bin/Release/MitkWorkbench.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "E:/D/MITK-superbuild/MITK-build/bin/MinSizeRel/MitkWorkbench.exe")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "E:/D/MITK-superbuild/MITK-build/bin/RelWithDebInfo/MitkWorkbench.exe")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  

    set(_bundle_dest_dir "")
    if(_bundle_dest_dir)
      set(_bin_path "${CMAKE_INSTALL_PREFIX}/${_bundle_dest_dir}")
    else()
      set(_bin_path "${CMAKE_INSTALL_PREFIX}/bin")
    endif()

    macro(gp_item_default_embedded_path_override item default_embedded_path_var)
      get_filename_component(_item_name "${item}" NAME)
      get_filename_component(_item_path "${item}" PATH)

      # We have to fix all path references to build trees for plugins

      if(NOT _item_path MATCHES "${CMAKE_INSTALL_PREFIX}/")
        # item with relative path or embedded path pointing to some build dir
        set(full_path "full_path-NOTFOUND")
        file(GLOB_RECURSE full_path ${CMAKE_INSTALL_PREFIX}//${_item_name} )
        list(LENGTH full_path full_path_length)
        if(full_path_length GREATER 1)
          list(GET full_path 0 full_path)
        endif()
        get_filename_component(_item_path "${full_path}" PATH)
      endif()

      set(_plugins_path "${_bin_path}/plugins")

      if(_item_path STREQUAL _plugins_path
         OR (_item_path MATCHES "${_plugins_path}/" AND _item_name MATCHES "liborg") # this is for legacy BlueBerry bundle support
        )
        # Only fix plugins
        message("override: ${item}")
        message("found file: ${_item_path}/${_item_name}")
        if(APPLE)
          string(REPLACE
                 ${CMAKE_INSTALL_PREFIX}/
                 @executable_path ${default_embedded_path_var} "${_item_path}" )
        else()
          set(${default_embedded_path_var} "${_item_path}")
        endif()
        message("override result: ${${default_embedded_path_var}}")
      endif()
    endmacro(gp_item_default_embedded_path_override)

    macro(gp_resolved_file_type_override file type)
      if(NOT APPLE)
        get_filename_component(_file_path "${file}" PATH)
        get_filename_component(_file_name "${file}" NAME)
        if(_file_path MATCHES "^${CMAKE_INSTALL_PREFIX}")
          set(${type} "local")
        endif()
        if(_file_name MATCHES gdiplus)
            set(${type} "system")
        endif(_file_name MATCHES gdiplus)
      endif()
    endmacro(gp_resolved_file_type_override)

    if(NOT APPLE)
      macro(gp_resolve_item_override context item exepath dirs resolved_item_var resolved_var)
        if(${item} MATCHES "blueberry_core_runtime")
          get_filename_component(_item_name ${item} NAME)
          set(${resolved_item_var} "${exepath}/plugins/${_item_name}")
          set(${resolved_var} 1)
        endif()
      endmacro()
    endif()

    if("TRUE" STREQUAL "TRUE")
      set(GLOBBED_PLUGINS )
      set(_bb_runtime_lib "${_bin_path}/liborg_blueberry_core_runtime.dll")
      if(EXISTS "${_bb_runtime_lib}")
        list(APPEND GLOBBED_PLUGINS "${_bb_runtime_lib}")
      endif()

      # Iterate over all sub-directories which contain plug-ins
      # (BlueBerry plug-ins, Qt plug-ins, and auto-load modules)
      file(GLOB _children "${_bin_path}/*")
      foreach(_child ${_children})
        if(IS_DIRECTORY ${_child})
          set(_plugins )
          set(_modules )
          file(GLOB_RECURSE _plugins "${_child}/*.dll")
          if(_plugins)
            list(APPEND GLOBBED_PLUGINS ${_plugins})
          endif()
          # Now glob for all modules which might have a different extensions.
          # E.g. on MacOS plugins could have a .dylib extension as well as a .so extension
          if(NOT ".dll" STREQUAL "" AND NOT ".dll" STREQUAL ".dll")
            file(GLOB_RECURSE _modules "${_child}/*.dll")
          endif()
          if(_modules)
            list(APPEND GLOBBED_PLUGINS ${_modules})
          endif()
        endif()
      endforeach()
    endif()

    set(PLUGINS )
    foreach(_plugin  ${GLOBBED_PLUGINS})
      get_filename_component(_plugin_realpath ${_plugin} REALPATH)
      list(APPEND PLUGINS ${_plugin_realpath})
    endforeach()

    foreach(_py_lib )
      list(APPEND PLUGINS "${_bin_path}/${_py_lib}")
    endforeach()

    if(PLUGINS)
      list(REMOVE_DUPLICATES PLUGINS)
    endif(PLUGINS)
    message("globbed plugins: ${PLUGINS}")

    set(CMAKE_MODULE_PATH E:/D/MITK/CMake E:/D/MITK/CMake;E:/D/MITK-superbuild/ep/src/CTK/Utilities/CMake;E:/D/MITK/CMake )

    set(DIRS "E:/D/MITK-superbuild/MITK-build/bin/plugins/Release;E:/D/MITK-superbuild/MITK-build/bin/Release;E:/D/MITK-superbuild/MITK-build/bin;E:/D/MITK-superbuild/MITK-build/bin/plugins;E:/D/MITK-superbuild/MITK-build/lib;E:/D/MITK-superbuild/MITK-build/lib/plugins;E:/D/MITK-superbuild/ep/bin;E:/D/MITK-superbuild/ep/lib;C:/Qt/5.4/msvc2013_opengl/bin;E:/D/MITK-superbuild/ep/lib/cmake/ITK-4.7/bin;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin;E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-build")

    set(_additional_search_paths )
    if(_additional_search_paths)
      set(DIRS "${DIRS};${_additional_search_paths}")
    endif()
    if(_python_search_paths)
      set(DIRS "${DIRS};${_python_search_paths}")
    endif()
    foreach(_plugin ${PLUGINS})
      get_filename_component(_pluginpath ${_plugin} PATH)
      list(APPEND DIRS "${_pluginpath}")
    endforeach(_plugin)

    list(REMOVE_DUPLICATES DIRS)

    # use custom version of BundleUtilities
    include(BundleUtilities)

    fixup_bundle("${CMAKE_INSTALL_PREFIX}/bin/MitkWorkbench.exe" "${PLUGINS}" "${DIRS}")
  
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(WRITE "${CMAKE_INSTALL_PREFIX}/bin/qt.conf" "
[Paths]
Prefix=.
")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE RENAME "MitkWorkbench.provisioning" FILES "E:/D/MITK-superbuild/MITK-build/bin/MitkWorkbench.provisioning.install")
endif()

