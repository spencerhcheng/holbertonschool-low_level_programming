#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list
 * @head: pointer to struct node
 * @index: nth node
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	size_t i, j;

	i = 0;
	j = 0;
	tmp = head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (index >= i)
		return (NULL);

	while (j < index)
	{
		head = head->next;
		j++;
	}
		return (head);
}
