
#ifndef MITKRTUI_EXPORT_H
#define MITKRTUI_EXPORT_H

#ifdef MITKRTUI_STATIC_DEFINE
#  define MITKRTUI_EXPORT
#  define MITKRTUI_NO_EXPORT
#else
#  ifndef MITKRTUI_EXPORT
#    ifdef MitkRTUI_EXPORTS
        /* We are building this library */
#      define MITKRTUI_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKRTUI_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKRTUI_NO_EXPORT
#    define MITKRTUI_NO_EXPORT 
#  endif
#endif

#ifndef MITKRTUI_DEPRECATED
#  define MITKRTUI_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKRTUI_DEPRECATED_EXPORT
#  define MITKRTUI_DEPRECATED_EXPORT MITKRTUI_EXPORT MITKRTUI_DEPRECATED
#endif

#ifndef MITKRTUI_DEPRECATED_NO_EXPORT
#  define MITKRTUI_DEPRECATED_NO_EXPORT MITKRTUI_NO_EXPORT MITKRTUI_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKRTUI_NO_DEPRECATED
#endif

#endif
