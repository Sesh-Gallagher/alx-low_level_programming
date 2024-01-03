#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: pointer to the hash table tht is to be deleted
 *
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int k = 0;

	hash_node_t *current_node = NULL;

	if (ht == NULL)
		return;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			while (ht->array[k])
			{
				current_node = ht->array[k];
				free(current_node->key);
				free(current_node->value);
				ht->array[k] = ht->array[k]->next;
				free(current_node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
