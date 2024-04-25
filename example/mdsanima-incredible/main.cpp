// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C++ example domo program for the `MDSANIMA INCREDIBLE` project.

#include "lib.hpp"

auto main() -> int
{
    const char *message = "Hello world from the MDSANIMA INCREDIBLE demo program";
    const int green     = 46;
    const int black     = 0;

    mprint(message);
    mprint(message, green);
    mprint(message, black, green);
}
