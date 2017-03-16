#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * 3-calc - 
 * @s: pointer to string
 * 
 * Return: 
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
    	};
	
	i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i]->op, s) == 0)
		{
			return (ops[i]->f);
		}
		i++;
	}

	printf("Error\n");
	exit(99);
}
