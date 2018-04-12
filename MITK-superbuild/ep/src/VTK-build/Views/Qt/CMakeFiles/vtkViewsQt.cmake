set(vtkViewsQt_LOADED 1)
set(vtkViewsQt_DEPENDS "vtkGUISupportQt;vtkViewsInfovis")
set(vtkViewsQt_LIBRARIES "vtkViewsQt")
set(vtkViewsQt_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.2")
set(vtkViewsQt_LIBRARY_DIRS "")
set(vtkViewsQt_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/bin")
set(vtkViewsQt_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkViewsQtHierarchy.txt")
set(vtkViewsQt_EXCLUDE_FROM_WRAPPING 1)

if(NOT Qt5Widgets_DIR)
  set(Qt5Widgets_DIR "C:/Qt/5.4/msvc2013_opengl/lib/cmake/Qt5Widgets")
endif()
find_package(Qt5Widgets REQUIRED QUIET)

