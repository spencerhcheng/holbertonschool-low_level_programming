#include "holberton.h"

/**
 * print_most_numbers - function prints the numbers
 * from 0 to 9 while omitting 2 and 4, followed by a new line using
 * _putchar only twice.
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
		_putchar('\n');
}
