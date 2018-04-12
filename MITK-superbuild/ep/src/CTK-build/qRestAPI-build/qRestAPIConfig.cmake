
# Import qRestAPI targets
if(NOT qRestAPI_EXPORTS_INCLUDED)
  include("E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-build/qRestAPIExports.cmake")
  set(qRestAPI_EXPORTS_INCLUDED 1)
endif()

set(qRestAPI_LIBRARIES "qRestAPI")

set(qRestAPI_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI;E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-build")
set(qRestAPI_LIBRARY_DIRS "E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-build")

# The location of the UseqRestAPI.cmake file.
set(qRestAPI_USE_FILE "E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-build/UseqRestAPI.cmake")
