#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - A function that prints anything
 * @format: print types
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char type;
	char *strTest;

	i = 0;

	va_start(args, format);

	while (format != NULL && type != '\0')
	{
	type = format[i];
		if (type == 'c')
			printf("%c", va_arg(args, int));

		else if (type == 'i')
			printf("%d", va_arg(args, int));

		else if (type == 'f')
			printf("%f", va_arg(args, double));

		else if (type == 's')
		{
				printf("%s", strTest);
		}

		if ((type == 's' || type == 'c' || type == 'f'
		|| type == 'i') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
