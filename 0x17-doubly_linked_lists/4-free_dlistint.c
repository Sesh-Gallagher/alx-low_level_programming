#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * free_dlistint -  a function that frees a dlistint_t list
 * @head: pointer to the head of the linked list
 *
 * Return: NULL
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new = head;

	while (new != NULL)
	{
		dlistint_t *next = new->next;

		free(new);

		new = next;
	}
}
