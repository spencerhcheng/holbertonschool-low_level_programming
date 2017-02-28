#include "holberton.h"

/**
 * _strcmp - Function that compares two strings,
 * s1 and s2. It returns integer displaying
 * difference in value between the two strings.
 * Compares the first n bytes of s1 and s2.
 * @s1: string one
 * @s2: string two
 * Return: integer difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
		}
		else
		{
			j = 0;
		}
	i++;
	}
	return (j);
}
