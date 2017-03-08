#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

		for (i = 0; i < height; i++)
		{
			ar[i] = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
