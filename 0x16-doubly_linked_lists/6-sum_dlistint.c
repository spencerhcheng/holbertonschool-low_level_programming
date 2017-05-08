#include "lists.h"

/**
 * sum_dlistint - function that returns the sum
 * of all data (n) in a linked list
 * @head: pointer to struct node
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	size_t sum;

	sum = 0;
	tmp = head;

	if (head == NULL)
		return (0);

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
