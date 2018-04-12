

// .NAME __org_mitk_planarfigure_Export - manage Windows system differences
// .SECTION Description
// The __org_mitk_planarfigure_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __org_mitk_planarfigure_Export_h
#define __org_mitk_planarfigure_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(org_mitk_planarfigure_EXPORTS)
#    define ORG_MITK_PLANARFIGURE_EXPORT Q_DECL_EXPORT
#  else
#    define ORG_MITK_PLANARFIGURE_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(ORG_MITK_PLANARFIGURE_EXPORT)
//#  if defined(CTK_SHARED)
#    define ORG_MITK_PLANARFIGURE_EXPORT Q_DECL_EXPORT
//#  else
//#    define ORG_MITK_PLANARFIGURE_EXPORT
//#  endif
#endif

#endif

