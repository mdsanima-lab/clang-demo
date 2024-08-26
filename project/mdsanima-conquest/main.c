// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C demo program for the `MDSANIMA CONQUEST` project.

#include <mdsanima.h>

int main(void)
{
    const char *message = " MDSANIMA CONQUEST ";
    const int   fgColor = 74;  // Text color
    const int   bgColor = 62;  // Background color

    cprint(message, fgColor, bgColor);

    return 0;
}
