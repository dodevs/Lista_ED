#!/usr/bin/env bash
file=$1;
gcc -Wall -pedantic -o $file.exe $file.c && ./$file.exe && rm $file.exe
