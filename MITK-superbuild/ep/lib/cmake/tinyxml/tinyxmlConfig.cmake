
set(tinyxml_LIBRARIES tinyxml)

if(NOT TARGET tinyxml)
  include("${CMAKE_CURRENT_LIST_DIR}/tinyxmlTargets.cmake")
endif()
