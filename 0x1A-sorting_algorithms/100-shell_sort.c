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
	int flag = 0;

	gap = size / 3 + 1;
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
		if (flag != 1)
			print_array(array, size);
		gap--;
		flag = 1;
	}
	print_array(array, size);
}
