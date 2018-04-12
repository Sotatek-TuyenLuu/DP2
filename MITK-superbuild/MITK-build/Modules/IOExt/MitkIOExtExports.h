
#ifndef MITKIOEXT_EXPORT_H
#define MITKIOEXT_EXPORT_H

#ifdef MITKIOEXT_STATIC_DEFINE
#  define MITKIOEXT_EXPORT
#  define MITKIOEXT_NO_EXPORT
#else
#  ifndef MITKIOEXT_EXPORT
#    ifdef MitkIOExt_EXPORTS
        /* We are building this library */
#      define MITKIOEXT_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKIOEXT_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKIOEXT_NO_EXPORT
#    define MITKIOEXT_NO_EXPORT 
#  endif
#endif

#ifndef MITKIOEXT_DEPRECATED
#  define MITKIOEXT_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKIOEXT_DEPRECATED_EXPORT
#  define MITKIOEXT_DEPRECATED_EXPORT MITKIOEXT_EXPORT MITKIOEXT_DEPRECATED
#endif

#ifndef MITKIOEXT_DEPRECATED_NO_EXPORT
#  define MITKIOEXT_DEPRECATED_NO_EXPORT MITKIOEXT_NO_EXPORT MITKIOEXT_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKIOEXT_NO_DEPRECATED
#endif

#endif
