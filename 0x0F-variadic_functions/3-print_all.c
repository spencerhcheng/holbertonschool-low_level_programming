#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_char - prints char arguement
 * 
 * Return: nothing
 */
void print_char(args)
{
	printf("%c", va_arg(args, int));
}

void print_int(args)
{
	printf("%d", va_args(args, int));
}

void print_float(args)
{
	printf("%f", va_args(args, double));
}
void print_string(args)
{
	printf("%s", va_arg(args, char *));
}


/**
 * print_all - A function that prints anything
 * @format: print types
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *strTest;

	i = 0;

	va_start(args, format);

	argType[] = {
	{'c', print_char}
	{'i', print_int}
	{'f', print_float}
	{'s', print_string}
	};

	while (format != NULL && type != '\0')
	{
		if (format[i] == argType.variad)
		{
			return(argType.f);
		}
	}
	printf("\n");
	va_end(args);
}
