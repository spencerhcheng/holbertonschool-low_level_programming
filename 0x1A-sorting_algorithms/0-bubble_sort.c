#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble Sort algorithm.
 * The array will be printed each time two elements are swapped.
 * @array: array of integers
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, tmp;
	short int swap_flag = 0;

	while (swap_flag != 2)
	{
		i = 0;
		swap_flag = 0;
		while (array && i < size - 1)
		{
			if (array[i + 1] < array[i])
			{
				swap_flag = 1;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
			i++;
			if (swap_flag != 1)
				swap_flag = 2;
		}
	}
}
