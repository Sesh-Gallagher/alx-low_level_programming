#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table you should print the key/value
 * in the order that they appear in the array of hash table
 * Order: array, list
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int j = 0;

	unsigned long int k = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (k = j; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			node = ht->array[k];
			while (node)
			{
				printf("%s'%s': '%s'", j == 0 ? "" : ", ",
					   node->key, node->value), j++;
				node = node->next;
			}
		}
	}
	printf("}\n");
}
