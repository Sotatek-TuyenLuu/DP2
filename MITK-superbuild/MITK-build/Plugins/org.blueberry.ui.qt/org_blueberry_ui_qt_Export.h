

// .NAME __org_blueberry_ui_qt_Export - manage Windows system differences
// .SECTION Description
// The __org_blueberry_ui_qt_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __org_blueberry_ui_qt_Export_h
#define __org_blueberry_ui_qt_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(org_blueberry_ui_qt_EXPORTS)
#    define BERRY_UI_QT Q_DECL_EXPORT
#  else
#    define BERRY_UI_QT Q_DECL_IMPORT
#  endif
#endif

#if !defined(BERRY_UI_QT)
//#  if defined(CTK_SHARED)
#    define BERRY_UI_QT Q_DECL_EXPORT
//#  else
//#    define BERRY_UI_QT
//#  endif
#endif

#endif

