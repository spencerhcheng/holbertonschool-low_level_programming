#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
	int x, y;
	int op;

 	if (argc != 4)
	{
		printf("Error\n");
		exit (98);	
	}
		
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	op = (*get_op_func(argv[2]))(x, y);
	
	printf("%d\n", op);	
	return (0);
}
