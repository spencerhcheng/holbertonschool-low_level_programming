#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning
 * of a listint_t list.
 * @head: double pointer to head node
 * @n: argument int n
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newt;
	newt = malloc(sizeof(listint_t));
	newt->n = n;
	newt->next = *head;
	*head = newt;
	return (newt);
}
