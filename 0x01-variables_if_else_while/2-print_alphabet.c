#include <stdio.h>

/**
 * main - function prints out
 * letters from a to z using
 * putchar rather than printf
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
