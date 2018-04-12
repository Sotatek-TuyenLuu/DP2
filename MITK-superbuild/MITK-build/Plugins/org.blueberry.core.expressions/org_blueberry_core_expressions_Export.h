

// .NAME __org_blueberry_core_expressions_Export - manage Windows system differences
// .SECTION Description
// The __org_blueberry_core_expressions_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __org_blueberry_core_expressions_Export_h
#define __org_blueberry_core_expressions_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(org_blueberry_core_expressions_EXPORTS)
#    define BERRY_EXPRESSIONS Q_DECL_EXPORT
#  else
#    define BERRY_EXPRESSIONS Q_DECL_IMPORT
#  endif
#endif

#if !defined(BERRY_EXPRESSIONS)
//#  if defined(CTK_SHARED)
#    define BERRY_EXPRESSIONS Q_DECL_EXPORT
//#  else
//#    define BERRY_EXPRESSIONS
//#  endif
#endif

#endif

