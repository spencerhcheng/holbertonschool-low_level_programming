#include "holberton.h"

/**
 * *string_toupper - A funtion that changes
 * all lowercase letters of a string to uppercase
 * @p: lowercase letters taken in
 * Return: uppercase letters
 */

char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] <= 'z' && p[i] >= 'a')
		{
			p[i] = (p[i] - 32);
		}
		else
		{
			p[i] = p[i];
		}
		i++;
	}
	return (p);
}
