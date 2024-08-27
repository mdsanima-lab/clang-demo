// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C++ example domo program for the `MDSANIMA FANTASTIC` project.

#include "lib.hh"

auto main() -> int
{
    const char *message = " Hello world from the demo program  MDSANIMA FANTASTIC ";
    const int   red     = 196;
    const int   black   = 0;

    mprint(message);
    mprint(message, red);
    mprint(message, red, black);
}
