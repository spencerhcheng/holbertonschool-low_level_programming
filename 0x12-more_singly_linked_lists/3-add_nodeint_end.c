#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds
 * a new node at the end of a listint_t list
 * @head: double pointer to head node
 * @n: arguement int n
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *new;
	
	tmp = *head;

	new = malloc(sizeof(listint_t));
	
	if (new == NULL)
	{
		return (NULL);
	}
	
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	return (new);
}
