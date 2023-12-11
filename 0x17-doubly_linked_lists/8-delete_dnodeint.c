#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * index of a dlistint_t linked list.
 * @index: is the index of the node that should be deleted
 * @head: Double pointer to the head of doubly linked list
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;

	dlistint_t *tmp = *head;

	if (*head == NULL || dlistint_len(tmp) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	while (x < index)
	{
		tmp = tmp->next;
		x++;
	}

	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);

	return (1);
}

/**
 * dlistint_len - Function that returns  nr of nodes on list
 * @h: pointer to the linked list
 *
 * Return: The number of node provided
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t new_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		new_nodes++;
		h = h->next;
	}

	return (new_nodes);
}

