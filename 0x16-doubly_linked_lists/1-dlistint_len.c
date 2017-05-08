#include "lists.h"

/**
 * dlistint_len - function that returns
 * the number of lements in a linked list
 * @h: pointer to struct node
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count;

	count = 0;
	tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
