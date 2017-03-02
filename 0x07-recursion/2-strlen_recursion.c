#include "holberton.h"

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
		i = (_strlen_recursion(++s));
		return (i + 1);
}
