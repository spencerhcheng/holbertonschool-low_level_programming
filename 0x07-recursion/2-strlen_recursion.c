#include "holberton.h"

/**
 *_strlen_recursion - Function that
 * returns the length fo a string
 * @s: pointer to a string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
		i = (_strlen_recursion(++s));
		return (i + 1);
}
