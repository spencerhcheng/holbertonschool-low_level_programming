#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order 
 * using the insertion sort algorithm. The list is printed every time elements are swapped.
 * @list: double pointer to doubly linked listint_t list.
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *current, *temp_f, *temp_b;

	temp_f = *list;
	temp_b = *list;
	prev_node = *list;
	current_node = prev_node->next;


	/* Traverse forward */
	while (*list != NULL)
	{
		/* Check if 2nd n is less than 1st n */
		if (prev_node->n > current_node)
		{
			/* Traverse backwards and swap every
			time 2nd n is less than 1st n */
			while (*list != NULL)
			{
				

}
