#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Function that prints linked list safely
 * @head: pointer to the head of list
 * Return: number of nodes in a linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *decrease, *increase;
	size_t count = 0;

	if (!head)
		return (0);

	increase = head;
	while (increase)
	{
		decrease = increase;
		increase = increase->next;

		count++;
		printf("[%p] %d\n", (void *)decrease, decrease->n);

		if (decrease <= increase)
		{
			printf("-> [%p] %d\n", (void *)increase, increase->n);
			break;
		}
	}
	return (count);
}
