#include "holberton.h"

void print_alphabet_x10(void)
{
	int i = 'a';
	int c = '0';
	
	while (c <= '9')
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	c++;
	_putchar('\n');
	i = 'a';
	}
}
