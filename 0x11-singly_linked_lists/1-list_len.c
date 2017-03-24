#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function that returns
 * the number of elements in list_t
 * @h: pointer to struct
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
return (n);
}
