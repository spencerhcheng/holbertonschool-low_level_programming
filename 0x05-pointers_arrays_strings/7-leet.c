#include "holberton.h"

/**
 * *leet - encodes a string into l337 talk
 * @p: pointer to string
 * Return: l337 string
 */

char *leet(char *p)
{

	char low[] = {'a', 'e', 'o', 't', 'l'};
	char high[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	int x = 0;

	while (p[x] != '\0')
	{
		int i = 0;

		while (i < 5)
		{
			if (p[x] == low[i] || p[x] == high[i])
			{
				p[x] = num[i];
			}
			i++;
		}
		x++;
	}
	return (p);
}
