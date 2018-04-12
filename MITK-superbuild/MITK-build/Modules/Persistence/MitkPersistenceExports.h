
#ifndef MITKPERSISTENCE_EXPORT_H
#define MITKPERSISTENCE_EXPORT_H

#ifdef MITKPERSISTENCE_STATIC_DEFINE
#  define MITKPERSISTENCE_EXPORT
#  define MITKPERSISTENCE_NO_EXPORT
#else
#  ifndef MITKPERSISTENCE_EXPORT
#    ifdef MitkPersistence_EXPORTS
        /* We are building this library */
#      define MITKPERSISTENCE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKPERSISTENCE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKPERSISTENCE_NO_EXPORT
#    define MITKPERSISTENCE_NO_EXPORT 
#  endif
#endif

#ifndef MITKPERSISTENCE_DEPRECATED
#  define MITKPERSISTENCE_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKPERSISTENCE_DEPRECATED_EXPORT
#  define MITKPERSISTENCE_DEPRECATED_EXPORT MITKPERSISTENCE_EXPORT MITKPERSISTENCE_DEPRECATED
#endif

#ifndef MITKPERSISTENCE_DEPRECATED_NO_EXPORT
#  define MITKPERSISTENCE_DEPRECATED_NO_EXPORT MITKPERSISTENCE_NO_EXPORT MITKPERSISTENCE_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKPERSISTENCE_NO_DEPRECATED
#endif

#endif