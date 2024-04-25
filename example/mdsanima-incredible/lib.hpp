// Copyright (c) 2024 MDSANIMA LAB. All rights reserved.
// Licensed under the MIT license.

// The header C++ example demo project file for `MDSANIMA INCREDIBLE` shared library.

#pragma once

/**
 * Simple text message printing implementation on the terminal stdout.
 *
 * @warning This is a reference implementation for the demo purposes only, and is used in the main
 * example demo program for `MDSANIMA INCREDIBLE` project.
 *
 * @param text The text message to print on the terminal stdout.
 */
void mprint(const char* text);

/**
 * Simple color text message printing implementation on the terminal stdout.
 *
 * @note You can change the color of the text message that will be printed on the terminal stdout.
 * This function is a wrapper for the ANSI escape sequence.
 *
 * @warning This is a reference implementation for the demo purposes only, and is used in the main
 * example demo program for `MDSANIMA INCREDIBLE` project.
 *
 * @param text The text message to print in the color on the terminal stdout.
 * @param color The foreground text message color is a number from 0 to 255.
 */
void mprint(const char* text, int color);
