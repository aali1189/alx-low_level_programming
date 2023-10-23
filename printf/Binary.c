#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
* Binary function - convert to binary
* @b: number in decinal
* Return: number of chars printed
*/

int Binary(va_list b)
{
//  Declare variables
	unsigned int length, powerten, j, digit, n, num;
    
//  Binary Generator 
	int count_bin = 0;

	n = va_arg(b, unsigned int);
	if (n != 0)
	{
		num = n;
		length = 0;
		while (num != 0)
		{
			num /= 2;
			length++;
		}
		powerten = 1;
		for (j = 1; j < length; j++)
			powerten *= 2;
		for (j = 1; j <= length; j++)
		{
			digit = n / powerten;
			_putchar(digit + '0');
			count_bin +=1;
			n -= digit * powerten;
			powerten /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count_bin);
}
