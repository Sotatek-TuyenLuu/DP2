
#ifndef MITKGIZMO_EXPORT_H
#define MITKGIZMO_EXPORT_H

#ifdef MITKGIZMO_STATIC_DEFINE
#  define MITKGIZMO_EXPORT
#  define MITKGIZMO_NO_EXPORT
#else
#  ifndef MITKGIZMO_EXPORT
#    ifdef MitkGizmo_EXPORTS
        /* We are building this library */
#      define MITKGIZMO_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKGIZMO_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKGIZMO_NO_EXPORT
#    define MITKGIZMO_NO_EXPORT 
#  endif
#endif

#ifndef MITKGIZMO_DEPRECATED
#  define MITKGIZMO_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKGIZMO_DEPRECATED_EXPORT
#  define MITKGIZMO_DEPRECATED_EXPORT MITKGIZMO_EXPORT MITKGIZMO_DEPRECATED
#endif

#ifndef MITKGIZMO_DEPRECATED_NO_EXPORT
#  define MITKGIZMO_DEPRECATED_NO_EXPORT MITKGIZMO_NO_EXPORT MITKGIZMO_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKGIZMO_NO_DEPRECATED
#endif

#endif
