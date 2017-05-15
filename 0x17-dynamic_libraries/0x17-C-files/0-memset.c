#include "holberton.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: array buffer
 * @b: elements to send to buffer region
 * @n: n bytes of memory for buffer
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
