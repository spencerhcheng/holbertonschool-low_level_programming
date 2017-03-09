#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array
 * using malloc
 * @nmemb: arguement
 * @size: arguement
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	i = 0;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i <= nmemb)
	{
		ptr[i] = 0;
		i++;
	}
		return (ptr);
}
