#include "holberton.h"
#include <stdio.h>

/**
 * main - Program that prints out
 * Holberton, followed by a new line
 * only using _putchar
 * Return: always 0
 */

int main(void)

{
	char name[] = {"Holberton"};
	int s;

	for (s = 0; s <= 9; s++)
	{
	_putchar(name[s]);
	}
	_putchar('\n');
	return (0);
}
