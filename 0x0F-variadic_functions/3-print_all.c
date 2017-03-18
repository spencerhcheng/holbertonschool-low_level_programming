#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - A function that prints anything
 * 
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == 's')
		{
			printf("%s", va_arg(args, char *));
		}
//		else if (*format == 'c')
//		{
//			printf("%c", va_arg(args, char));
		else if (*format == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (*format == 'i')
		{
			printf("%i", va_arg(args, int));
		}
		*format++;
	}
	printf("\n");
	va_end(args);
}
