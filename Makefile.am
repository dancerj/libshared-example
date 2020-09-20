
## List of shared libraries to build. They are '.la'; since that's how libtool wraps and handles shared library and static library builds.
lib_LTLIBRARIES = libshared.la

## The information for libtool to construct SONAME;
## info '(libtool) Libtool versioning'
libshared_la_LDFLAGS = -version-info 0:0:0 

## The path to include files you composed, so that the 
## test program and shared library can find it.
INCLUDES = \
	-I$(top_srcdir)

## The header files you have composed and would like to be distributed with 
## the package
include_HEADERS = shared.h

## Actual list of source code which constructs the shared library.
libshared_la_SOURCES= \
	shared.c \
	shared.h 

## Just an example program so that your shared library can be linked.
## only compiled when you run 'make check'
check_PROGRAMS =  \
	testprint
## The test binary
testprint_SOURCES = testprint.c
## The created shared library is linked to this test program.
testprint_LDADD = libshared.la

## Actually run the program to test that you can run it.
dist_TESTS= tests/testprint.sh


