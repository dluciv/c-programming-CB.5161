# Cross-compile C code for ZX Specturm

## Installation

* Install [Z88DK](https://z88dk.org/site/download) by any mean.
  Either use your package manager or download binaries, or download and build sources.

* Install [FUSE Spectrum emulator](https://en.wikipedia.org/wiki/Fuse_(emulator)).

## Setup environment

On my system, I downloaded and extracted the binary package to `$HOME/.local/opt/z88dk`.
Under that folder, they provide `set_environment.sh` script to set environment.
So before calling compiler, I do:

    Z88DK_ROOT=$HOME/.local/opt/z88dk
    pushd $Z88DK_ROOT
    . set_environment.sh  # update vars in current shell
    popd

You can correct everything for your system for sure.

## Use scripts

To compile, link and so on:

    ./_build.sh ..source files..

It produces binary memory images and `a.tap` — an image of [compact cassette](https://en.wikipedia.org/wiki/Cassette_tape)
for ZX Spectrum. With script above, it should contain the both binaries and [Sinclair BASIC](https://en.wikipedia.org/wiki/Sinclair_BASIC) loader program.

To run, use:

    ./_run.sh

which loads and launches cassette image with FUSE Spectrum emulator.
