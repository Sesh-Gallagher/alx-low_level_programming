#include "hash_tables.h"

/**
 * hash_djb2 - The Hash function implementing the djb2 algorithm.
 * @str:  string to hash function or table.
 *
 * Return: The calculated hash function
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	int i;
	unsigned long int hash;

	hash = 5381;
	while ((i = *str++))
	{
		hash = ((hash << 5) + hash) + i;
	}
	return (hash);
}
