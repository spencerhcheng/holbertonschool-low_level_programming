#include "holberton.h"

/**
 * print_numbers: function prints the numbers
 * from 0 to 9, followed by a new line using
 * _putchar only twice.
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
		_putchar('\n');
}
