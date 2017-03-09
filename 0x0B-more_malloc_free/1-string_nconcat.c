#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function concats two strings
 * s1 and s2 up to n bytes
 * @s1: pointer to string1
 * @s2: pointer to string2
 * @n: number of n bytes
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combo;
	unsigned int i, j;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	;

	for (len2 = 0; s2[len2] != '\0'; len2++)
	;

	if (len2 >  n)
		len2 = n;

	combo = malloc((len1 + len2) * sizeof(char));

	if (combo == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		combo[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		combo[i] = s2[j];

	combo[i] = '\0';
	return (combo);
}
