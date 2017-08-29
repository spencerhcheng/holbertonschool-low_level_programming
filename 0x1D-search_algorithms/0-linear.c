#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the linear search algorithm
 * @array: pointer to array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index where value is located, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	short int flag = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			flag = 1;
			return (i);
		}
		i++;
	}
	if (flag != 1)
		return (-1);
	else
		return (i);
}
