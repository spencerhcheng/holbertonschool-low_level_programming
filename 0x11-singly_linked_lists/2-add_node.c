#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - A function that adds a new node
 * at the beginning of a list_t list
 * @head: double pointer to head struct
 * @str: pointer to a string
 * Return: address of the new element,
 * or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;

return (new);
}
