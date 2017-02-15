#include "holberton.h"

/**
 * _isalpha - function that checks for
 * alphabetic character.
 * @c: arguement
 * lowercase character.
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 44 && c <= 69) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
