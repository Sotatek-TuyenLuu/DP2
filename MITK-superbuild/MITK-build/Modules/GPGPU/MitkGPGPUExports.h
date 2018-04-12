
#ifndef MITKGPGPU_EXPORT_H
#define MITKGPGPU_EXPORT_H

#ifdef MITKGPGPU_STATIC_DEFINE
#  define MITKGPGPU_EXPORT
#  define MITKGPGPU_NO_EXPORT
#else
#  ifndef MITKGPGPU_EXPORT
#    ifdef MitkGPGPU_EXPORTS
        /* We are building this library */
#      define MITKGPGPU_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MITKGPGPU_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MITKGPGPU_NO_EXPORT
#    define MITKGPGPU_NO_EXPORT 
#  endif
#endif

#ifndef MITKGPGPU_DEPRECATED
#  define MITKGPGPU_DEPRECATED __declspec(deprecated)
#endif

#ifndef MITKGPGPU_DEPRECATED_EXPORT
#  define MITKGPGPU_DEPRECATED_EXPORT MITKGPGPU_EXPORT MITKGPGPU_DEPRECATED
#endif

#ifndef MITKGPGPU_DEPRECATED_NO_EXPORT
#  define MITKGPGPU_DEPRECATED_NO_EXPORT MITKGPGPU_NO_EXPORT MITKGPGPU_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define MITKGPGPU_NO_DEPRECATED
#endif

#endif
