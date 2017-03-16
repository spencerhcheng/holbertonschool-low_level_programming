#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function converts string to numbers
 * and prints out result of number math operators
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = (*get_op_func(argv[2]))(num1, num2);

	printf("%d\n", op);
	return (0);
}
