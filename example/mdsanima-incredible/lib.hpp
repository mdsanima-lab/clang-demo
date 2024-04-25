// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The header C++ example demo project file for the `MDSANIMA INCREDIBLE` shared library.

#pragma once

/**
 * Basic text message printing on the stdout.
 *
 * @warning Reference implementation for the `MDSANIMA INCREDIBLE` example demo project.
 *
 * @param text The text message to stdout print on the terminal.
 */
void mprint(const char *text);

/**
 * Simple color text message printing on the stdout.
 *
 * @note Wrapper for the ANSI escape sequence, where 0 is black and 255 is white.
 *
 * @warning Reference implementation for the `MDSANIMA INCREDIBLE` example demo project.
 *
 * @param text The text message to stdout print in the color on the terminal.
 * @param color The color of the text message.  A number from 0 to 255.
 */
void mprint(const char *text, int color);

/**
 * Advance color text message printing on the stdout.
 *
 * @note Wrapper for the ANSI escape sequence, where 0 is black and 255 is white.
 *
 * @warning Reference implementation for the `MDSANIMA INCREDIBLE` example demo project.
 *
 * @param text The text message to stdout print in the color on the terminal.
 * @param foreground The foreground color of the text message.  A number from 0 to 255.
 * @param background The background color of the text message.  A number from 0 to 255.
 */
void mprint(const char *text, int foreground, int background);
