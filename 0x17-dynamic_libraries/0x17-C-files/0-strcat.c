#include "holberton.h"

/**
 * *_strcat - concatenates src to dest
 * @dest: pointer to string
 * @src: pointer to string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
