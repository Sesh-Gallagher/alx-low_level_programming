#include "lists.h"
#include <stdlib.h>

/**
 *list_len - returns the number of elements in a list
 *@h: pointer to the list
 *
 * Return: number of elements 
 *
 */

size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
