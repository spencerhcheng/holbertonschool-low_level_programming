#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

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
	int x;
	long int sum;
	char *endpt;

	sum = 0;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			(strtol(argv[x], &endpt, 10));
			if (*endpt)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += (strtol(argv[x], &endpt, 10));
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
