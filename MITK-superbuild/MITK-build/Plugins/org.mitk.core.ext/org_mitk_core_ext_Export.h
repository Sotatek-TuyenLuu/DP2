

// .NAME __org_mitk_core_ext_Export - manage Windows system differences
// .SECTION Description
// The __org_mitk_core_ext_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __org_mitk_core_ext_Export_h
#define __org_mitk_core_ext_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(org_mitk_core_ext_EXPORTS)
#    define MITKCOREEXT_EXPORT Q_DECL_EXPORT
#  else
#    define MITKCOREEXT_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(MITKCOREEXT_EXPORT)
//#  if defined(CTK_SHARED)
#    define MITKCOREEXT_EXPORT Q_DECL_EXPORT
//#  else
//#    define MITKCOREEXT_EXPORT
//#  endif
#endif

#endif

