
set(ANN_LIBRARIES ann)

if(NOT TARGET ann)
  include("${CMAKE_CURRENT_LIST_DIR}/ANNTargets.cmake")
endif()
