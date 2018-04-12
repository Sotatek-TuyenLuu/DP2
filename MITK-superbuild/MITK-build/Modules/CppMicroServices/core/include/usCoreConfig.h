/*
  usCoreConfig.h
  This file is generated. Do not change!
*/

#ifndef USCORECONFIG_H
#define USCORECONFIG_H

#include <usCoreExport.h>

#define US_ENABLE_AUTOLOADING_SUPPORT

///-------------------------------------------------------------------
// Version information
//-------------------------------------------------------------------

#define US_CORE_MAJOR_VERSION 2
#define US_CORE_MINOR_VERSION 99
#define US_CORE_PATCH_VERSION 0
#define US_CORE_VERSION 2.99.0
#define US_CORE_VERSION_STR "2.99.0"


//-------------------------------------------------------------------
// Debuging & Logging
//-------------------------------------------------------------------

/* #undef US_ENABLE_DEBUG_OUTPUT */

US_BEGIN_NAMESPACE
  enum MsgType { DebugMsg = 0, InfoMsg = 1, WarningMsg = 2, ErrorMsg = 3 };
  typedef void (*MsgHandler)(MsgType, const char *);
  US_Core_EXPORT MsgHandler installMsgHandler(MsgHandler);
US_END_NAMESPACE


///-------------------------------------------------------------------
// Macros used by the unit tests
//-------------------------------------------------------------------

#define US_CORE_SOURCE_DIR "E:/D/MITK/Modules/CppMicroServices/core"

#endif // USCORECONFIG_H
