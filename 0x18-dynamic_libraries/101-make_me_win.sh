#!/bin/bash
gcc -fPIC -c win.c
gcc -shared -o mmwin.so win.o
