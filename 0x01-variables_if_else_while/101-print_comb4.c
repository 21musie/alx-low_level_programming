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
		{
			if (a == '0') 
			b = '1';
		if (a == '1')
			b = '2';
		if (a == '2')
			b = '3';
		if (a == '3')
			b = '4';
		if (a == '4')
			b = '5';
		if (a == '5')
			b = '6';
		if (a == '6')
			b = '7';
		if (a == '7')
			b = '8';
		}
		for (; b <= '8'; b++)
		{
			if (b == '1')  
				c = '2';
			if (b == '2')
				c = '3';
			if (b == '3')
				c = '4';
			if (b == '4')
				c = '5';
			if (b == '5')
				c = '6';
			if (b == '6')
				c = '7';
			if (b == '7')
				c = '8';
			if (b == '8')
				c = '9';			
			for (; c <= '9'; c++)
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
