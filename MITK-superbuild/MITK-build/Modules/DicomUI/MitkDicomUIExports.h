
#ifndef MITKDICOMUI_EXPORT_H
#define MITKDICOMUI_EXPORT_H

#ifdef MITKDICOMUI_STATIC_DEFINE
#  define MITKDICOMUI_EXPORT
#  define MITKDICOMUI_NO_EXPORT
#else
#  ifndef MITKDICOMUI_EXPORT
#    ifdef MitkDicomUI_EXPORTS
        /* We are building this library */
#      define MITKDICOMUI_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKDICOMUI_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKDICOMUI_NO_EXPORT
#    define MITKDICOMUI_NO_EXPORT 
#  endif
#endif

#ifndef MITKDICOMUI_DEPRECATED
#  define MITKDICOMUI_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKDICOMUI_DEPRECATED_EXPORT
#  define MITKDICOMUI_DEPRECATED_EXPORT MITKDICOMUI_EXPORT MITKDICOMUI_DEPRECATED
#endif

#ifndef MITKDICOMUI_DEPRECATED_NO_EXPORT
#  define MITKDICOMUI_DEPRECATED_NO_EXPORT MITKDICOMUI_NO_EXPORT MITKDICOMUI_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKDICOMUI_NO_DEPRECATED
#endif

#endif
