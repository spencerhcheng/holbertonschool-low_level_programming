#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that
 * deletes the node at index index of a linked list
 * @head: double pointer to head
 * @index: index of node that should be deleted.
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmpNext;
	size_t i;

	tmp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL && i < index - 1; i++)
	{
		tmp = tmp->next;
	}

	tmpNext = tmp->next;
	tmp->next = tmpNext->next;
	free(tmpNext);
	return (1);
}
