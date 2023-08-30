#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a linked list.
 * @h: The linked list type to print
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	int counter;

	counter = 0;

		while (h)
		{
			printf("%d\n", h->n);
			counter++;
			h = h->next;
		}

		return (counter);
}
