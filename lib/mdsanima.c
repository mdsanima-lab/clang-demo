// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The C demo project file for the `MDSANIMA` static library implementation.

#include <mdsanima.h>
#include <stdio.h>

void cprint(const char *text, int foreground, int background)
{
    printf("\e[38;5;%dm\e[48;5;%dm%s\e[0m\n", foreground, background, text);
}
