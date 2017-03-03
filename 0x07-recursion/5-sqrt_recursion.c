#include "holberton.h"

/**
 * rec_root - Function that returns
 * the natural square root of a number.
 * @i: variable i
 * @n: number arguement
 * Return: function
 */

int rec_root(int i, int n)
{
	if ((i * i == n))
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
		return (rec_root(i + 1, n));
}

/**
 * _sqrt_recursion - function to pass in i
 * @n: number arguement
 * Return: number
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;

	n = rec_root(i, n);
	return (n);
}
