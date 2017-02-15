#include "holberton.h"

/**
 * print_alphabet - function that prints the
 * alphabet, in lowercase, followed by a new line.
 * Return: 0
 */

void print_alphabet(void)
{
	int i = 'a';
	int j = 'z';

	while (i <= j)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
