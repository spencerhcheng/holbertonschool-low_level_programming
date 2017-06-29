#include "sort.h"
/**
 * shell_sort - sorts an array
 * @array: the array to sort
 * @size: size of the array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	unsigned int gap;
	unsigned int i;
	unsigned int j;
	int temp;

	gap = size;
	while (gap != 0)
	{
		i = gap;
		while (i < size)
		{
			temp = array[i];
			j = i;
			while (j >= gap && temp < array[j - gap])
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = temp;
			i++;
		}
		print_array(array, size);
		gap /= 3 - 1;
	}
}
