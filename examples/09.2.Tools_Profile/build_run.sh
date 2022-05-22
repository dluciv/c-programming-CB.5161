#!/bin/bash

# `pip install gprof2dot` or use your package manager

cc -O3 -Wall -pg -o test_gprof test_gprof.c
gprof test_gprof gmon.out > gprof.txt
python3 -m gprof2dot
