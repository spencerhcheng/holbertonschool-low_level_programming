#include "holberton.h"

/**
 * rev_string - A function that reverses a string
 * @s: string taken in as arguement
 * Return: nothing
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



void rev_string(char *s)
{

	int x = 0;

	while (s[x] != '\0')
	{
		_putchar(s[x]);
		x++;
	}
		_putchar('\n');
}
	
	int j = _strlen(s);

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
		_putchar('\n');
}
