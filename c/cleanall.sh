#! /bin/sh
## This script cleans up all generated files
echo "Remove all generated files"
rm -rf aclocal.m4 config.* build-aux m4 configure autom4te.cache Makefile Makefile.in stamp-h1 libtool
echo "Done !!!!"
ls -al 
exit 0
