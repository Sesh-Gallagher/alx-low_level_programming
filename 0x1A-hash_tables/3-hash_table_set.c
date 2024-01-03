#include "hash_tables.h"

/**
 * hash_table_set - function that Add or update
 * an element in a hash table.
 * @ht: is the  pointer to the hash table.
 * @key: key to be added which cannot be an empty string.
 * @value: The value associated with key value and must be
 * duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision,
 * add the new node at the beginning of the list
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int _index;
	unsigned long int i;

	hash_node_t *new_ht;

	char *valu_cpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valu_cpy = strdup(value);
	if (valu_cpy == NULL)
		return (0);

	_index = key_index((const unsigned char *)key, ht->size);
	for (i = _index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valu_cpy;
			return (1);
		}
	}
	new_ht = malloc(sizeof(hash_node_t));
	if (new_ht == NULL)
	{
		free(valu_cpy);
		return (0);
	}
	new_ht->key = strdup(key);
	if (new_ht->key == NULL)
	{
		free(new_ht);
		return (0);
	}
	new_ht->value = valu_cpy;
	new_ht->next = ht->array[_index];
	ht->array[_index] = new_ht;
	return (1);
}
