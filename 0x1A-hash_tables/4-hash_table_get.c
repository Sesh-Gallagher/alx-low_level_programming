#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: is the key value we are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int _index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	_index = key_index((const unsigned char *)key, ht->size);
	if (_index >= ht->size)
		return (NULL);

	new_node = ht->array[_index];
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;

	return ((new_node == NULL) ? NULL : new_node->value);
}
