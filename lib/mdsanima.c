// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The C demo project file for the `MDSANIMA` static library implementation.

#include <mdsanima.h>
#include <stdio.h>

void cprint(const char *text, int background, int foreground)
{
    printf("\e[48;5;%dm\e[38;5;%dm\e[1m%s\e[0m\n", background, foreground, text);
}
