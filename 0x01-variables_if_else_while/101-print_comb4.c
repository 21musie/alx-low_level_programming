#include <stdio.h>

/**
 * main - This program prints the numbers from 00 to 99.
 * Numbers are separated by a comma and a space, are printed
 * in ascending order, and putchar is used to print to screen.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;
	c = '2';
	for (a = '0'; a <= '7'; a++)
	{
		for (b = '1'; b <= '8'; b++)
		{
			for (; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < 7 && b < 8 && c < 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
			c = '3';
		}
	}

	putchar('\n');

	return (0);
}
