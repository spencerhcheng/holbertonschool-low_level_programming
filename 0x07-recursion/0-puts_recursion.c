#include "holberton.h"

/**
 * _puts_recursion - A function that prints a string, followed by 
 * new line.
 * @s: pointer to string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (s == 0)
	{
		return;
	}
	_putchar(*s);
	(_puts_recursion(++s));
}
