#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: pointer to a string
 * Return: string copy
 */
char *_strdup(char *str)
{
	int j;
	char *cpy;


	if (str == NULL)
	{
		return (NULL);
	}

	cpy = malloc(strlen(str) * sizeof(*str));
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
