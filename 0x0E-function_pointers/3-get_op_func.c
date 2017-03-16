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
<<<<<<< HEAD
		if (strcmp(ops[i].op, s) == 0)
=======
		if (ops[i].op[0] == s[0])
>>>>>>> 71bd3e1b7be9b94e25f7f7d2c71a5405d75e4b50
		{
			return (ops[i].f);
		}
	}
	printf("Error\n");
	exit(99);
}
