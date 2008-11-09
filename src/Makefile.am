bin_PROGRAMS = cgixx
cgixx_SOURCES = ../cgi++/apprequest.cpp ../cgi++/base64.cpp ../cgi++/cgiapp.cpp \
	../cgi++/cgiexception.cpp ../cgi++/cgilayout.cpp ../cgi++/commontags.cpp ../cgi++/cssbuilder.cpp \
	../cgi++/file.cpp ../cgi++/htmltag.cpp ../cgi++/htmltagautocompleter.cpp \
	../cgi++/httpheader.cpp ../cgi++/httputil.cpp ../cgi++/jsutil/jarray.cpp \
	../cgi++/jsutil/jbool.cpp ../cgi++/jsutil/jfunction.cpp ../cgi++/jsutil/jnumber.cpp \
	../cgi++/jsutil/jobject.cpp ../cgi++/jsutil/jstring.cpp ../cgi++/jsutil/jtype.cpp \
	../cgi++/jsutil/jvar.cpp ../cgi++/md5.cpp ../cgi++/paramsmap.cpp ../cgi++/request.cpp \
	../cgi++/session.cpp ../cgi++/sessionconfig.cpp ../cgi++/sessioncookieparams.cpp \
	../cgi++/stringlist.cpp ../cgi++/var.cpp cgixx.cpp myapp.cpp
# set the include path found by configure
INCLUDES = -I$(top_srcdir)/cgi++ -I$(top_srcdir)/cgi++/jsutil $(all_includes)

# the library search path.
cgixx_LDFLAGS = $(all_libraries)
noinst_HEADERS = ../cgi++/apprequest.h ../cgi++/base64.h ../cgi++/cgiapp.h \
	../cgi++/cgiexception.h ../cgi++/cgilayout.h ../cgi++/commontags.h ../cgi++/cssbuilder.h \
	../cgi++/file.h ../cgi++/globaldef.h ../cgi++/htmltag.h ../cgi++/htmltagautocompleter.h \
	../cgi++/httpheader.h ../cgi++/httputil.h ../cgi++/jsutil/jarray.h ../cgi++/jsutil/jbool.h \
	../cgi++/jsutil/jfunction.h ../cgi++/jsutil/jnumber.h ../cgi++/jsutil/jobject.h \
	../cgi++/jsutil/jstring.h ../cgi++/jsutil/jtype.h ../cgi++/jsutil/jvar.h ../cgi++/md5.h \
	../cgi++/paramsmap.h ../cgi++/paramsmapcore.h ../cgi++/paramsmapcore.hpp ../cgi++/request.h \
	../cgi++/session.h ../cgi++/sessionconfig.h ../cgi++/sessioncookieparams.h \
	../cgi++/stringlist.h ../cgi++/var.h myapp.h
