/*
 * File: 102-print_comb5.c
 * Auth:Amro Madani
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int i;
	int h;

	for (h = 0 ; h != 8 ; h++)
	{
		for (n = h + 1 ; n != 9 ; n++)
		{
			i = n + 1;
			do {
				putchar('0' + h);
				putchar('0' + n);
				putchar('0' + i);
				if (h != 7)
				{
					putchar(',');
					putchar(32);
				}
				i++;
			} while (i != 10);
		}
	}
	putchar('\n');
	return (0);
}

