#include "holberton.h"

/**
 * print_square - Function that prints our a square
 * followed by a new line.
 * @size: arguement that represents length of square
 * Return: hashtags
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
			_putchar('#');
			}
	_putchar('\n');
		}
	}
}
