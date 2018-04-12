
#ifndef MITKAPPUTIL_EXPORT_H
#define MITKAPPUTIL_EXPORT_H

#ifdef MITKAPPUTIL_STATIC_DEFINE
#  define MITKAPPUTIL_EXPORT
#  define MITKAPPUTIL_NO_EXPORT
#else
#  ifndef MITKAPPUTIL_EXPORT
#    ifdef MitkAppUtil_EXPORTS
        /* We are building this library */
#      define MITKAPPUTIL_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKAPPUTIL_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKAPPUTIL_NO_EXPORT
#    define MITKAPPUTIL_NO_EXPORT 
#  endif
#endif

#ifndef MITKAPPUTIL_DEPRECATED
#  define MITKAPPUTIL_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKAPPUTIL_DEPRECATED_EXPORT
#  define MITKAPPUTIL_DEPRECATED_EXPORT MITKAPPUTIL_EXPORT MITKAPPUTIL_DEPRECATED
#endif

#ifndef MITKAPPUTIL_DEPRECATED_NO_EXPORT
#  define MITKAPPUTIL_DEPRECATED_NO_EXPORT MITKAPPUTIL_NO_EXPORT MITKAPPUTIL_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKAPPUTIL_NO_DEPRECATED
#endif

#endif
