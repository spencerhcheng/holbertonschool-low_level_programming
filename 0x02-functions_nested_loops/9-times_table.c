include "holberton.h"

/**
 * times_table - prints 9 times table
 *
 * Return: nothing
 */

void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x <= 9 && j > 0)
			{
				_putchar(' ');
				_putchar(x % 10 + '0');
				if (j == 9)
				{
				break;
				}
				_putchar(',');
				_putchar(' ');
			}
			else if (x > 9)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				if (j == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(x % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
