/*
 * Hints.hh
 *
 * Copyright 2000, LifeLine Networks BV (www.lifeline.nl). All rights reserved.
 * Copyright 2000, Bastiaan Bakker. All rights reserved.
 *
 * See the COPYING file for the terms of usage and distribution.
 */

#ifndef _LOG4CPP_HINTS_HH
#define _LOG4CPP_HINTS_HH

#include "log4cpp/config.h"
#include <stdarg.h>

#if defined(_MSC_VER)
#    pragma warning( disable : 4786 )
     using namespace std;
#endif

#ifdef LOG4CPP_USE_NEW_IOSTREAM
#    include <sstream>
#else
#    include <strstream>
#endif

namespace log4cpp {

#ifdef LOG4CPP_USE_NEW_IOSTREAM
    typedef std::ostringstream ostringstream;
#else
    typedef ostrstream ostringstream;
#endif

    class StreamUtil {
        public:
        static char* str(ostringstream& s);
	static void vform(ostringstream& s, const char* format, va_list args);
    };
}
#endif // _LOG4CPP_HINTS_HH