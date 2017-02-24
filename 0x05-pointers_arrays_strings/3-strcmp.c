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
	while (s1 != '\0' && s1 == s2)
		++s1;
		++s2;
	return (s1 - s2);
}
