#!/bin/bash
gcc -fPIC -c win.c -shared -o mmwin.so win.o
LD_PRELOAD=/$PWD/mmwin.so
