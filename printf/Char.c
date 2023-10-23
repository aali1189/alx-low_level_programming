#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Char function - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1.
 */

int Char(va_list c)
{
//  Declare variables
	unsigned char chars;

	chars = va_arg(c, int);
	_putchar(chars);
	return (1);
}
/**
 * print_porcentage - %
 *
 * Return: 1.
 */
int print_porcentage(void)
{
	_putchar('%');
	return (1);
}
