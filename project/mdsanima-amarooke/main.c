// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C demo program for the `MDSANIMA AMAROOKE` project.

#include <mdsanima.h>

int main(void)
{
    const char *message = " MDSANIMA AMAROOKE ";
    const int   bgColor = 26;  // Background color
    const int   fgColor = 38;  // Text color

    cprint(message, bgColor, fgColor);

    return 0;
}
