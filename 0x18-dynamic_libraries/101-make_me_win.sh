#!/bin/bash
gcc -fPIC -c win.c -shared -o mmwin.so win.o
LD_PRELOAD=/$PWD/mmwin.so ./gm 9 8 10 24 75 9
