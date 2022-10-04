#!/bin/bash
gcc -Wall -Wextra -pedantic -fPIC win.c -shared -o mmwin.so
LD_PRELOAD=/$PWD/mmwin.so
