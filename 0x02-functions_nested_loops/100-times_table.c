#include "holberton.h"

/**
 * times_table - prints the n times table
 * beginning with 0. If n is greater than 15
 * or less than 0, the function should not print anything.
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j;
	int x; 

	for (i = 0; i <= n; i++) 
	{
		if (n > 15 || n < 0)
		{
			break;
		}
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (x <= 9 ) 
			{
				_putchar(x % 10 + '0');
				if (j == n)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (x > 9 && x <= 99)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				if (j == n)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else 
			{
				_putchar(x / 100 + '0');
				_putchar(x / 10 % 10  + '0');
				_putchar(x % 10 + '0');
				if (j == n)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
