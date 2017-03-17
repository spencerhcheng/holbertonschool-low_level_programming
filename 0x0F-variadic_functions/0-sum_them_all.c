#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: integer arguements taken in
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list nums;

	if (n == 0)
	{
		return (0);
	}

	va_start(nums, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(nums, int);
	}
	return (sum);
}
