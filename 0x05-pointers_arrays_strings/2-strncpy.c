#include "holberton.h"

/**
 * *_strncpy - concatenates two strings
 * up to n bytes of src
 * @dest: string arguement
 * @src: string arguement
 * @n: integer value of bytes to pring src
 * Return: final string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
