#include "3-calc.h"
#include <stdlib.h>

int main(argc, *argv[])
{
	int a;

 	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = ((*get_op_func(arg[2]))(atoi(arg[1]), atoi(arg[3])));

	printf("%d\n", a);
	
	return (0);
}
