#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;
	
	head = NULL;

	head = malloc(sizeof(hash_table_t));

	if (head == NULL)
		return (NULL);

	head->size = size;
	head->array = malloc(sizeof(hash_node_t) * size);

	if (head->array == NULL)
		return (NULL);

	return (head);
} 
