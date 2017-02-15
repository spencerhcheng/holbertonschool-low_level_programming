#include "holberton.h"

void print_alphabet(void)
{
	int i = 'a';
	int j = 'z';

	while (i <= j) 
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}	
