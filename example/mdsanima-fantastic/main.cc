// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C++ example domo program for `MDSANIMA FANTASTIC` project.

#include "lib.hh"

auto main() -> int {
    const char* message = "Hello World from the MDSANIMA FANTASTIC demo program!";
    mprint(message);
    const int color = 1;
    mprint(message, color);
}
