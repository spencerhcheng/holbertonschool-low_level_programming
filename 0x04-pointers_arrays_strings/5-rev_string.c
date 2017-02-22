#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - A function that reverses string
 * @s: string
 * Return: nothing
 */

 void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; s[i] != '\0'; ++i)
		;
	--i;
	for (j = 0; i - j > 0; ++j, --i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
