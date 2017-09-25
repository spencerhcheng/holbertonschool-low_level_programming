#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point for program
 * Return: 0 on success
 */
int main(void)
{
	long int n = 612852475143;
	long int factor = 0;

	factor = find_factor(n);
	printf("%lu\n", factor);
	return (0);
}

/**
 * find_factor - determines factors of number
 * @n: number to find primes of
 * Return: largest prime factor of n
 */
long int find_factor(long int n)
{
	long int i = 2;
	long int factor = 0;

	while (i < n)
	{
		if (n % i == 0)
		{
			if ((n / i) > i)
				factor = (n / i);
			else
				factor = i;

			if (isPrime(factor) == 1)
				return (factor);
		}
		i++;
	}
	return (0);
}

/**
 * isPrime - determines if number is prime or not
 * @n: number to determine prime number
 * Return: 1 if prime, 0 otherwise
 */
int isPrime(long int n)
{
	long int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
