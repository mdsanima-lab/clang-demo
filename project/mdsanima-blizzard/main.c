// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C demo program for the `MDSANIMA BLIZZARD` project.

#include <mdsanima.h>

int main(void)
{
    const char *message = " MDSANIMA BLIZZARD ";
    const int   bgColor = 36;  // Background color
    const int   fgColor = 48;  // Text color

    cprint(message, bgColor, fgColor);

    return 0;
}
