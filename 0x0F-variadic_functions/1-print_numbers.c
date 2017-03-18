#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed
 * by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
