// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C++ example domo program for the `MDSANIMA STUNNING` project.

#include "lib.hxx"

auto main() -> int
{
    const char *message = "Hello world from the MDSANIMA STUNNING demo program";
    const int blue      = 27;
    const int black     = 0;

    mprint(message);
    mprint(message, blue);
    mprint(message, black, blue);
}
