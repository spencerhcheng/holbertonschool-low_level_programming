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
	size_t i;
	short int swap_flag;
	size_t min = array[0];
	size_t temp;
	while (array && size > 1 && swap_flag != 2)
	{
		i = 0;
		swap_flag = 0;
		while (i < size - 1)
		{
			temp = array[i];
			if (array[i] < min)
			{
				swap_flag = 1;

			min = array[i];
				print_array(array, size);
			}
			i++;
		}
	}
}

