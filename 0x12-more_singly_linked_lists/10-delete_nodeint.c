#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Function that
 * deletes the node at index index of a listint_t linked list
 * @head: double pointer to head
 * @index: index of node that should be deleted.
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmpNext;
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
	tmpNext = tmpNext->next;
	free(tmpNext);
	return (1);
}
