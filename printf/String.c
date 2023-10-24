#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * String function - writes the character c to stdout
 * @s: The string to print
 *
 * Return: 1.
 */

int String(va_list s)
{
// Declare variables
	char *strs;
	int  i = 0;

	strs = va_arg(s, char *);
	if (strs == NULL)
		strs = "(null)";
	while (strs[i])
	{
		_putchar(strs[i]);
		i++;
	}
	return (i);
}
