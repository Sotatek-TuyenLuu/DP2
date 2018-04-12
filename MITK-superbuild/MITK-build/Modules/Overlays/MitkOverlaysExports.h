
#ifndef MITKOVERLAYS_EXPORT_H
#define MITKOVERLAYS_EXPORT_H

#ifdef MITKOVERLAYS_STATIC_DEFINE
#  define MITKOVERLAYS_EXPORT
#  define MITKOVERLAYS_NO_EXPORT
#else
#  ifndef MITKOVERLAYS_EXPORT
#    ifdef MitkOverlays_EXPORTS
        /* We are building this library */
#      define MITKOVERLAYS_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKOVERLAYS_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKOVERLAYS_NO_EXPORT
#    define MITKOVERLAYS_NO_EXPORT 
#  endif
#endif

#ifndef MITKOVERLAYS_DEPRECATED
#  define MITKOVERLAYS_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKOVERLAYS_DEPRECATED_EXPORT
#  define MITKOVERLAYS_DEPRECATED_EXPORT MITKOVERLAYS_EXPORT MITKOVERLAYS_DEPRECATED
#endif

#ifndef MITKOVERLAYS_DEPRECATED_NO_EXPORT
#  define MITKOVERLAYS_DEPRECATED_NO_EXPORT MITKOVERLAYS_NO_EXPORT MITKOVERLAYS_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKOVERLAYS_NO_DEPRECATED
#endif

#endif
