

// .NAME __org_mitk_gui_qt_common_Export - manage Windows system differences
// .SECTION Description
// The __org_mitk_gui_qt_common_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __org_mitk_gui_qt_common_Export_h
#define __org_mitk_gui_qt_common_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(org_mitk_gui_qt_common_EXPORTS)
#    define MITK_QT_COMMON Q_DECL_EXPORT
#  else
#    define MITK_QT_COMMON Q_DECL_IMPORT
#  endif
#endif

#if !defined(MITK_QT_COMMON)
//#  if defined(CTK_SHARED)
#    define MITK_QT_COMMON Q_DECL_EXPORT
//#  else
//#    define MITK_QT_COMMON
//#  endif
#endif

#endif

