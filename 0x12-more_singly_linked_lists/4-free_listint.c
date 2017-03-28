#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees listint_t list
 * @head: pointer to head struct
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = temp->next;
	}
}
