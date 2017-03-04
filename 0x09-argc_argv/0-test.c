#include "holberton.h"
#include <stdio.h>
/**
 * main - program that prints its name,
 * followed by a new line
 * @argc: arguement
 * @argv: pointer to string arguement
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int len;
	int i;	

	len = 0;
	i = 0;	

	while(*argv != '\0')
	{
		len++;
	}	
	printf("%d\n", len);

	
	for (i = 1; i < len - 1; i++)
	{
		printf("%s\n", *argv);
	}
	(void)argc;
}
