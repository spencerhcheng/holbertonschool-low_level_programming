#include "holberton.h"

/**
 * pring_rev - A function that prints a string, in reverse, followed by a new line.
 * @s: string taken in as arguement
 * Return: nothing
 */
int _strlen(char *s)
{
	int length = 0;
	
	while(s[length] != '\0')
	{
		length++;
	}
	return length;
}		


void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	while(i >=0)
	{
		_putchar(s[i]);
		i--;
	}
		_putchar('\n');
}
