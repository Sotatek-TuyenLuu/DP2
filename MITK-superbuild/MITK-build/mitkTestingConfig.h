/*
  mitkTestingConfig.h
  this file is generated. Do not change!
*/
#ifndef MITKTESTINGCONFIG_H
#define MITKTESTINGCONFIG_H

/* #undef BUILD_TESTING */
/* #undef MITK_FAST_TESTING */
#define MITK_TEST_OUTPUT_DIR ""

#ifdef CMAKE_INTDIR
#define MITK_RUNTIME_OUTPUT_DIR "E:/D/MITK-superbuild/MITK-build/bin/" CMAKE_INTDIR
#else
#define MITK_RUNTIME_OUTPUT_DIR "E:/D/MITK-superbuild/MITK-build/bin"
#endif

#define MITK_DATA_DIR ""

#endif // MITKTESTINGCONFIG_H
