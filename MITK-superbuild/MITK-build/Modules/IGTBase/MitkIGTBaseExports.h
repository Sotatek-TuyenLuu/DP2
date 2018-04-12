
#ifndef MITKIGTBASE_EXPORT_H
#define MITKIGTBASE_EXPORT_H

#ifdef MITKIGTBASE_STATIC_DEFINE
#  define MITKIGTBASE_EXPORT
#  define MITKIGTBASE_NO_EXPORT
#else
#  ifndef MITKIGTBASE_EXPORT
#    ifdef MitkIGTBase_EXPORTS
        /* We are building this library */
#      define MITKIGTBASE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKIGTBASE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKIGTBASE_NO_EXPORT
#    define MITKIGTBASE_NO_EXPORT 
#  endif
#endif

#ifndef MITKIGTBASE_DEPRECATED
#  define MITKIGTBASE_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKIGTBASE_DEPRECATED_EXPORT
#  define MITKIGTBASE_DEPRECATED_EXPORT MITKIGTBASE_EXPORT MITKIGTBASE_DEPRECATED
#endif

#ifndef MITKIGTBASE_DEPRECATED_NO_EXPORT
#  define MITKIGTBASE_DEPRECATED_NO_EXPORT MITKIGTBASE_NO_EXPORT MITKIGTBASE_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKIGTBASE_NO_DEPRECATED
#endif

#endif
