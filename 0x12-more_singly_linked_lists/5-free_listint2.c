#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - A function that frees
 * a listint_t list.
 * @head: double pointer to head node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{

	listint_t *tmp;

	tmp = *head;

	while (tmp != NULL)
	{
		free(tmp);
		tmp = tmp->next;
		(*head) = tmp;
	}

	*head = NULL;
}
