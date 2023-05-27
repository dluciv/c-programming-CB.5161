#!/usr/bin/env python3

from ffi_pi.lib import pi_approx

approx = pi_approx(10)
print(approx)
assert str(approx).startswith("3.")

approx = pi_approx(10000)
print(approx)
assert str(approx).startswith("3.1")

approx = pi_approx(10000000)
print(approx)
assert str(approx).startswith("3.141")
