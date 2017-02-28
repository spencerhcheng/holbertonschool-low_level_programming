#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum
 * of two diagonals of a square matrix of integers.
 * @a: pointer to array
 * @size: array length
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (j = 0; j < size * size; j += size + 1)
	{
		sum1 += a[j];
	}

	for (i = size - 1; i <= size * (size - 1); i += size - 1)
	{
		sum2 += a[i];
	}
		printf("%d, %d\n", sum1, sum2);
}
