# Process this file with autoconf to produce a configure script.
# requires automake1.9 to process this file.

dnl Mandatory header claiming your version.
AC_INIT([libshared], [0.1], [dancer@debian.org])
AC_CONFIG_SRCDIR([shared.c])
AM_INIT_AUTOMAKE([])


AM_MAINTAINER_MODE

dnl Declare that you are using libtool, to use libtool features.
AC_PROG_LIBTOOL

dnl
dnl the rest is really irrelevant for shared library, standard stuff.
dnl

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
# not needed in this case

# Checks for header files.
AC_HEADER_STDC

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([printf])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
