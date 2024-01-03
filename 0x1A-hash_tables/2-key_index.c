#include "hash_tables.h"

/**
 * key_index - function that gets the index at which a key/value
 *      pair should be stored in array of a hash table.
 * @key: is the key.
 * @size: size of the array of the hash table.
 * Description: function that uses djb2 algorithm.
 *
 * Return: The index where the key value pair should be stored
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
