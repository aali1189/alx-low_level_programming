#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
* Reverse function - prints astring in reverse
*@r: string to print
*Return: number of chars printed
*/

int Reverse(va_list r)
{
//  Declare variables
    
	char *st;
	int i, j = 0;

	st = va_arg(r, char *);
	if (st == NULL)
		st = ")llun(";
	for (i = 0; st[i] != '\0'; i++)
		;
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(st[i]);
		j++;
	}
	return (j);
}
