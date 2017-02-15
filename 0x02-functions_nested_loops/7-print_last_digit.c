#include "holberton.h"

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
