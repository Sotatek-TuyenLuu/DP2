
#ifndef MITKXNAT_EXPORT_H
#define MITKXNAT_EXPORT_H

#ifdef MITKXNAT_STATIC_DEFINE
#  define MITKXNAT_EXPORT
#  define MITKXNAT_NO_EXPORT
#else
#  ifndef MITKXNAT_EXPORT
#    ifdef MitkXNAT_EXPORTS
        /* We are building this library */
#      define MITKXNAT_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKXNAT_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKXNAT_NO_EXPORT
#    define MITKXNAT_NO_EXPORT 
#  endif
#endif

#ifndef MITKXNAT_DEPRECATED
#  define MITKXNAT_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKXNAT_DEPRECATED_EXPORT
#  define MITKXNAT_DEPRECATED_EXPORT MITKXNAT_EXPORT MITKXNAT_DEPRECATED
#endif

#ifndef MITKXNAT_DEPRECATED_NO_EXPORT
#  define MITKXNAT_DEPRECATED_NO_EXPORT MITKXNAT_NO_EXPORT MITKXNAT_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKXNAT_NO_DEPRECATED
#endif

#endif
