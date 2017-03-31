#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * clear_bit - function that sets value
 * of a bit to 0 at a given index
 * @n: pointer to num
 * @index: index to clear
 * Return: 1 on usccess, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int x = 1 << index;	

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~x;
	return (1);
}
