#!/bin/bash

# `pip install gprof2dot` or use your package manager

cc -Wall -pg -o test_gprof test_gprof.c
./test_gprof

gprof test_gprof gmon.out >gprof.txt

python3 -m gprof2dot <gprof.txt >gprof.dot
dot -Tpdf -o z.pdf z.dot
