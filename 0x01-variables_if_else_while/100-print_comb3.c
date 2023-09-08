/*
 * File: 100-print_comb3.c
 * Auth: Amro Madani
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{

	int num = 0;
	int tens;
	int ones;

	while (num <= 99)
	{
		tens = num % 10;
		ones = num / 10;

		if (ones < tens)
		{
			putchar(ones + '0');
			putchar(tens + '0');
			if (num < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');

	return (0);
}
