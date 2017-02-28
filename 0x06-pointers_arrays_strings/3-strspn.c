#include "holberton.h"

/**
 * _strspn - A function that gets the length
 * of a prefix substring
 * @s: initial segment
 * @accept: prefix substring
 * Return: bytes in initial segment of s in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int counter = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
			}
		}
	}
	return (counter);
}
