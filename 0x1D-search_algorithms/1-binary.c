#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algo
 * @array: array to search through
 * @size: size of array
 * @value: value to locate
 * Return: index where value was found, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;


	if (array == NULL || size < 1)
		return (-1);

	if (high == 1)
		return (array[low]);

	while (high >= low)
	{
		if (low == 0 && high == 0}
			return (-1);
		print_nums(array, low, high);
		mid = ((high + low) / 2);
		if (array[mid] == value)
			return (array[mid]);

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
	while (low <= high - 1)
	{
		printf("%d, ", array[low]);
		low++;
	}
	printf("%d\n", array[high]);
}
