#!/bin/bash

cl /c module1.c
cl /c module2.c

cl /LD shared1.c

cl prog.c module1.obj module2.obj shared1.lib
