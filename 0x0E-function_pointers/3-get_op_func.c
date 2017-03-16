#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct
 * function to perform the operation asked by the user.
 * @s: pointer to operator string passed into function
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i;

	for (i = 0; i < 5; i++)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
	}
	printf("Error\n");
	exit(99);
}
