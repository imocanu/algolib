#-*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

dnl -*- mode: m4 -*-
AC_PREREQ([2.63])

m4_define([algolib_major_version], [1])
m4_define([algolib_minor_version], [13])
m4_define([algolib_micro_version], [7])
m4_define([algolib_version],
          [algolib_major_version.algolib_minor_version.slgolib_micro_version])
          
AC_INIT([algolib], [algolib_version], [https://github.com/imocanu/algolib/issues], [algolib])

AC_CONFIG_AUX_DIR([build-aux])

m4_pattern_forbid([^AX_],
  [Unexpanded AX_ macro found. Please install GNU autoconf-archive])

AC_CANONICAL_HOST

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([1.13 -Wno-portability subdir-objects foreign])

# Initialize libtool
LT_INIT([win32-dll])
LT_LANG([Windows Resource])

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT