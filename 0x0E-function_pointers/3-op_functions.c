#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * op_add - adds two numbers
 * @a: argument a
 * @b: argument b
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds difference btwn two numbers
 * @a: argument a
 * @b: argument b
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: argument a
 * @b: argument b
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: argument a
 * @b: argument b
 * Return: result
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - a mod b
 * @a: argument a
 * @b: argument b
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
