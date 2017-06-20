#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order 
 * using the insertion sort algorithm. The list is printed every time elements are swapped.
 * @list: double pointer to doubly linked listint_t list.
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *prev_node, *current_node, *temp_f, *temp_b;

	temp_b = *list;
	temp_f = *list;
	prev_node = *list;
	current_node = prev_node->next;

	while (temp_f != NULL)
	{
		temp_b = temp_f;
		
		if (prev_node->n > current_node->n)
		{
			while (temp_b != NULL)
			{

				prev_node->next = current_node->next;
				current_node->prev = current_node;
				prev_node->prev = current_node;
				current_node->next = prev_node;
				*list = current_node;
				temp_b = temp_b->prev;
			}
	
		}
		else
		{
			prev_node = prev_node->next;
			current_node = current_node->next;
		}
	temp_f = temp_f->next;
	}
	print_list(*list);
}
