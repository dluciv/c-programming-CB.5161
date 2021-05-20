#!/bin/bash

# clean
rm *.bin 2>/dev/null
rm *.tap 2>/dev/null

# set env
Z88DK_ROOT=$HOME/.local/opt/z88dk
pushd $Z88DK_ROOT
. set_environment.sh
popd

# build tape image
zcc +zx -compiler sccz80 -O --opt-code-speed -lndos -lm -create-app $*
