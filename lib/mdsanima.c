// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The `MDSANIMA` demo C library for the demo `MDSANIMA AMAROK` and `MDSANIMA BLIZZARD` projects.

#include <stdio.h>

void cprint(char* text, int foreground, int background) {
    printf("\e[38;5;%dm\e[48;5;%dm%s\e[0m", foreground, background, text);
}
