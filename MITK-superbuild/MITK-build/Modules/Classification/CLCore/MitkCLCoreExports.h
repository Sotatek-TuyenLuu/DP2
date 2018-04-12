
#ifndef MITKCLCORE_EXPORT_H
#define MITKCLCORE_EXPORT_H

#ifdef MITKCLCORE_STATIC_DEFINE
#  define MITKCLCORE_EXPORT
#  define MITKCLCORE_NO_EXPORT
#else
#  ifndef MITKCLCORE_EXPORT
#    ifdef MitkCLCore_EXPORTS
        /* We are building this library */
#      define MITKCLCORE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKCLCORE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKCLCORE_NO_EXPORT
#    define MITKCLCORE_NO_EXPORT 
#  endif
#endif

#ifndef MITKCLCORE_DEPRECATED
#  define MITKCLCORE_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKCLCORE_DEPRECATED_EXPORT
#  define MITKCLCORE_DEPRECATED_EXPORT MITKCLCORE_EXPORT MITKCLCORE_DEPRECATED
#endif

#ifndef MITKCLCORE_DEPRECATED_NO_EXPORT
#  define MITKCLCORE_DEPRECATED_NO_EXPORT MITKCLCORE_NO_EXPORT MITKCLCORE_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKCLCORE_NO_DEPRECATED
#endif

#endif
