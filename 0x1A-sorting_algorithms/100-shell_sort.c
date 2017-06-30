#include "sort.h"
/**
 * shell_sort - sorts an array
 * @array: the array to sort
 * @size: size of the array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	unsigned int gaps[2];
	unsigned int gap;
	unsigned int i;
	unsigned int j;
	int temp;
	int s = 1;

	gaps[0] = 1;
	gaps[1] = 4;
	gap = gaps[s];

	while (s >= 0)
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
		s--;
		gap = gaps[s];
		print_array(array, size);
	}
}
