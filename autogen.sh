#!/bin/sh
set -e
#autoreconf --install --force -I build-aux -I m4
autoreconf --install --force -I build-aux 
rm -rf autom4te.cache
