#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a linked list
 * @h: head to the linked list and type of listint_t
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}

