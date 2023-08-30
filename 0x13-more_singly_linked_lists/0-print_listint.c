#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a linked list.
 * @h: The linked list head
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	int counter;

	counter = 0;
	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			counter++;
		}
	}

	return (counter);
}
