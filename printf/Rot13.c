#include "main.h"
#include <stdio.h>

/**
  * Rot13 function - encodes a string into rot13.
  * @R: string to convert
  * Return: size the output text
  */

int Rot13(va_list R)
{
    //  Declare variables
	int j, i, count_en = 0;
	char *r;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	r = va_arg(R, char *);
	if (r == NULL)
		r = "(null)";
	for (j = 0; r[j] != '\0'; j++)
	{
		for (i = 0; input[i] != '\0'; i++)
		{
			if (r[j] == input[i])
			{
				_putchar(output[i]);
				count_en++;
				break;
			}
		}
	}
	return (count_en);
}
