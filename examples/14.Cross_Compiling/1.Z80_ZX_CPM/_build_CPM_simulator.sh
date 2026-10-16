#!/bin/bash

git submodule update --init
pushd cpm
make
popd

