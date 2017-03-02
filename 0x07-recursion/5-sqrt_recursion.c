#include "holberton.h"

int rec_root(int i, int n)
{
	if ((i * i == n))
	{
		return(i);
	}
	else if (i * i > n) 
	{
		return (-1);
	}
	else
		return(rec_root(i + 1, n));
}

int _sqrt_recursion(int n)
{
	int i;

	i = 0;

	n = rec_root(i, n);
	return (n);
}
