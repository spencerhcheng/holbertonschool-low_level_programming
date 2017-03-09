#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: min number
 * @max: max number
 * Return: integers
 */

int *array_range(int min, int max)
{
	int *ptr;
	int length = (max - min);
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((length + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
