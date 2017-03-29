#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position
 * @head: double pointer to head
 * @idx: index position of node. initialized to 0.
 * @n: value to insert into new node
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	size_t i;

	tmp = *head;

	for (i = 0; tmp != NULL; tmp = tmp->next, i++)
		;

	if (idx > i)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; tmp = tmp->next, i++)
		;
		new->n = n;
		new->next = tmp->next;
		tmp->next = new;

	return (new);
}
