#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
<<<<<<< HEAD
int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};	
=======
   int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7}; 
>>>>>>> 448f9728a2d6a9eb253590eacb219353448fb019
	size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
