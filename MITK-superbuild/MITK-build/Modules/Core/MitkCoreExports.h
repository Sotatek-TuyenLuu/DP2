
#ifndef MITKCORE_EXPORT_H
#define MITKCORE_EXPORT_H

#ifdef MITKCORE_STATIC_DEFINE
#  define MITKCORE_EXPORT
#  define MITKCORE_NO_EXPORT
#else
#  ifndef MITKCORE_EXPORT
#    ifdef MitkCore_EXPORTS
        /* We are building this library */
#      define MITKCORE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKCORE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKCORE_NO_EXPORT
#    define MITKCORE_NO_EXPORT 
#  endif
#endif

#ifndef MITKCORE_DEPRECATED
#  define MITKCORE_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKCORE_DEPRECATED_EXPORT
#  define MITKCORE_DEPRECATED_EXPORT MITKCORE_EXPORT MITKCORE_DEPRECATED
#endif

#ifndef MITKCORE_DEPRECATED_NO_EXPORT
#  define MITKCORE_DEPRECATED_NO_EXPORT MITKCORE_NO_EXPORT MITKCORE_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKCORE_NO_DEPRECATED
#endif

#endif
