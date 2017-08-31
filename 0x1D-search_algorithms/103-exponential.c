#include "search_algos.h"

/**
 * exponential_search - conducts an exponential search
 * @array: array of numbers to search through
 * @size: size of array
 * @value: value to search for
 * Return: void
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t left = 1;
	size_t right;
	int result;

	/* start left at 1 or else stuck in infinite loop */
	if (array == NULL || size < 1)
		return (-1);

	if (size == 1)
		return (array[left]);

	while (left < size && array[left] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		left *= 2;
	}
	if (left < size)
		right = left;
	else
		right = size;
	printf("Value found between indexes [%lu] and [%lu]\n", left / 2, right);
	result = binary_search_exp(array, left / 2, right, value);
	return (result);
}

/**
 * binary_search_exp - searches for a value in a sorted
 * array of integers using the Binary search algo
 * @array: array to search through
 * @left: left bound of array
 * @right: right bound of array
 * @value: value to search for
 * Return: index where value was found, otherwise -1
 */

int binary_search_exp(int *array, size_t left, size_t right, int value)
{
	size_t low = left, mid, high = right - 1;

	while (high >= low)
	{
		if (low == 0 && high == 0)
			return (-1);
		print_nums(array, low, high);
		mid = ((high + low) / 2);
		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid;
	}
		return (-1);
}

/**
 * print_nums - prints out current array of numbers
 * @array: array of numbers to search through
 * @low: lower bound index value of array
 * @high: upper bound index value of array
 * Return: void
 */
void print_nums(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (low = low; low <= high - 1; low++)
	{
		printf("%d, ", array[low]);
	}
	printf("%d\n", array[high]);
}
