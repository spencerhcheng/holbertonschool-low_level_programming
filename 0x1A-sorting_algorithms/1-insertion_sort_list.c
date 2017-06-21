#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly
 * linked list of integers in ascending order
 * using the insertion sort algorithm. The list
 * is printed every time elements are swapped.
 * @list: double pointer to doubly linked listint_t list.
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *prev_node, *current_node;
	short int swap_flag = 0;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	prev_node = *list;
	if (prev_node->next != NULL)
		current_node = prev_node->next;
	while (current_node != NULL)
	{
		if (swap_flag == 1)
		{
			prev_node = *list;
			current_node = prev_node->next;
		}
		swap_flag = 0;
		while ((current_node->prev != NULL) &&
		       (prev_node->n > current_node->n))
		{
			swap_flag = 1;
			if (prev_node->prev != NULL)
				prev_node->prev->next = current_node;
				prev_node->next = current_node->next;
				current_node->prev = prev_node->prev;
			if (current_node->next != NULL)
				current_node->next->prev = prev_node;
				prev_node->prev = current_node;
				current_node->next = prev_node;
			if (current_node->prev == NULL)
			{
				*list = current_node;
				print_list(*list);
				break;
			}
			print_list(*list);
			prev_node = current_node->prev;
		}
		current_node = current_node->next;
		prev_node = prev_node->next;
	}
}
