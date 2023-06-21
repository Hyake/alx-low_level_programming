#!/bin/bash

gcc -shared -o liball.so -fPIC *.c
gcc -shared -o liball.so *.o

