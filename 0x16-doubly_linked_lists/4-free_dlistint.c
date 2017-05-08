#include "lists.h"

/**
 * free_dlistint - function that frees a linked list
 * @head: pointer to struct node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
