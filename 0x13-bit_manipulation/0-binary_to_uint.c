#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - a function that ocnverts a binary number
 * to an unisgned int.
 * @b: pointer to binary number
 * Return: converted number or 0 if there is one or more chars
 * in the string that is neither 0 nor 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int power = 1;
	int len, i, convNum;
	
	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (i = (len - 1); i >= 0; i--)
	{
		if ((b[i] != '0' && b[i] != '1'))
		{
			return (0);
		}
		convNum = atoi(b);
		sum += (convNum * power);
		power = power * 2;
	}
	return (sum);
}
