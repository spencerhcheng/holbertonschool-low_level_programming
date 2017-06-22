#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the selection sort algorithm
 * @array: pointer to array to sort
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, x = 0, swap_index = 0;
	int min = array[0];

	if (!array || size < 1)
		return;
	while (array && size > 1 && x < size - 1)
	{
		i = x;
		min = array[x];
		while (i < size)
		{
			if (array[i] < min)
			{
				min = array[i];
				swap_index = i;
			}
			i++;
		}
		if (array[x] != min)
		{
			array[swap_index] = array[x];
			array[x] = min;
			print_array(array, size);
		}

		i = 0;
		x = x + 1;
	}
}
