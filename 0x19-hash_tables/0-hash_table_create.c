#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * where size is the size of the array.
 * @size: size of the array in the hash table
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;
	unsigned long int i = 0;

	head = NULL;
	head = malloc(sizeof(hash_table_t));

	if (head == NULL)
		return (NULL);

	head->size = size;
	head->array = malloc(sizeof(hash_node_t *) * size);

	if (head->array == NULL)
		return (NULL);

	while (i < size)
	{
		head->array[i] = NULL;
		i++;
	}

	return (head);
}
