#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - A function that frees
 * a l listint_t list.
 * @head: double pointer to head node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;

	while (head != NULL)
	{
		*head = tmp->next;
		free(tmp);
	}

	*head = NULL;
}
