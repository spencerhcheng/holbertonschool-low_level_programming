#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer a
 * @b: integer b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swapVar;

	swapVar = *b;
	*b = *a;
	*a = swapVar;
}
