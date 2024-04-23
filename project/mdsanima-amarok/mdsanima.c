// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// Simple C implementation of the MDSANIMA AMAROK project.

#include <stdio.h>

void cprint(char* text, int foreground) { printf("\e[38;5;%dm%s\e[0m", foreground, text); }
