#include "holberton.h"

/**
 * _memcpy - A function that copies n bytes from
 * the memory area src to the memory area dest
 * @dest: buffer 1
 * @src: buffer 2
 * @n: n bytes memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	char *temp;

	x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	temp = &dest;

	return (temp);
}
