

// .NAME __ctkDICOMWidgetsPluginsExport - manage Windows system differences
// .SECTION Description
// The __ctkDICOMWidgetsPluginsExport captures some system differences between Unix
// and Windows operating systems. 

#ifndef __ctkDICOMWidgetsPluginsExport_h
#define __ctkDICOMWidgetsPluginsExport_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(CTKDICOMWidgetsPlugins_EXPORTS)
#    define CTK_DICOM_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
#  else
#    define CTK_DICOM_WIDGETS_PLUGINS_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(CTK_DICOM_WIDGETS_PLUGINS_EXPORT)
//#  if defined(CTK_SHARED)
#    define CTK_DICOM_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
//#  else
//#    define CTK_DICOM_WIDGETS_PLUGINS_EXPORT
//#  endif
#endif

#endif

