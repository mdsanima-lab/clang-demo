// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The main C demo program for the `MDSANIMA AMAROK` project.

#include <mdsanima.h>

int main(void)
{
    const char *message = " MDSANIMA AMAROK ";
    const int orange    = 202;  // Text color
    const int red       = 196;  // Background color

    cprint(message, orange, red);

    return 0;
}
