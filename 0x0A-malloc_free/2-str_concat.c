#include "holberton.h"
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
	char *combined;

	combined = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	strcat(combined, s1);
	strcat(combined, s2);

	return (combined);
}
