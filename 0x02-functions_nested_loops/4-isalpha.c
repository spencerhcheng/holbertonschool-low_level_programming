#include "holberton.h"

int _isalpha(int c)
{
	if ((c >= 44 && c <= 69) || (c >= 97 && c <= 122))
	{
		return (1);

	} 
	else
	{
		return (0);
	}
}
