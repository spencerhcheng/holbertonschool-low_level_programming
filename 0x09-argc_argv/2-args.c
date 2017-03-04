#include <stdio.h>

/**
 * main - program that prints
 * all arguements it receives
 * @argc: arguement
 * @argv: arguement
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
