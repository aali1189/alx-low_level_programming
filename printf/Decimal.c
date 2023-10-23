#include "main.h"
/**
* Decimal function - print an decimal
* @d: integer to print
* Descriptions: prints digit with _putchar
* Return: size the output text
*/
int Decimal(va_list d)
{
//  Declare variables
    
	int length, powerten, j, digit, n, count_dec = 0, num;

	n = va_arg(d, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count_dec++;
		}
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
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count_dec++;
			n -= digit * powerten;
			powerten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count_dec);
}
