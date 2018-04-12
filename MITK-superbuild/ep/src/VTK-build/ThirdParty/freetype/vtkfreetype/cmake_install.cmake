# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/D/MITK-superbuild/ep")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkfreetype-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkfreetype-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkfreetype-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkfreetype-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkfreetype-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkfreetype-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkfreetype-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkfreetype-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2/vtkfreetype/include" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/ft2build.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/vtk_freetype_mangle.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/vtk_ftmodule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/freetype/vtkfreetype/include/vtkFreeTypeConfig.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2/vtkfreetype/include/freetype" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/freetype.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftadvanc.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbbox.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbdf.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbitmap.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftbzip2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftcache.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftchapters.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftcid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fterrdef.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fterrors.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftgasp.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftglyph.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftgxval.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftgzip.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftimage.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftincrem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftlcdfil.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftlist.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftlzw.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmac.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmm.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmodapi.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftmoderr.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftotval.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftoutln.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftpfr.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftrender.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsizes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsnames.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftstroke.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsynth.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftsystem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fttrigon.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/fttypes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftwinfnt.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ftxf86.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/t1tables.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ttnameid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/tttables.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/tttags.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/ttunpat.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2/vtkfreetype/include/freetype/config" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftconfig.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftheader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftmodule.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftoption.h"
    "E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/freetype/vtkfreetype/include/freetype/config/ftstdlib.h"
    )
endif()

