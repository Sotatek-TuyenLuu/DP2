
#ifndef MITKCLUTILITIES_EXPORT_H
#define MITKCLUTILITIES_EXPORT_H

#ifdef MITKCLUTILITIES_STATIC_DEFINE
#  define MITKCLUTILITIES_EXPORT
#  define MITKCLUTILITIES_NO_EXPORT
#else
#  ifndef MITKCLUTILITIES_EXPORT
#    ifdef MitkCLUtilities_EXPORTS
        /* We are building this library */
#      define MITKCLUTILITIES_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKCLUTILITIES_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKCLUTILITIES_NO_EXPORT
#    define MITKCLUTILITIES_NO_EXPORT 
#  endif
#endif

#ifndef MITKCLUTILITIES_DEPRECATED
#  define MITKCLUTILITIES_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKCLUTILITIES_DEPRECATED_EXPORT
#  define MITKCLUTILITIES_DEPRECATED_EXPORT MITKCLUTILITIES_EXPORT MITKCLUTILITIES_DEPRECATED
#endif

#ifndef MITKCLUTILITIES_DEPRECATED_NO_EXPORT
#  define MITKCLUTILITIES_DEPRECATED_NO_EXPORT MITKCLUTILITIES_NO_EXPORT MITKCLUTILITIES_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKCLUTILITIES_NO_DEPRECATED
#endif

#endif