#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order 
 * using the insertion sort algorithm. The list is printed every time elements are swapped.
 * @list: double pointer to doubly linked listint_t list.
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *prev_node, *current_node, *temp_prev, *temp_current, *first_node;

	prev_node = *list;
	current_node = prev_node->next;
	temp_prev = prev_node;
	temp_current = current_node;
	short int swap = 0;
	first_node = prev_node;

	while (current_node->next != NULL)
	{
		swap = 0;
		if (prev_node->n > current_node->n)
		{
			swap = 1;
			temp_prev = prev_node;
			temp_current = current_node;
			while (prev_node->prev != NULL)
			{
			printf("Test: ");
			print_list(*list);
			sleep(1);
				prev_node->next = current_node->next;
				current_node->prev = current_node;
				prev_node->prev = current_node;
				current_node->next = prev_node;
				*list = current_node;
				prev_node = prev_node->prev;
				current_node = current_node->prev;
			}
		}
	if (swap == 1)
	{
		prev_node = temp_prev;
		current_node = temp_current;
	}
		
	current_node = current_node->next;
	prev_node = prev_node->next;
	}
	print_list(*list);
}
