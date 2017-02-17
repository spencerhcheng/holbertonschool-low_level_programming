#include "holberton.h"

/**
 * _isupper- function that returns 1
 * if input character is an uppercase
 * and 0 otherwise
 * @c: input arguement integer
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
