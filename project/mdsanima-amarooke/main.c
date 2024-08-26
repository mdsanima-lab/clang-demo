// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C demo program for the `MDSANIMA AMAROOKE` project.

#include <mdsanima.h>

int main(void)
{
    const char *message = " MDSANIMA AMAROOKE ";
    const int   fgColor = 38;  // Text color
    const int   bgColor = 26;  // Background color

    cprint(message, fgColor, bgColor);

    return 0;
}
