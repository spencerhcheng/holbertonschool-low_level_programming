#include <stdlib.h>
#include <stdio.h>

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
