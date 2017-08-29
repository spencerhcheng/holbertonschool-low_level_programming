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
	size_t low = 0, mid, high = size;
	short int flag_first_call = 0, flag_left = 0, flag_is_zero = 0;

	if (array == NULL)
		return (-1);

	if (high == 1)
		return (array[low]);

	high = size - 1;
	while (high >= low)
	{
		if (flag_first_call == 0)
			print_nums(array, low, high - 1);
		else
		{
			if (low == 0)
			{
				flag_is_zero = 1;	
				low++;
			}
			if (flag_left == 1)
				print_nums(array, low - 1, high);
			if (flag_left != 1)
			{
				print_nums(array, low - 1, high - 1);
				flag_left = 0;
			}
			if (flag_is_zero == 1)
			{
				flag_is_zero = 0;
				low--;
			}
		}
		flag_first_call = 1;
		mid = ((high + low) / 2);
		if (array[mid] == value)
		{
			return (array[mid]);
		}

		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
		{
			flag_left = 1;
			high = mid - 1;
		}
	}
		return (-1);
}

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
