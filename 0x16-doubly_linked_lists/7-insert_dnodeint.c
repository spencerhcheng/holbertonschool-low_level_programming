#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that
 * inserts a new node at a given position in
 * a linked list
 * @h: pointer to struct node
 * @idx: index to insert node
 * @n: value to store in node
 * Return: address of new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	size_t i, j;

	i = 0;
	j = 0;
	tmp = *h;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (idx > i)
		return (NULL);

	else if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return(*h);
	}

	
	while (j == idx - 1)
	{
		new->next = tmp->next;
		new->n = n;
		tmp->next = new;
	}
		return (new);
}
