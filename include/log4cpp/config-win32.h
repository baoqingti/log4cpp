#ifndef _INCLUDE_LOG4CPP_CONFIG_WIN32_H
#define _INCLUDE_LOG4CPP_CONFIG_WIN32_H 1
 
/* manually edited from include/log4cpp/config.h */

/* Define if you have the syslog function.  */
/* #undef LOG4CPP_HAVE_SYSLOG */

/* Define if you have the <io.h> header file.  */
#ifndef LOG4CPP_HAVE_IO_H
#define LOG4CPP_HAVE_IO_H 1
#endif

/* Define if you have the <unistd.h> header file.  */
/* #undef LOG4CPP_HAVE_UNISTD_H */

/* Define if you have the idsa library (-lidsa).  */
/* #undef LOG4CPP_HAVE_LIBIDSA */

/* Name of package */
#ifndef LOG4CPP_PACKAGE
#define LOG4CPP_PACKAGE  "log4cpp"
#endif

/* Version number of package */
#ifndef LOG4CPP_VERSION
#define LOG4CPP_VERSION  "0.2.4"
#endif

/* define if the compiler implements namespaces */
#ifndef LOG4CPP_HAVE_NAMESPACES
#define LOG4CPP_HAVE_NAMESPACES 1
#endif

/* define if the compiler has stringstream */
#ifndef LOG4CPP_HAVE_SSTREAM
#define LOG4CPP_HAVE_SSTREAM 1
#endif

/* define if the C library has snprintf */
#ifndef LOG4CPP_HAVE_SNPRINTF
#define LOG4CPP_HAVE_SNPRINTF 1
#endif

/* define to get around problems with ERROR in windows.h */
#ifndef LOG4CPP_FIX_ERROR_COLLISION
#define LOG4CPP_FIX_ERROR_COLLISION 1
#endif

/* define WIN32 for Borland */
#ifndef WIN32
#define WIN32
#endif

/* _INCLUDE_LOG4CPP_CONFIG_WIN32_H */
#endif