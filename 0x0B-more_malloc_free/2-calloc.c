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
	char *ptr;

	i = 0;

	ptr = malloc(nmemb * sizeof(int *));

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	else if (i < size)
	{
		while (i < size)
		{
			ptr[i] = nmemb;
			i++;
		}
	}
	return (ptr);
}
