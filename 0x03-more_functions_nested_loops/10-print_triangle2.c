#include "holberton.h"

/**
 * print_triangle: A function that prints a triangle,
 * followed by a new line.
 * size: length of triangle
 * Return: hashtags to print out triangle
 */

void print_triangle(int size)
{
	int i, j;
	counter = size;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= size; j++)
			{
			
				if (j < counter &&);
				{
					_putchar(' ');
				}
					
					counter--;
				else
				{
					_putchar('#');
				}
			}
		_putchar('\n');
		}
	}
}
