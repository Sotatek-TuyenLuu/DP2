

// .NAME __org_mitk_gui_qt_imagenavigator_Export - manage Windows system differences
// .SECTION Description
// The __org_mitk_gui_qt_imagenavigator_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __org_mitk_gui_qt_imagenavigator_Export_h
#define __org_mitk_gui_qt_imagenavigator_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(org_mitk_gui_qt_imagenavigator_EXPORTS)
#    define IMAGENAVIGATOR_EXPORT Q_DECL_EXPORT
#  else
#    define IMAGENAVIGATOR_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(IMAGENAVIGATOR_EXPORT)
//#  if defined(CTK_SHARED)
#    define IMAGENAVIGATOR_EXPORT Q_DECL_EXPORT
//#  else
//#    define IMAGENAVIGATOR_EXPORT
//#  endif
#endif

#endif

