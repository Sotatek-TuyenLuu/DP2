# Install script for directory: E:/D/MITK-superbuild/ep/src/CTK

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkListToString.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroParseArguments.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroSetPaths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroListFilter.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroOptionUtils.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroBuildLib.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroBuildLibWrapper.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroBuildPlugin.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroBuildApp.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroBuildQtPlugin.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroCompilePythonScript.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroGenerateMocs.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroWrapPythonQt.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroSetupQt.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroTargetLibraries.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionExtractOptionNameAndValue.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroValidateBuildOptions.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroAddCtkLibraryOptions.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionGenerateDGraphInput.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionGeneratePluginManifest.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkMacroGeneratePluginResourceFile.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionAddPluginRepo.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionCheckCompilerFlags.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionCheckoutRepo.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionGetIncludeDirs.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionGetLibraryDirs.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionGetGccVersion.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionGetCompilerVisibilityFlags.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkFunctionCompileSnippets.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/Libs/ctkExport.h.in")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkLinkerAsNeededFlagCheck.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctk_compile_python_scripts.cmake.in")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK/CMake/CMakeFindDependencyMacro.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake/ctkLinkerAsNeededFlagCheck" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkLinkerAsNeededFlagCheck/CMakeLists.txt"
    "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkLinkerAsNeededFlagCheck/A.cpp"
    "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkLinkerAsNeededFlagCheck/B.cpp"
    "E:/D/MITK-superbuild/ep/src/CTK/CMake/ctkLinkerAsNeededFlagCheck/C.cpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/UseCTK.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/PluginFramework/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Widgets/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/DICOM/Core/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/DICOM/Widgets/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Core/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Core/Documentation/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Frontend/QtGui/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Backend/LocalProcess/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Backend/LocalProcess/Documentation/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/XNAT/Core/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Testing/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Plugins/org.commontk.configadmin/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Plugins/org.commontk.eventadmin/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Documentation/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/CMake/LastConfigureStep/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
