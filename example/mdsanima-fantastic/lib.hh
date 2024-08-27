// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The header C++ example demo project file for the `MDSANIMA FANTASTIC` shared library.

#pragma once

#define ESC_RESET      "\e[0m"
#define ESC_TEXT_BOLD  "\e[1m"
#define ESC_BACKGROUND "\e[48;5;"
#define ESC_FOREGROUND "\e[38;5;"

/**
 * Basic text message printing on the stdout.
 *
 * @warning Reference implementation for the `MDSANIMA FANTASTIC` example demo project.
 *
 * @param text The text message to stdout print on the terminal.
 */
void mprint(const char *text);

/**
 * Simple color text message printing on the stdout.
 *
 * @note Wrapper for the ANSI escape sequence, where 0 is black and 255 is white.
 *
 * @warning Reference implementation for the `MDSANIMA FANTASTIC` example demo project.
 *
 * @param text The bold text message to stdout print in the color on the terminal.
 * @param color The color of the text message.  A number from 0 to 255.
 */
void mprint(const char *text, int color);

/**
 * Advance color text message printing on the stdout.
 *
 * @note Wrapper for the ANSI escape sequence, where 0 is black and 255 is white.
 *
 * @warning Reference implementation for the `MDSANIMA FANTASTIC` example demo project.
 *
 * @param text The bold text message to stdout print in the color on the terminal.
 * @param background The background color of the text message.  A number from 0 to 255.
 * @param foreground The foreground color of the text message.  A number from 0 to 255.
 */
void mprint(const char *text, int background, int foreground);
