#include "sort.h"

/**
 * quick_sort - quick sort algo
 * array: pointer to array of integers
 * size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int high = ((int)size - 1);
	int low = 0;
	super_quick_sort(array, low, high, size);
}

void super_quick_sort(int *array, int low, int high, size_t size)
{
	int partition_index;
	
	if (low < high)
	{
		partition_index = partition(array, low, high, size);
		super_quick_sort(array, low, partition_index - 1, size);
		super_quick_sort(array, partition_index + 1, high, size);
	}

}

int partition (int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1), j = low, temp = 0;

	while (j <= high - 1)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
			j++;
	}
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	return (i + 1);
}
