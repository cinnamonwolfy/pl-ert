#!/bin/sh
# Dummy build system so that it can at least build for now :3

set -e
mkdir obj -p
cd obj
clang -DIS64BIT -I../include -fno-stack-protector -nostartfiles -nodefaultlibs -g -c ../src/asm/pl-syscall-x86_64.s ../src/posix/*
ar rc ../libpl-ert.a pl-syscall-x86_64.o open.o read.o write.o exit.o
cd ..
clang -Iinclude -static -fno-stack-protector -nostartfiles -nodefaultlibs -g -L. -lpl-ert pl-ert-test.c -o pl-ert-test.out

./pl-ert-test.out
