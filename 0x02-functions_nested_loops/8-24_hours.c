#include "holberton.h"

/**
 * jack_bauer - function that prints
 * every minute of the day of Jack Bauer,
 * starting from 0:00 to 23:59
 * lowercase character.
 * Return: 1 if alpha, 0 if not.
 */

void jack_bauer(void)

{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}

}
