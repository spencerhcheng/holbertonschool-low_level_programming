#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers and returns
 * the product followed by a new line. If the program
 * does not receive two arguements, program should print Error
 * followed by a new line and return 1
 * @argc: arguement count
 * @argv: arguement string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int product;

	product = 0;

	if (argc == 3)
	{
		product = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
	}
		return (0);
}
