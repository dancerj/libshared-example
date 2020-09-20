#!/bin/bash
# A sample script to run libtool/autoconf/automake;
# things could be more verbose, but you know what you're doing, right?

# Generates the required ./Makefile.in and ./configure
# from Makefile.am and configure.ac files.

libtoolize -f -c && \
aclocal-1.9 && \
automake-1.9 --foreign -a -c && \
autoconf
