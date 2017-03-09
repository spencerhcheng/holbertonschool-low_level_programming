#include <stdlib.h>

/**
 * alloc_grid - allocates grid
 * @width: arguement
 * @height: arguement
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int  **ar;
	int i, j;

	ar = malloc((sizeof(int *) * height));

	if (ar == NULL)
	{
		return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc((sizeof(int) * width));

		if (ar[i] == NULL)
		{
			for (i = i; i >= 0; i--)
			{
				free(ar[i]);
			}
				free(ar);
				return (NULL);

		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
