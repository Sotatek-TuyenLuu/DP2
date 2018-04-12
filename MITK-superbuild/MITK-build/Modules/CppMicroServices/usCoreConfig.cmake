

set(US_Core_CXX_FLAGS "")
set(US_Core_CXX_FLAGS_RELEASE "")
set(US_Core_CXX_FLAGS_DEBUG "")
set(US_Core_C_FLAGS "")
set(US_Core_C_FLAGS_RELEASE "")
set(US_Core_C_FLAGS_DEBUG "")
set(US_Core_LINK_FLAGS "")
set(US_Core_LINK_FLAGS_RELEASE "")
set(US_Core_LINK_FLAGS_DEBUG "")
set(US_Core_COMPILE_DEFINITIONS "")
set(US_Core_COMPILE_DEFINITIONS_RELEASE "")
set(US_Core_COMPILE_DEFINITIONS_DEBUG "")

set(US_Core_INCLUDE_DIRS "E:/D/MITK/Modules/CppMicroServices/core/include;E:/D/MITK-superbuild/MITK-build/Modules/CppMicroServices/core/include;E:/D/MITK/Modules/CppMicroServices/core/src/util;E:/D/MITK/Modules/CppMicroServices/core/src/service;E:/D/MITK/Modules/CppMicroServices/core/src/module")
set(US_Core_LIBRARIES CppMicroServices)
set(US_Core_RUNTIME_LIBRARY_DIRS "E:/D/MITK-superbuild/MITK-build/bin")

if(NOT TARGET CppMicroServices AND NOT US_IS_EMBEDDED)
  include("${CMAKE_CURRENT_LIST_DIR}/usCoreTargets.cmake")
endif()
