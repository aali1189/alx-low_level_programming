#include "main.h"

/**
* Integer function - prints an integer
* @i: integer to print
* Descriptions: prints digit with _putchar
* Return: size the output text
*/

int Integer(va_list i)
{
//  Declare variables
	int length, powerten, j, digit, n, count_int = 0, num;

	n = va_arg(i, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count_int++;
		}
		num = n;
		length = 0;
		while (num != 0)
		{
			num /= 10;
			length++;
		}
		powerten = 1;
		for (j = 1; j < length; j++)
			powerten *= 10;
		for (j = 1; j <= length; j++)
		{
			digit = n / powerten;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count_int++;
			n -= digit * powerten;
			powerten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count_int);
}
