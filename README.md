# PortaLinux Embedded Runtime

The PortaLinux Embedded Runtime, or PL-ERT, is an implementation of ESB 1.1's
API (most POSIX calls and all pl32lib-ng/PortaLinux Runtime calls) that does
not depend on the Standard C library. This library only supports static linking
and will only link "properly" (no warnings) with a freestanding C compiler.

# Build instructions

Currently, there is no proper build system. While I work on a proper build
system, you can use the `./compile.sh` script in the root of the directory.
It compiles in 64-bit mode and with debug symbols by default

# Contributions

Due to this being freestanding pl32lib-ng, it inherits its contribution clause,
which means that contributions will never be accepted. I, Sophie, will be the
only contributor to this project throughout its entire life.
