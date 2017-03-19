#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * func_char - prints char arguement
 * @separator: argument that adds comma and space
 * @args: list of args
 * Return: nothing
 */
void func_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}
/**
 * func_int - prints int arguement
 * @separator: argument that adds comma and space
 * @args: list of args
 * Return: nothing
 */
void func_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}
/**
 * func_float - prints float arguement
 * @separator: argument that adds comma and space
 * @args: list of args
 * Return: nothing
 */
void func_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}
/**
 * func_string - prints char arguement
 * @separator: argument that adds comma and space
 * @args: list of args
 * Return: nothing
 */
void func_string(char *separator, va_list args)
{
	char *f;

	f = va_arg(args, char *);

	if (f == NULL)
	{
		printf("(nil)");
	}
	printf("%s%s", separator, f);
}

/**
 * print_all - A function that prints anything
 * @format: print types
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	char *separator;

	separator = "";

	prints prints_t[] = {
	{"c", func_char},
	{"i", func_int},
	{"f", func_float},
	{"s", func_string},
	{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (prints_t[j].type != NULL)
		{
			if (prints_t[j].type[0] == format[i])
			{
				prints_t[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
