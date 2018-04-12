
#ifndef MITKIPFUNC_EXPORT_H
#define MITKIPFUNC_EXPORT_H

#ifdef MITKIPFUNC_STATIC_DEFINE
#  define MITKIPFUNC_EXPORT
#  define MITKIPFUNC_NO_EXPORT
#else
#  ifndef MITKIPFUNC_EXPORT
#    ifdef MitkIpFunc_EXPORTS
        /* We are building this library */
#      define MITKIPFUNC_EXPORT 
#    else
        /* We are using this library */
#      define MITKIPFUNC_EXPORT 
#    endif
#  endif

#  ifndef MITKIPFUNC_NO_EXPORT
#    define MITKIPFUNC_NO_EXPORT 
#  endif
#endif

#ifndef MITKIPFUNC_DEPRECATED
#  define MITKIPFUNC_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKIPFUNC_DEPRECATED_EXPORT
#  define MITKIPFUNC_DEPRECATED_EXPORT MITKIPFUNC_EXPORT MITKIPFUNC_DEPRECATED
#endif

#ifndef MITKIPFUNC_DEPRECATED_NO_EXPORT
#  define MITKIPFUNC_DEPRECATED_NO_EXPORT MITKIPFUNC_NO_EXPORT MITKIPFUNC_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKIPFUNC_NO_DEPRECATED
#endif

#endif