#!/usr/bin/env python3

from cffi import FFI
ffibuilder = FFI()

ffibuilder.cdef("float pi_approx(int n);")

ffibuilder.set_source("_pi",  # name of the output C extension
"""
    #include "pi_approx.h"
""",
    sources=['pi_approx.c'],   # includes pi.c as additional sources
    libraries=['m'])    # on Unix, link with the math library

if __name__ == "__main__":
    ffibuilder.compile(verbose=True)
