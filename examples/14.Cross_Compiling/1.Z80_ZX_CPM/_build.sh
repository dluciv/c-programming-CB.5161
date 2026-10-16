#!/bin/bash

# clean
rm *.bin *.tap *.com *.COM 2>/dev/null

# Z88
CCOPTS='-compiler sccz80 -SO3'
CCLIBS='-lndos -lm'
CCAFTEROPTS='-clib=ansi -pragma-define:ansicolumns=42' # 6x8 font - nicest one

# build tape image
docker run -it -v .:/src z88dk/z88dk zcc +zx $CCOPTS $CCLIBS $CCAFTEROPTS -create-app $*


# clean

# Z88
CCOPTS=''
CCLIBS='-lm'
CCAFTEROPTS=''

# build tape image
docker run -it -v .:/src z88dk/z88dk zcc +cpm $CCOPTS $CCLIBS $CCAFTEROPTS -create-app $*
