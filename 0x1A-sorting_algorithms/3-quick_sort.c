#include "sort.h"
/**
 * quick_sort - quick sort algo
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	int high = ((int)size - 1);
	int low = 0;

	super_quick_sort(array, low, high, size);
}
/**
 * super_quick_sort - calling soritng function recursively
 * @array: array to sort
 * @size: size of the array
 * @low: first index
 * @high: pivot index
 * Return: void
 */
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
/**
 * partition - sets pivot point and sort the list accordingly
 * @array: array to sort
 * @size: size of the array
 * @low: fisrt position
 * @high: pivot point
 * Return: pivot point position
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1), j, retval, temp;
	short int swap = 0;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			swap = 1;
		}
	}

	if (i + 1 != j && swap != 0)
		print_array(array, size);
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	if (i + 1  != j)
		print_array(array, size);
	retval = i + 1;
	return (retval);
}
