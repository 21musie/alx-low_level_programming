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

	for (a = '0'; a <= '7'; a++)
	{
		for (b = '1'; b <= '8'; b++)
		{
			c = '2'
			for (; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				putchar(',');
				putchar(' ');
			}
			c++;
		}
	}

	putchar('\n');

	return (0);
}
