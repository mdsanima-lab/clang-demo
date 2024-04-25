// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C++ example domo program for `MDSANIMA INCREDIBLE` project.

#include "lib.hpp"

auto main() -> int {
    const char* message = "Hello World from the MDSANIMA INCREDIBLE demo program!";
    mprint(message);
    const int color = 2;
    mprint(message, color);
}
