#include "holberton.h"

/**
 * *_strchr - Function that locates
 * a character in a string.
 * @s: pointer to string
 * @c: pointer to character
 * Return: pointer to the first occurence of the
 * character c in string s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]>= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
