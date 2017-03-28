#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to head
 * @index: index of the node
 * Return: return nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	size_t i;

	tmp = head;

	for (i = 0; head != NULL ; head = head->next, i++)
		;

	if (index > i)
		return (NULL);

	for (i = 0; i < index; tmp = tmp->next, i++)
		;

	return (tmp);
}
