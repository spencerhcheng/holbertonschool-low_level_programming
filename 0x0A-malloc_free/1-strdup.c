#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: pointer to a string
 * Return: string copy
 */
char *_strdup(char *str)
{
	int len, j;
	char *cpy;


	if (str == NULL)
	{
		return (NULL);
	}



	for (len = 0; str[len] != '\0'; len++)
	{
	}

	len = len + 1; /* get string length stored in i */

	cpy = malloc(len * sizeof(*str));
	if (cpy == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		cpy[j] = str[j];
	}
	return (cpy);
}
