#!/bin/bash

gcc -shared -o shared1.so shared1.c
gcc -c -o module2.o module2.c
gcc -o prog prog.c module1.c module2.o shared1.so
