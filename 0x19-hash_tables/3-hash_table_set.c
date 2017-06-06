#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: pointer to hash_table_t struct
 * @key: key string
 * @value: value string
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *new_node;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	return (1);
}
