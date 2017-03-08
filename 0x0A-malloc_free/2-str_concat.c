#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *combo;
	int i;
	int j;
	
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	combo = malloc((strlen(s1) + strlen(s2)) * sizeof(char));

	if (combo == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; s1[i] != '\0'; i++)
	{	
		combo[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; i++, j++)
	{
		combo[i] = s2[j];
	}
	combo[i] = '\0';
	return (combo);
}
