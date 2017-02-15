#include "holberton.h"

/**
 * print_last_digit - function that
 * prints the last digit of a number.
 * @x: arguement
 * Return: value of last digit
 */

int print_last_digit(int x)
{
	int rem  = (x % 10);

	if (rem < 0)
	{
		rem  = (rem  * -1);
		_putchar(rem + '0');
	}
	else
	{
		_putchar(rem + '0');
	}
	return (rem);
}
