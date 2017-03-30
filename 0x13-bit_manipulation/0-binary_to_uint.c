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
	unsigned int len, i, dec;

	dec = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	
	for (i = (len - 1); i <= 0; i--)
	{
		dec = dec << 1;
		if (b[i] == '1')
			dec += 1;
	}
	return (dec);
}
