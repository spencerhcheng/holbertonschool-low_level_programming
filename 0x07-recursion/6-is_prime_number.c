#include "holberton.h"

/**
 * my_prime - returns natural square root of number.
 * @i: arguement
 * @n: arguement
 * Return: prime
 */
int my_prime(int i, int n)
{
	if (n  % i == 0)
	{
		return (0);
	}
	else if ((i * i) > n)
	{
		return (1);
	}
	else
		return (my_prime(i + 1, n));
}

/**
 * is_prime_number - determines prime
 * @n: arguement
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
		return (my_prime(i, n));
}
