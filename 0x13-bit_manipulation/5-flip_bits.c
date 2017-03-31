#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * flip_bits - function that returns the number
 * of bits you would need to flip to get from one number to another
 * @n: number to check with
 * @m: number to flip to match n
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int nTimes, i;
	int size;

	nTimes = 0;

	size = ((sizeof(unsigned long int) * 8) - 1);

	for (i = size; i >= 0; i--)
	{
		if ((n >> i & 1) != (m >> i & 1))
			nTimes++;
	}
	return (nTimes);
}
