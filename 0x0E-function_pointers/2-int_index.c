#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - function that searches for an index
 * @array: pointer to array
 * @size: pointer to array size
 * @cmp: pointer to function used to compare values
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		result = (cmp)(array[i]);

		if (result != 0)
		{
			return (i);	
		}
		if (result != 0 && result != -1)
		{
			break;
		}
	}
	return (-1);
}
