#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble Sort algorithm. The array will be printed each time two
 * elements are swapped.
 * @array: array of integers
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, temp;
	short int swapped = 0;

	i = 0;

	while (array && i < size - 1)
	{
		if (array[i + 1] < array[i] && swapped != 0)
		{
			swapped = 1;
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
		}
		if

	print_array(array, size);
	i++;
	}
}
