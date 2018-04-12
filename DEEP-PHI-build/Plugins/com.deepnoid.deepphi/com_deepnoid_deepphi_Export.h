

// .NAME __com_deepnoid_deepphi_Export - manage Windows system differences
// .SECTION Description
// The __com_deepnoid_deepphi_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __com_deepnoid_deepphi_Export_h
#define __com_deepnoid_deepphi_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(com_deepnoid_deepphi_EXPORTS)
#    define DEEPPHI_EXPORT Q_DECL_EXPORT
#  else
#    define DEEPPHI_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(DEEPPHI_EXPORT)
//#  if defined(CTK_SHARED)
#    define DEEPPHI_EXPORT Q_DECL_EXPORT
//#  else
//#    define DEEPPHI_EXPORT
//#  endif
#endif

#endif

