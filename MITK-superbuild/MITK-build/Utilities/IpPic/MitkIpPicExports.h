
#ifndef MITKIPPIC_EXPORT_H
#define MITKIPPIC_EXPORT_H

#ifdef MITKIPPIC_STATIC_DEFINE
#  define MITKIPPIC_EXPORT
#  define MITKIPPIC_NO_EXPORT
#else
#  ifndef MITKIPPIC_EXPORT
#    ifdef MitkIpPic_EXPORTS
        /* We are building this library */
#      define MITKIPPIC_EXPORT 
#    else
        /* We are using this library */
#      define MITKIPPIC_EXPORT 
#    endif
#  endif

#  ifndef MITKIPPIC_NO_EXPORT
#    define MITKIPPIC_NO_EXPORT 
#  endif
#endif

#ifndef MITKIPPIC_DEPRECATED
#  define MITKIPPIC_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKIPPIC_DEPRECATED_EXPORT
#  define MITKIPPIC_DEPRECATED_EXPORT MITKIPPIC_EXPORT MITKIPPIC_DEPRECATED
#endif

#ifndef MITKIPPIC_DEPRECATED_NO_EXPORT
#  define MITKIPPIC_DEPRECATED_NO_EXPORT MITKIPPIC_NO_EXPORT MITKIPPIC_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKIPPIC_NO_DEPRECATED
#endif

#endif
