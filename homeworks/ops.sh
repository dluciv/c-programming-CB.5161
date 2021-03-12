#!/bin/bash

case $1 in
  init)
    git submodule update --init --recursive
  ;;
  update)
    git submodule update --recursive
  ;;
  reset)
    git submodule foreach --recursive git reset --hard
    git submodule foreach --recursive 'rm -rf .ipynb_checkpoints'
  ;;
  sync)
    git submodule foreach --recursive ' git reset --hard && git pull --rebase && git pull --all --tags --rebase && git pull origin master && git pull origin main && git add . || : '
  ;;
esac
