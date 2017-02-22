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
	char *i;

	i = dest;

	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = *src;
	dest = i;

	return (dest);
}
