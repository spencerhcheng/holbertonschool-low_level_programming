#include "holberton.h"

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte \0 to the buffer pointed
 * to by dest.
 * @dest: pointer to buffer
 * @src: pointer to string
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	char *val;

	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	val = dest;

	return (val);
}
