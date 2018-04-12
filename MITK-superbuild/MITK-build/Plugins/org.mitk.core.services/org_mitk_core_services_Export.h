

// .NAME __org_mitk_core_services_Export - manage Windows system differences
// .SECTION Description
// The __org_mitk_core_services_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __org_mitk_core_services_Export_h
#define __org_mitk_core_services_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(org_mitk_core_services_EXPORTS)
#    define MITK_CORE_SERVICES_PLUGIN Q_DECL_EXPORT
#  else
#    define MITK_CORE_SERVICES_PLUGIN Q_DECL_IMPORT
#  endif
#endif

#if !defined(MITK_CORE_SERVICES_PLUGIN)
//#  if defined(CTK_SHARED)
#    define MITK_CORE_SERVICES_PLUGIN Q_DECL_EXPORT
//#  else
//#    define MITK_CORE_SERVICES_PLUGIN
//#  endif
#endif

#endif

