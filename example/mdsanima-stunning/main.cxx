// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C++ example domo program for the `MDSANIMA STUNNING` project.

#include "lib.hxx"

auto main() -> int {
    const char* message = "Hello world from the MDSANIMA STUNNING demo program";
    mprint(message);

    const int blue = 27;
    mprint(message, blue);

    const int black = 0;
    mprint(message, black, blue);
}
