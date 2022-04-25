#!/bin/bash

gcc -c -o module1.o module1.c
gcc -c -o module2.o module2.c

gcc -shared -o shared1.so shared1.c

gcc -o prog prog.c module1.o module2.o shared1.so
