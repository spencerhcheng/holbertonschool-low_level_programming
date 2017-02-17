#include "holberton.h"

/**
 * print_triangle -  A function that prints a triangle,
 * followed by a new line.
 * size: length of triangle
 * Return: hashtags to print out triangle
 */

void print_triangle(int size)
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
				if (j + 1 < size - i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			if (i != size)
			{
				_putchar('\n');
			}
		}
	}
}
