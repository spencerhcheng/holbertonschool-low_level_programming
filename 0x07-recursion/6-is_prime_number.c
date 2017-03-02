#include "holberton.h"

int my_prime(int i, int n)
{
	if (10 % i == 0)
	{
		return (0);
	}
	else if ((i * i) > n)
	{
		return (1);
	}
	else
		return (myprime(i + 1, n));
}

int is_prime_number(int n)
{
	int i = 2;
	
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	else
		return (my_prime(i, n));
}
