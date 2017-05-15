#include "holberton.h"

/**
 * *_strpbrk - Function that searches a string
 * for any set of bytes
 * @s: string subset
 * @accept: string to compare to
 * Return: string that match bytes in accept or null if none found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
