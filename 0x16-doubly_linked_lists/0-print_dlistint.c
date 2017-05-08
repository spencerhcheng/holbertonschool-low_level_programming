#include "lists.h"

/**
 * print_dlistint - function that prints
 * all the elements of a list
 * @h: pointer to node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count;

	count = 0;
	tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
