#include "search_algos.h"
#include <math.h>

/**
 * jump_search - conducts a search for value using the jump search algo
 * @array: array of numbers to search through
 * @size: size of array
 * @value: value to search for
 * Return: void
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right = left, safe_guard;
	int jump = sqrt(size), result = 0;

	if (array == NULL || size < 1 || array[left] > value)
		return (-1);

	if (size == 1)
		return (array[left]);

	while (1)
	{
		if (array[right] >= value)
		{
			printf("Value found between indexes ");
			printf("[%lu] and [%lu]\n", right - jump, right);
			result = lin_search(array, right - jump, right, value, size);
			return (result);
		}
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		safe_guard = right;
		right += jump;
		if (right > size)
		{
			printf("Value found between indexes ");
			printf("[%lu] and [%lu]\n", right - jump, right);
			result = lin_search(array, safe_guard, size, value, size);
			return (result);
		}
	}
	return (-1);
}

/**
 * lin_search - conducts linear search
 * @array: array of numbers
 * @left: index to begin with
 * @right: index to run up to
 * @value: value to search for
 * @size: size of array
 * Return:  index position of element match with value, otherwise -1
 */
int lin_search(int *array, size_t left, size_t right, int value, size_t size)
{
	while (left <= right)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		if (left == size - 1)
			return (-1);
		left++;
	}
	return (-1);
}
