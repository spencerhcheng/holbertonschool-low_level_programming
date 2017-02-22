#include "holberton.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: String arguement
 * Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
		return i;
}

void puts_half(char *str)
{
	int j = _strlen(str);
	int halfPt = j / 2;

	while(str[halfPt] != 0)
	{
		_putchar(str[halfPt]);
		halfPt++;
	}
		_putchar('\n');
}
