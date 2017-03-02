#include "holberton.h"

/**
 * _pow_recursion - Function that returns
 * the favlue of x raised to the power of y
 * @x: number arguement
 * @y: power arguement
 * Return: value of x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}
