set(vtkGUISupportQtSQL_LOADED 1)
set(vtkGUISupportQtSQL_DEPENDS "vtkIOSQL;vtksys")
set(vtkGUISupportQtSQL_LIBRARIES "vtkGUISupportQtSQL")
set(vtkGUISupportQtSQL_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/VTK-build/GUISupport/QtSQL;E:/D/MITK-superbuild/ep/src/VTK/GUISupport/QtSQL")
set(vtkGUISupportQtSQL_LIBRARY_DIRS "")
set(vtkGUISupportQtSQL_RUNTIME_LIBRARY_DIRS "E:/D/MITK-superbuild/ep/src/VTK-build/bin")
set(vtkGUISupportQtSQL_WRAP_HIERARCHY_FILE "")
set(vtkGUISupportQtSQL_EXCLUDE_FROM_WRAPPING 1)

if(NOT Qt5Widgets_DIR)
  set(Qt5Widgets_DIR "C:/Qt/5.4/msvc2013_opengl/lib/cmake/Qt5Widgets")
endif()
find_package(Qt5Widgets REQUIRED QUIET)

if(NOT Qt5Sql_DIR)
  set(Qt5Sql_DIR "C:/Qt/5.4/msvc2013_opengl/lib/cmake/Qt5Sql")
endif()
find_package(Qt5Sql REQUIRED QUIET)

