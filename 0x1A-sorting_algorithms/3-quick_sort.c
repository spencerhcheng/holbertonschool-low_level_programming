#include "sort.h"

/**
 * quick_sort - quick sort algo
 *
 *
 *
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
	int i = (low - 1), j, retval, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot && i != j)
		{
			i++;

			printf("array j initial: %d\n", array[j]);
			printf("array i initial: %d\n", array[i]);
			temp = array[i];
			printf("temp: %d\n", temp);
			array[i] = array[j];	
			array[j] = temp;	
			printf("array j afer: %d\n", array[j]);
			printf("array i after: %d\n", array[i]);
		}
			print_array(array, size);
	}
	if (i != j)
	{
	printf("array i + 1 initial: %d\n", array[i + 1]);
	printf("array size - 1 initial: %d\n", array[size - 1]);
	temp = array[i + 1];
	printf("temp: %d\n", temp);
	array[i + 1] = array[size - 1];
	array[size - 1] = temp;

	printf("array i + 1 after: %d\n", array[i + 1]);
	printf("array size - 1 after: %d\n", array[size - 1]);
	retval = i + 1;
	printf("----------------------------------------");
	printf("retval: %d\n", retval);
	}
	return (retval);
}
