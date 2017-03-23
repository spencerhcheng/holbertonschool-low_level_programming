#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - A function that prints all the elements of a
 * list_t list
 * @h: pointer to list_t struct
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nElements;

	nElements = 0;

	while (h != NULL)
	{
		printf("%s", h->str);
		h = h->next;
		nElements++;
	}

	return (nElements);
}
