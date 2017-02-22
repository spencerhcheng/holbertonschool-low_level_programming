#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: String that is input
 * Return: 0
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
