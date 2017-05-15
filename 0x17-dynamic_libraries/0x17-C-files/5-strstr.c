#include "holberton.h"

/**
 * *_strstr - Function that locates a substring.
 * @haystack: long string
 * @needle: substring
 * Return: pointer to beginning of located substring or
 * NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = i, j = 0; needle[i] != '\0'; k++, j++)
		{
			if (haystack[k] != needle[j] || haystack[k] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
