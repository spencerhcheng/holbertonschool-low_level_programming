#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a linked list
 * @head: pointer to struct node
 * @n: integer stored in struct node
 * Return: address of new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
