#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position
 * @h: double pointer to head
 * @idx: index position of node. initialized to 0.
 * @n: value to insert into new node
 * Return: address of new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	size_t i;

	tmp = *h;

	new = malloc(sizeof(dlistint_t));

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (*h);
	}

	for (i = 0; tmp != NULL; tmp = tmp->next, i++)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
	}
		return (NULL);
}
