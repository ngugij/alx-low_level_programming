#!/bin/bash
gcc -Wall -Wextra -pedantic -fPIC win.c -shared -o libwin.so
LD_PRELOAD=/$PWD/libwin.so
