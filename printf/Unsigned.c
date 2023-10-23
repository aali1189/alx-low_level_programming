#include "main.h"
/**
* Unsigned function - function that prints unsigned number
* @u: unsigned number
* Descriptions: prints unsigned number with putchar
* Return: size the output
*/
int Unsigned(va_list u)
{
//  Declare variables
	unsigned int length, powerten, j, digit, n, num;
	int count_uns = 0;

	n = va_arg(u, unsigned int);
	if (n != 0)
	{
		num = n;
		length = 0;
		while (num != 0)
		{
			num /= 10;
			length++;
		}
		powerten = 1;
		for (j = 0; j < length; j++)
			powerten *= 10;
		for (j = 0; j < length; j++)
		{
			digit = n / powerten;
			_putchar(digit + '0');
			count_uns++;
			n -= digit * powerten;
			powerten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count_uns);
}
