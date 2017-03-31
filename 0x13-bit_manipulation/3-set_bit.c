#include "holberton.h"

/**
 * set_bit - a funcion that sets the value of a bit
 * to 1 at a given index
 * @n: pointer to number
 * @index: index position to set value
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int power = 1;

	if (index > (8 * sizeof(long int)))
		return (-1);

	for (index = index; index > 0; index--)
	{
		power = power * 2;
	}

	*n = *n + power;
	return (1);
}
