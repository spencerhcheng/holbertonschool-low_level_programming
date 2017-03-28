#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - a function that returns
 * the sum of all the data (n) of a
 * listint_t linked list
 * @head: pointer to head node
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	size_t sum;
	listint_t *tmp;
	size_t n;

	sum = 0;

	tmp = head;

	if (head == NULL)
	{
		return (0);
	}

	while (tmp != NULL)
	{
		n = tmp->n;
		sum += n;
		tmp = tmp->next;
	}

	return (sum);
}
