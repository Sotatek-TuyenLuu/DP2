
#ifndef MITKIGTIO_EXPORT_H
#define MITKIGTIO_EXPORT_H

#ifdef MITKIGTIO_STATIC_DEFINE
#  define MITKIGTIO_EXPORT
#  define MITKIGTIO_NO_EXPORT
#else
#  ifndef MITKIGTIO_EXPORT
#    ifdef MitkIGTIO_EXPORTS
        /* We are building this library */
#      define MITKIGTIO_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKIGTIO_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKIGTIO_NO_EXPORT
#    define MITKIGTIO_NO_EXPORT 
#  endif
#endif

#ifndef MITKIGTIO_DEPRECATED
#  define MITKIGTIO_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKIGTIO_DEPRECATED_EXPORT
#  define MITKIGTIO_DEPRECATED_EXPORT MITKIGTIO_EXPORT MITKIGTIO_DEPRECATED
#endif

#ifndef MITKIGTIO_DEPRECATED_NO_EXPORT
#  define MITKIGTIO_DEPRECATED_NO_EXPORT MITKIGTIO_NO_EXPORT MITKIGTIO_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKIGTIO_NO_DEPRECATED
#endif

#endif
