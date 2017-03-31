#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns value of a bit at given index
 * @n: number passed in
 * @index: index position
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;

	if (index > 63)
		return (-1);

	if (((n >> 1) << 1) == n)
		return (0);
	else
		return (1);
}
