#include "holberton.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer.
 * @n: number passed in
 * Return: nothing
 */

void print_number(int n)
{
	int len = 0;
	int i;
	int num_divi;

	if (n < 0)
	{
		n = n * -1;
		len = 1;
	}
		
	len = num_count(n);
	num_div = power_conv(len);	
	
	for (i = len; i > 0; i--)
	{
		 = n
		
}

int power_conv(int len)
{
	int i;
	int base;

	base = 1;

	for (i = 1; i < len; i++)
	{
		base *= 10;
	}
	return (base);
}

int num_count(int n)
{
	int len = 0;

	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
