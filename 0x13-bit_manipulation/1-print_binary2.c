#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned long int n)
{
	int size = (sizeof(unsigned long int) * 8);
	unsigned long int i;
	unsigned long int iszero;
	
	iszero = -1;
	
	if (n == 0)
		_putchar('0');

	for (i = 0; i < size; i++, n >> i)
	{
		if (!(n >> i & 1) && (iszero == 1))
		{
			_putchar('0');
		}
		
		else if (n >> i & 1)
		{
			iszero = 1;
			_putchar('1');
		}
	}
}
