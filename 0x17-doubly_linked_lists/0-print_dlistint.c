#include <unistd.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - Function that prints the elements of a double linked list
 * @h: pointer to the double linked list
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++count;
		h = h->next;
	}

	return (count);
}
