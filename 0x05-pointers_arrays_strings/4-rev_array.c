#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an
 * array of integers
 * @a: array
 * @n: number of elements in array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int first, last;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		first = a[i];
		last = a[j];
		a[i] = last;
		a[j] = first;
		i++;
		j--;
	}
}
