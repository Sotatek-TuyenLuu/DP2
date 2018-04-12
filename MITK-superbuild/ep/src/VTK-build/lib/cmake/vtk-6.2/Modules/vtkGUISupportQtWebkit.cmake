set(vtkGUISupportQtWebkit_LOADED 1)
set(vtkGUISupportQtWebkit_DEPENDS "vtkViewsQt")
set(vtkGUISupportQtWebkit_LIBRARIES "vtkGUISupportQtWebkit")
set(vtkGUISupportQtWebkit_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/VTK-build/GUISupport/QtWebkit;E:/D/MITK-superbuild/ep/src/VTK/GUISupport/QtWebkit")
set(vtkGUISupportQtWebkit_LIBRARY_DIRS "")
set(vtkGUISupportQtWebkit_RUNTIME_LIBRARY_DIRS "E:/D/MITK-superbuild/ep/src/VTK-build/bin")
set(vtkGUISupportQtWebkit_WRAP_HIERARCHY_FILE "")
set(vtkGUISupportQtWebkit_EXCLUDE_FROM_WRAPPING 1)

if(NOT Qt5WebKitWidgets_DIR)
  set(Qt5WebKitWidgets_DIR "C:/Qt/5.4/msvc2013_opengl/lib/cmake/Qt5WebKitWidgets")
endif()
find_package(Qt5WebKitWidgets REQUIRED QUIET)

