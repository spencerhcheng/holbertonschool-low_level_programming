#include <stdio.h>

/**
 * main - Program that prints out the numbers from
 * 1 to 100, followed by a new line. For multiples of three
 * print Fizz instead of the number and for multiples of five
 * print out Buzz. Numbers which are multiples of three and five
 * print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int i;
	int n = 100;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
