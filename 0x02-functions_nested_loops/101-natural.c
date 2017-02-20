#include <stdio.h>

/**
 * main - function that prints the sum
 * of all the multiples of 3 or 5 below
 * 1024 followed by a new line.
 * Return: 0 for success
 */

int main(void)
{
	int i;
	int sum = 0;


	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0);
		sum += i;
		i++;
	}
	printf("%d", sum);
	return (0);
}
