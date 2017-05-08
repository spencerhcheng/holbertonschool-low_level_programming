#include "lists.h"

/**
 * add_dnodeint_end - function that adds a
 * ndoe to the end of a linked list
 * @head: pointer to struct node
 * @n: integer to store in struct node
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *tmp;

	tmp = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			tmp->next = newnode;
			return (newnode);
		}
		tmp = tmp->next;
	}
	return (newnode);
}
