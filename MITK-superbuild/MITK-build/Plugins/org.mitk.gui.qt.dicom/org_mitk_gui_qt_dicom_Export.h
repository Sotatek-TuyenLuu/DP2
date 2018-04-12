

// .NAME __org_mitk_gui_qt_dicom_Export - manage Windows system differences
// .SECTION Description
// The __org_mitk_gui_qt_dicom_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __org_mitk_gui_qt_dicom_Export_h
#define __org_mitk_gui_qt_dicom_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(org_mitk_gui_qt_dicom_EXPORTS)
#    define DICOM_EXPORT Q_DECL_EXPORT
#  else
#    define DICOM_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(DICOM_EXPORT)
//#  if defined(CTK_SHARED)
#    define DICOM_EXPORT Q_DECL_EXPORT
//#  else
//#    define DICOM_EXPORT
//#  endif
#endif

#endif

