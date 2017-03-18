#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *p;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(strings, char *);

		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
