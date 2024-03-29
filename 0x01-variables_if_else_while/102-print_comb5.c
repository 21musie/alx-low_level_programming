#include <stdio.h>

/**
 * main - This program prints the numbers from 00 to 99.
 * Numbers are separated by a comma and a space, are printed
 * in ascending order, and putchar is used to print to screen.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;
	int i, j; /* counters */

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			a = (i / 10) + '0';
			b = (i % 10) + '0';
			c = (j / 10) + '0';
			d = (j % 10) + '0';
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
