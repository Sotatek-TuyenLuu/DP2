# Install script for directory: E:/D/MITK

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES
    "C:/Program Files (x86)/Microsoft Visual Studio 12.0/VC/redist/x86/Microsoft.VC120.CRT/msvcp120.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio 12.0/VC/redist/x86/Microsoft.VC120.CRT/msvcr120.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "E:/D/MITK/mitk.ico")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "E:/D/MITK/mitk.bmp")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins/designer" TYPE DIRECTORY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/designer/Release/")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins/designer" TYPE DIRECTORY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/designer/Debug/")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins/platforms" TYPE FILE FILES "C:/Qt/5.4/msvc2013_opengl/bin/../plugins/platforms/qwindows.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins/sqldrivers" TYPE FILE FILES "C:/Qt/5.4/msvc2013_opengl/bin/../plugins/sqldrivers/qsqlite.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins/imageformats" TYPE FILE FILES "C:/Qt/5.4/msvc2013_opengl/bin/../plugins/imageformats/qsvg.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins/platforms" TYPE FILE FILES "C:/Qt/5.4/msvc2013_opengl/bin/../plugins/platforms/qwindowsd.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins/sqldrivers" TYPE FILE FILES "C:/Qt/5.4/msvc2013_opengl/bin/../plugins/sqldrivers/qsqlited.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/plugins/imageformats" TYPE FILE FILES "C:/Qt/5.4/msvc2013_opengl/bin/../plugins/imageformats/qsvgd.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/D/MITK-superbuild/MITK-build/Utilities/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Modules/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.blueberry.core.runtime/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.blueberry.core.expressions/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.blueberry.core.commands/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.blueberry.ui.qt/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.blueberry.ui.qt.help/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.blueberry.ui.qt.log/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.core.services/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.common/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.planarfigure/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.core.ext/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.application/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.ext/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.extapplication/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.common/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.stdmultiwidgeteditor/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.common.legacy/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.datamanager/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.properties/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.dicom/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.imagenavigator/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.viewnavigator/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.segmentation/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Plugins/org.mitk.gui.qt.volumevisualization/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Applications/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "E:/D/MITK-superbuild/MITK-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
