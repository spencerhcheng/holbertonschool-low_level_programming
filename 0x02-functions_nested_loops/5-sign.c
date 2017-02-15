#include "holberton.h"

/**
 * main - Function that prints
 * the sign of a number
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0) 
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0) 
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
