#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: The linked list head
 *
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	int counter;

	counter = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			counter++;
		}
	}

	return (counter);
}
