#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints out list
 * @h: pointer to head node
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *temp;

	temp = h;
	count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		printf("%d\n", temp->n);
		h = h->next;
		count++;
	}
	return (count);
}
