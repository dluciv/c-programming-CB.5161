#!/bin/bash

# clean
rm *.bin 2>/dev/null
rm *.tap 2>/dev/null

# set env
Z88DK_ROOT=$HOME/.local/opt/z88dk
pushd $Z88DK_ROOT
. set_environment.sh
popd

# Z88
CCOPTS='-compiler sccz80 -SO3'
CCLIBS='-lndos -lm'
CCAFTEROPTS='-clib=ansi -pragma-define:ansicolumns=42' # 6x8 font - nicest one

# SDCC
# CCOPTS='-compiler sdcc -SO3 -clib=sdcc_ix --max-allocs-per-node200000 --reserve-regs-iy'
# CCLIBS='-lmath32'
# CCAFTEROPTS=''

# build tape image
zcc +zx $CCOPTS $CCLIBS $CCAFTEROPTS -create-app $*
