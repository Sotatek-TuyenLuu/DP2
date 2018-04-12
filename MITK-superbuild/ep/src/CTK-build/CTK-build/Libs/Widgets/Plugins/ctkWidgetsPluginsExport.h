

// .NAME __ctkWidgetsPluginsExport - manage Windows system differences
// .SECTION Description
// The __ctkWidgetsPluginsExport captures some system differences between Unix
// and Windows operating systems. 

#ifndef __ctkWidgetsPluginsExport_h
#define __ctkWidgetsPluginsExport_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(CTKWidgetsPlugins_EXPORTS)
#    define CTK_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
#  else
#    define CTK_WIDGETS_PLUGINS_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(CTK_WIDGETS_PLUGINS_EXPORT)
//#  if defined(CTK_SHARED)
#    define CTK_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
//#  else
//#    define CTK_WIDGETS_PLUGINS_EXPORT
//#  endif
#endif

#endif

