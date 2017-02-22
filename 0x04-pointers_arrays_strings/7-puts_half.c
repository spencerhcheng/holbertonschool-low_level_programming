#include "holberton.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: String arguement
 * Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
		return (i);
}

/**
 * puts_half - A function that returns the length of a string.
 * @str: String arguement
 * Return: nothing
 */

void puts_half(char *str)
{
	int j, k;

	j = _strlen(str);

	if (j % 2 == 0)
	{
		k = j / 2;
	}
	else if (j % 2 != 0)
	{
		k = (j - 1) / 2;
	}

	while (str[k] != 0)
	{
		_putchar(str[k]);
		k++;
	}
		_putchar('\n');
}
