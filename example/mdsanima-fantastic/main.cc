// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C++ example domo program for the `MDSANIMA FANTASTIC` project.

#include "lib.hh"

auto main() -> int {
    const char* message = "Hello world from the MDSANIMA FANTASTIC demo program";
    mprint(message);

    const int red = 196;
    mprint(message, red);

    const int black = 0;
    mprint(message, black, red);
}
