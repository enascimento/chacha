#!/usr/bin/env sh
cd stubs
parallel 'gsed -e "s/ROUNDS/{}/g" chacha-xor-template.c > chacha{}.c' ::: 8 12 20
clang-format-3.5 -i -style=Chromium *.c
