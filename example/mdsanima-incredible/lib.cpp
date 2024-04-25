// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The C++ example demo project file for the `MDSANIMA INCREDIBLE` shared library implementation.

#include "lib.hpp"

#include <iostream>

void mprint(const char *text)
{
    std::cout << text << "\n";
}

void mprint(const char *text, int color)
{
    std::cout << "\e[38;5;" << color << "m" << text << "\e[0m\n";
}

void mprint(const char *text, int foreground, int background)
{
    std::cout << "\e[38;5;" << foreground << "m\e[48;5;" << background << "m" << text << "\e[0m\n";
}
