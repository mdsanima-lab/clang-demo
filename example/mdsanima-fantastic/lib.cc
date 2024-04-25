// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The simple C++ example demo project file for `MDSANIMA FANTASTIC` shared library implementation.

#include "lib.hh"

#include <iostream>

void mprint(const char* text) { std::cout << text << "\n"; }

void mprint(const char* text, int color) {
    std::cout << "\e[38;5;" << color << "m" << text << "\e[0m\n";
}
