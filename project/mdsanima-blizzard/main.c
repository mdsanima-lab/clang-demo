// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C demo program for the `MDSANIMA BLIZZARD` project.

#include <mdsanima.h>

int main(void)
{
    const char *message = " MDSANIMA BLIZZARD ";
    const int teal      = 36;  // Text color
    const int green     = 46;  // Background color

    cprint(message, teal, green);

    return 0;
}
