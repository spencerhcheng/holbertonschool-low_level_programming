#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of a and b
 * @a: integer a
 * @b: integer b
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between a and b
 * @a: integer a
 * @b: integer b
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: integer a
 * @b: integer b
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: integer a
 * @b: integer b
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
 * op_mod - returns the mod of a by b
 * @a: integer a
 * @b: integer b
 * Return: sum
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
