#!/bin/bash

cp A.COM cpm/

pushd cpm

if command -v cool-retro-term 2>&1 1>/dev/null; then
  cool-retro-term -e sh -c './cpm A; echo Press Enter; read'
else
  ./cpm A
fi

popd
