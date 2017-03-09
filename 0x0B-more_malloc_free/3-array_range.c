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
	int length;
	int i;
	int j;

	j = 0;

	length = (max - min) + 1;

	if (min > max)
		return (NULL);

	ptr = malloc((length) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = min; i < max; i++, j++)
	{
		ptr[j] = i;
	}
	return (ptr);
}
