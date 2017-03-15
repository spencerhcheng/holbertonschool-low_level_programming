#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: arguement name
 * @f: function name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
