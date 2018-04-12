
#ifndef MITKSCENESERIALIZATIONBASE_EXPORT_H
#define MITKSCENESERIALIZATIONBASE_EXPORT_H

#ifdef MITKSCENESERIALIZATIONBASE_STATIC_DEFINE
#  define MITKSCENESERIALIZATIONBASE_EXPORT
#  define MITKSCENESERIALIZATIONBASE_NO_EXPORT
#else
#  ifndef MITKSCENESERIALIZATIONBASE_EXPORT
#    ifdef MitkSceneSerializationBase_EXPORTS
        /* We are building this library */
#      define MITKSCENESERIALIZATIONBASE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKSCENESERIALIZATIONBASE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKSCENESERIALIZATIONBASE_NO_EXPORT
#    define MITKSCENESERIALIZATIONBASE_NO_EXPORT 
#  endif
#endif

#ifndef MITKSCENESERIALIZATIONBASE_DEPRECATED
#  define MITKSCENESERIALIZATIONBASE_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKSCENESERIALIZATIONBASE_DEPRECATED_EXPORT
#  define MITKSCENESERIALIZATIONBASE_DEPRECATED_EXPORT MITKSCENESERIALIZATIONBASE_EXPORT MITKSCENESERIALIZATIONBASE_DEPRECATED
#endif

#ifndef MITKSCENESERIALIZATIONBASE_DEPRECATED_NO_EXPORT
#  define MITKSCENESERIALIZATIONBASE_DEPRECATED_NO_EXPORT MITKSCENESERIALIZATIONBASE_NO_EXPORT MITKSCENESERIALIZATIONBASE_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKSCENESERIALIZATIONBASE_NO_DEPRECATED
#endif

#endif