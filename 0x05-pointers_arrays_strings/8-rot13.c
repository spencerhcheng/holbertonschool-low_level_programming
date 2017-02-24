#include "holberton.h"
#include <stdio.h>

/**
 * *leet - encodes a string into l337 talk
 * @p: pointer to string
 * Return: l337 string
 */

char *rot13(char *p)
{
	char *first = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *second = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int x;
	int i;

	x = 0;

	while (p[x] != '\0')
	{

	i = 0;
		while (first[i] != '\0')
		{
			if (p[x] == first[i])
			{
				p[x] = second[i];
				break;
			}
			i++;
		}
		x++;
	}
	return (p);
}
