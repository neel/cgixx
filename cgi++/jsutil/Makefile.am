INCLUDES = -I$(top_srcdir)/cgi++
METASOURCES = AUTO
noinst_HEADERS = jarray.h jbool.h jfunction.h jnumber.h jobject.h jstring.h jvar.h
lib_LTLIBRARIES = libcgixx-jsutil.la
libcgixx_jsutil_la_SOURCES = jarray.cpp jbool.cpp jfunction.cpp jnumber.cpp jobject.cpp jstring.cpp jvar.cpp
libcgixx_jsutil_la_LIBADD = $(top_builddir)/cgi++/libcgixx.la
libcgixx_jsutil_la_LDFLAGS = -static
