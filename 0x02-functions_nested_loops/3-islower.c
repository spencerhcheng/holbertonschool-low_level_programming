#include "holberton.h"

/**
 * _islower - function that checks for
 * @c: arguement
 * lowercase character.
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
