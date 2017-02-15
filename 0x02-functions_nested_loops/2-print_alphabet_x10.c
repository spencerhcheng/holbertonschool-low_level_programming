#include "holberton.h"

/**
 * print_alphabet_x10 - function that prints
 * the alphabet, in lowercase, 10 times, followed
 * by a new line.
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 'a';
	int c = '0';

	while (c <= '9')
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	c++;
	_putchar('\n');
	i = 'a';
	}
}
