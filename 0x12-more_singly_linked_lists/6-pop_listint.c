#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head
 * node of a listint_t linked list, and returns
 * the head node's data (n).
 * @head: double pointer to head
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	if (*head == NULL)
		return (0);

	n = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (n);
}
