#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;	

	ar = malloc(size * sizeof(char));
	
	i = 0;
	
	if (size == 0)
	{
		return (NULL);
	}

	else if (i < size)
	{
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
			ar[i] = '\0';
	return (ar);
	}
	else
	{
		return (NULL);
	}
}
