#include <unistd.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of
 *elements in a dlistint_t list
 * @h: pointer to head of doubly linked list
 *
 * Return: 0 on success (always).
 */

size_t dlistint_len(const dlistint_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
