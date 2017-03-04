#include <stdlib.h>
#include <stdio.h>

/**
 * A program that adds positive numbers 
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

	for (i = 1; i <= argc; i++)
	{
		if ((atoi(argv[i]) > 0 && (atoi(argv[i] <= 9))
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);	

		else
		{
		printf("error\n");	
		}
	}
	return (0);
}
			 
