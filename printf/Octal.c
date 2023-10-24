#include "main.h"
/**
* Octal function - unsigned int argument is converted to unsigned octal
* @o: unsigned to be converted
* Descriptions: prints unsigned octal
* Return: size the output
*/
int Octal(va_list o)
{
    //  Declare variables
	unsigned int length, powerten, j, digit, n, num;
	int count_oct = 0;

	n = va_arg(o, unsigned int);
	if (n != 0)
	{
		num = n;
		length = 0;
		while (num != 0)
		{
			num /= 8;
			length++;
		}
		powerten = 1;
		for (j = 0; j < length; j++)
			powerten *= 8;
		for (j = 0; j <length; j++)
		{
			digit = n / powerten;
			_putchar(digit + '0');
			count_oct++;
			n -= digit * powerten;
			powerten /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count_oct);
}
