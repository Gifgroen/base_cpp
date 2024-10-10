#ifndef _BASE_H
#define _BASE_H

#if defined(_MSC_VER)
#  define COMPILER_CL 1
#elif defined(__clang__)
#  define COMPILER_CLANG 1
#elif defined(__GNUC__)
#  define COMPILER_GCC 1
#else
#  error Unknown compiler
#endif

///
/// Compiler
/// 
#if !defined(COMPILER_CL)
#  define COMPILER_CL 0
#endif
#if !defined(COMPILER_CLANG)
#  define COMPILER_CLANG 0
#endif
#if !defined(COMPILER_GCC)
#  define COMPILER_GCC 0
#endif

#endif // _BASE_H