#include "holberton.h"

/**
 * _strlen_recursion - determines string length
 * @s: pointer to arguement
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
}

/**
 * helper_func - return recursive
 * @i: initial point
 * @len: ending point
 * @s: pointer to string
 * Return: recursive
 */

int helper_func(int i, int len, char *s)
{
	if (i > len)
	{
		return (1);
	}
	else if (s[i] == ' ')
	{
		return (1);
	}
	else if (s[i] != s[len - 1])
	{
		return (0);
	}
	else
	{
		return (helper_func(i + 1, len - 1, s));
	}
}

/**
 * is_palindrome - function that determines
 * if a string is a palindrome or not
 * @s: pointer to a string
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (helper_func(0, len, s));
}
