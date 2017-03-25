#include<stdio.h>

void _turtle_and_hare(void) __attribute__ ((constructor));

/**
**_turtle_and_hare - prints out to std output before main
**Return: void
**/

void _turtle_and_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
