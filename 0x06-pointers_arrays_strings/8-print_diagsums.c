#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum
 * of two diagonals of a square matrix of integers.
 * @a: 
 * @size: 
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;

	for (i = 0, j = size; i < size, j > 0; i++, j--)
	{
			sum += 
	}
	
	for (i = 0, j = 0; i < size, j < size; i++, j++)
	{
		if (i == j)
		{
			sum += a[i][j];
			printf("%d", sum);
	}

	 
}
