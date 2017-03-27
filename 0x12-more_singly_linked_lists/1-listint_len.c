#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to head node
 * Return: int size_t - number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
