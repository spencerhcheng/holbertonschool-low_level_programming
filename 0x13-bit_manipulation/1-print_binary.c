#include "holberton.h"

/**
 * print_binary - function that prints
 * the binary representation of a number
 * @n: number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int y;
	unsigned int i;
	char zero = 1;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		y = (n << 1);
		y = (y >> 1);

		if (n != y) /* left most 1 */
		{
			zero = 0;
			_putchar('1');
		}
		else if ((zero != 1))
		{
			_putchar('0');
		}
			n = n << 1;
	}
	if (zero == 1)
		_putchar('0');
}