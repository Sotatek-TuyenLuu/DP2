
#ifndef MITKLEGACYADAPTORS_EXPORT_H
#define MITKLEGACYADAPTORS_EXPORT_H

#ifdef MITKLEGACYADAPTORS_STATIC_DEFINE
#  define MITKLEGACYADAPTORS_EXPORT
#  define MITKLEGACYADAPTORS_NO_EXPORT
#else
#  ifndef MITKLEGACYADAPTORS_EXPORT
#    ifdef MitkLegacyAdaptors_EXPORTS
        /* We are building this library */
#      define MITKLEGACYADAPTORS_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKLEGACYADAPTORS_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKLEGACYADAPTORS_NO_EXPORT
#    define MITKLEGACYADAPTORS_NO_EXPORT 
#  endif
#endif

#ifndef MITKLEGACYADAPTORS_DEPRECATED
#  define MITKLEGACYADAPTORS_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKLEGACYADAPTORS_DEPRECATED_EXPORT
#  define MITKLEGACYADAPTORS_DEPRECATED_EXPORT MITKLEGACYADAPTORS_EXPORT MITKLEGACYADAPTORS_DEPRECATED
#endif

#ifndef MITKLEGACYADAPTORS_DEPRECATED_NO_EXPORT
#  define MITKLEGACYADAPTORS_DEPRECATED_NO_EXPORT MITKLEGACYADAPTORS_NO_EXPORT MITKLEGACYADAPTORS_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKLEGACYADAPTORS_NO_DEPRECATED
#endif

#endif