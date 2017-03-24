#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list.
 * @head: double pointer to head
 * @str: pointer to string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count;
	list_t *new;
	list_t *temp;

	count = 0;
	temp = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}
return (new);
}
