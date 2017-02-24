#include "holberton.h"

/**
 * *cap_string - A funtion that capitalizes
 * all words of a string
 * @p: pointer to string
 * Return: pointer to capitalized string
 */

char *cap_string(char *p)
{
	int j = 0;

	int  x[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (p[j] != '\0')
	{
		int i = 0;

		while (i < 13)
		{
			if (p[j] == x[i])
			{
				if (p[j + 1] >= 'a' && p[j + 1] <= 'z')
				{
					p[j + 1] = p[j + 1] - 32;
				}
			}
			else
			{
				p[j] = p[j];
			}
			i++;
		}
		j++;
	}
	return (p);
}
