// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// Simple C implementation of the demo MDSANIMA BLIZZARD project. This project is a simple demo of
// the basic usage of the MDSANIMA C library that can build and run on amd64 GNU/Linux system, such
// as Debian, Ubuntu, Fedora, CentOS, and so on. The main funcionality of this project is to print
// text in the terminal with a color.

#include <mdsanima.h>
#include <stdio.h>

int main(void) {
    const int foregroundColor = 48;
    const int backgroundColor = 35;

    cprint(" MDSANIMA BLIZZARD \n", foregroundColor, backgroundColor);

    return 0;
}
