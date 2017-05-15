#include <stdio.h>
#include "holberton.h"

/**
 * _abs - function that computes
 * the absolute value of an integer.
 * @r: arguement
 * Return: absolute value
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r);
	}
}
