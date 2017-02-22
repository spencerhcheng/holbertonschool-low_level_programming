#include "holberton.h"

/**
 * _strlen - A function that determines
 * the length of a string
 * @s: string taken in as arguement
 * Return: string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * print_rev - A function that prints a string,
 * in reverse, followed by a new line.
 * @s: string taken in as arguement
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
		_putchar('\n');
}
