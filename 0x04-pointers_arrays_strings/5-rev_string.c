#include "holberton.h"
#include <stdio.h>

/**
* _strlen - returns the length of a string.
* @s: a pointer to a char
* Return: length of a string
**/

int _strlen(char *s)
{
	int length, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
		length = i;
		return (length);
}


/**
* rev_string - Function that reverses a string
* @s:  pointer to string arguement
* Return: nothing
**/

void rev_string(char *s)
{
	char first, last;
	int i = 0;
	int length = _strlen(s) - 1;

	while (i < length)
	{
		first = s[i];
		last = s[length];
		s[i] = last;
		s[length] = first;
		i++;
		length--;
	}
}
