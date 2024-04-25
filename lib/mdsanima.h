// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The header C demo project file for the `MDSANIMA` static library.

#ifndef MDSANIMA_H
#define MDSANIMA_H

/**
 * Advance color text message printing on the stdout.
 *
 * @note Wrapper for the ANSI escape sequence, where 0 is black and 255 is white.
 *
 * @param text The text message to stdout print in the color on the terminal.
 * @param foreground The foreground color of the text message.  A number from 0 to 255.
 * @param background The background color of the text message.  A number from 0 to 255.
 */
void cprint(const char *text, int foreground, int background);

#endif
