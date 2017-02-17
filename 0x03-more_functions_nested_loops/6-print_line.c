#include "holberton.h"

/**
 * print_line - A function that prints a
 * straight line in the terminal
 * @n: takes in number of times the _ char should be printed
 * Return: underscore character
 */

void print_line(int n)
{
	int i;
	char s = '_';

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
		_putchar(s);
		}

	}
		_putchar('\n');
}
