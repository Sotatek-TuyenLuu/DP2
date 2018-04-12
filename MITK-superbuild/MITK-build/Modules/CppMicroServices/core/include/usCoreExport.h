///-------------------------------------------------------------------
// Macros for import/export declarations
//-------------------------------------------------------------------

#ifndef usCoreExport_H_
#define usCoreExport_H_

#include <usGlobalConfig.h>

#ifdef US_BUILD_SHARED_LIBS
  // We are building a shared lib
  #ifdef CppMicroServices_EXPORTS
    #define US_Core_EXPORT US_ABI_EXPORT
  #else
    #define US_Core_EXPORT US_ABI_IMPORT
  #endif
#else
  // We are building a static lib
  // Don't hide RTTI symbols of definitions in the C++ Micro Services
  // headers that are included in DSOs with hidden visibility
  #define US_Core_EXPORT US_ABI_EXPORT
#endif

#endif // usCoreExport_H_
