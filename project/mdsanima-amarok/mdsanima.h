// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The demo MDSANIMA C library on the demo MDSANIMA AMAROK project.

#ifndef MDSANIMA_H
#define MDSANIMA_H

/**
 * This is a simple color printing implementation. You can change the foreground and the background
 * color of the text that will be printed in the terminal. This function is a wrapper for the ANSI
 * escape sequence from the terminal.
 *
 * @param text The text to print in the terminal with the color.
 * @param foreground The foreground color is a number from 0 to 255.
 * @param background The background color is a number from 0 to 255.
 */
void cprint(char* text, int foreground, int background);

#endif
