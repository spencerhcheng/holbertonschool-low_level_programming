#include "sort.h"

/**
 * quick_sort - quick sort algorithm using Hoare's implementation
 * @array: array of integers to sort
 * @size: size of array
 * Return: void
 */

void quick_sort_hoare(int *array, size_t size)
{
	int high = (int)size - 1;
	int low = 0;

	hoare_super_quick_sort(array, low, high, size);
}

void hoare_super_quick_sort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int partition_index = hoare_partition(array, low, high, size);

		hoare_super_quick_sort(array, low, partition_index, size);
		hoare_super_quick_sort(array, partition_index + 1, high, size);
	}
}

/**
 * partition - sets pivot point and swaps values
 * @array: array of integers
 * @size: size of array
 * @low: first position
 * @high: pivot point
 * Return: pivot index + 1
 */

int hoare_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[low];
	int i = low - 1, j = high + 1, retval, temp;

	while (42)
	{
		do
		{
			i++;
		} while (array[i] < pivot);
		do
		{
			j--;
		} while (array[j] > pivot);
		if (i >= j)
			return j;

		temp = array[j];
		array[i] = array[j];
		array[j] = temp;
	}
	print_array(array, size);
}
