#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order 
 * using the insertion sort algorithm. The list is printed every time elements are swapped.
 * @list: double pointer to doubly linked listint_t list.
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *prev_node, *current_node, *temp_prev, *temp_current;

	prev_node = *list;
	current_node = prev_node->next;
	temp_prev = prev_node;
	temp_current = current_node;

	while (current_node != NULL)
	{
		prev_node = temp_prev;
		current_node = temp_current;
		/*
		if (prev_node->n > current_node->n)
		{
			temp_prev = prev_node;
			temp_current = current_node;
			while (prev_node != NULL)
			{
				prev_node->next = current_node->next;
				current_node->prev = current_node;
				prev_node->prev = current_node;
				current_node->next = prev_node;
				*list = current_node;
				prev_node = prev_node->prev;
			}
		}
		*/
	
	print_list(*list);
	current_node = current_node->next;
	prev_node = prev_node->next;
	}
	print_list(*list);
}
