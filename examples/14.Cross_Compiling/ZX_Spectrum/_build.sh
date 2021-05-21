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

# SDCC
# CCOPTS='-compiler sdcc -SO3 -clib=sdcc_ix --max-allocs-per-node200000 --reserve-regs-iy'
# CCLIBS='-lmath32'

# build tape image
zcc +zx $CCOPTS $CCLIBS -create-app $*
