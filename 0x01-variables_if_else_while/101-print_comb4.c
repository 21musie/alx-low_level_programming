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
	
	for (a = 48; a <= 55; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
				{
				}
				else
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
