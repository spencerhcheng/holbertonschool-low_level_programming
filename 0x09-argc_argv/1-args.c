#include "holberton.h"
#include <stdio.h>

/**
 * main - Program that prints the number 
 * of arguements passed into it
 * @argc: arguement counter
 * @argc: arguement pointer to string
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
