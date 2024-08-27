// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The C++ example demo project file for the `MDSANIMA STUNNING` shared library implementation.

#include "lib.hxx"

#include <iostream>

void mprint(const char *text)
{
    std::cout << text << "\n";
}

void mprint(const char *text, int color)
{
    std::cout << ESC_FOREGROUND << color << "m" << ESC_TEXT_BOLD << text << ESC_RESET << "\n";
}

void mprint(const char *text, int background, int foreground)
{
    std::cout << ESC_BACKGROUND << background << "m" << ESC_FOREGROUND << foreground << "m" << text
              << ESC_RESET << "\n";
}
