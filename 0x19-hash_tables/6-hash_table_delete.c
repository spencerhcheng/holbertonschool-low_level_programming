#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: pointer to hash_table_t struct
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			while (ht->array[i])
			{
				temp = ht->array[i];
				free(temp->value);
				free(temp->key);
				ht->array[i] = ht->array[i]->next;
				free(temp);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
