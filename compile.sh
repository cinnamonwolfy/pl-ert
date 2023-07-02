#!/bin/sh
# Dummy build system so that it can at least build for now :3

set -e
mkdir obj -p
cd obj
clang -v -DIS64BIT -I../include -ffreestanding -fno-stack-protector -nostdinc -nodefaultlibs -g -c ../src/asm/pl-syscall-x86_64.s ../src/posix/*
ar rc ../libpl-ert.a pl-syscall-x86_64.o open.o read.o write.o exit.o
cd ..
clang -v -Iinclude -static -ffreestanding -fno-stack-protector -nostdinc -nostartfiles -nodefaultlibs -g -L. pl-ert-test.c -lpl-ert -o pl-ert-test.out

./pl-ert-test.out
