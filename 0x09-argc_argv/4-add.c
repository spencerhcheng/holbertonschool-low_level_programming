#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>

/**
 * main - A program that adds positive numbers
 * followed by a new line. If no number is passed,
 * print 0, followed by a new line. If one of the number
 * contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * @argc: arguement
 * @argv: arguement
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j;

	int sum;


	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < (strlen(argv[i]) - 1); j++)
			{
				if (*argv[i] >= '0' && *argv[i] <= '9')
				{
					sum += atoi(argv[i]);
				}
				else
				{
				printf("Error\n");
				return (1);
				}

			}
		}
			printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
		return (0);
}
