#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted
 * array of integers using the interpolation search algo
 * @array: array to search through
 * @size: size of array
 * @value: value to locate
 * Return: index where value was found, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, pos = -1, high = size - 1;

	if (array == NULL || size < 1)
		return (-1);

	if (size == 1)
		return (array[low]);

	while (value != array[pos])
	{
		if (low == high || array[low] == array[high])
			return (-1);

		pos = low + (((double)(high - low) / (array[high] -
			array[low])) * (value - array[low]));

		print_val(pos, value, size);
		if (pos > size)
			return (-1);
		if (array[pos] == value)
			return (pos);

		else if (array[pos] < value)
			low = (pos + 1);

		else
			high = (pos - 1);
	}
	return (-1);
}

/**
 * print_val - prints position and value when
 * comparison made
 * @pos: probe position
 * @value: value to search
 * @size: size of array
 * Return: void
 */

void print_val(size_t pos, int value, size_t size)
{
	if (pos > size)
		printf("Value checked array[%lu] is out of range\n", pos);
	else
		printf("Value checked array[%lu] = [%d]\n", pos, value);
}
