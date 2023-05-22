#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *o
rm *.o
chmod +x 1-create_dynamic_lib.sh
