
set(CppUnit_LIBRARIES cppunit)

if(NOT TARGET cppunit)
  include("${CMAKE_CURRENT_LIST_DIR}/CppUnitTargets.cmake")
endif()
