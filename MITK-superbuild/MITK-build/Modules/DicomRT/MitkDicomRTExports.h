
#ifndef MITKDICOMRT_EXPORT_H
#define MITKDICOMRT_EXPORT_H

#ifdef MITKDICOMRT_STATIC_DEFINE
#  define MITKDICOMRT_EXPORT
#  define MITKDICOMRT_NO_EXPORT
#else
#  ifndef MITKDICOMRT_EXPORT
#    ifdef MitkDicomRT_EXPORTS
        /* We are building this library */
#      define MITKDICOMRT_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKDICOMRT_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKDICOMRT_NO_EXPORT
#    define MITKDICOMRT_NO_EXPORT 
#  endif
#endif

#ifndef MITKDICOMRT_DEPRECATED
#  define MITKDICOMRT_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKDICOMRT_DEPRECATED_EXPORT
#  define MITKDICOMRT_DEPRECATED_EXPORT MITKDICOMRT_EXPORT MITKDICOMRT_DEPRECATED
#endif

#ifndef MITKDICOMRT_DEPRECATED_NO_EXPORT
#  define MITKDICOMRT_DEPRECATED_NO_EXPORT MITKDICOMRT_NO_EXPORT MITKDICOMRT_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKDICOMRT_NO_DEPRECATED
#endif

#endif
