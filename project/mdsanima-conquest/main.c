// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C demo program for the `MDSANIMA CONQUEST` project.

#include <mdsanima.h>

int main(void)
{
    const char *message = " MDSANIMA CONQUEST ";
    const int sky       = 45;  // Text color
    const int blue      = 27;  // Background color

    cprint(message, sky, blue);

    return 0;
}
