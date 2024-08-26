// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C demo program for the `MDSANIMA BLIZZARD` project.

#include <mdsanima.h>

int main(void)
{
    const char *message = " MDSANIMA BLIZZARD ";
    const int   fgColor = 48;  // Text color
    const int   bgColor = 36;  // Background color

    cprint(message, fgColor, bgColor);

    return 0;
}
