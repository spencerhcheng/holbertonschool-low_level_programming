#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates
 * memory using malloc
 * @b: memory allocation size
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
