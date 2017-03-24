#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - free's list_t
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
	}
}
