

// .NAME __org_blueberry_core_runtime_Export - manage Windows system differences
// .SECTION Description
// The __org_blueberry_core_runtime_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __org_blueberry_core_runtime_Export_h
#define __org_blueberry_core_runtime_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(org_blueberry_core_runtime_EXPORTS)
#    define org_blueberry_core_runtime_EXPORT Q_DECL_EXPORT
#  else
#    define org_blueberry_core_runtime_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(org_blueberry_core_runtime_EXPORT)
//#  if defined(CTK_SHARED)
#    define org_blueberry_core_runtime_EXPORT Q_DECL_EXPORT
//#  else
//#    define org_blueberry_core_runtime_EXPORT
//#  endif
#endif

#endif

