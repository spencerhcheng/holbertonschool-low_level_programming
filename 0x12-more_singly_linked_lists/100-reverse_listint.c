#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: double ptr to head
 * Return: pointer to first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	current = *head;
	prev = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
		*head = prev;

	return (*head);
}
