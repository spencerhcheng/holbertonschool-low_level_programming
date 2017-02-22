#include "holberton.h"

/** 
 * _puts - A function that prints a string, followed by a new line to standard out
 * @str: string as arguement
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}	
