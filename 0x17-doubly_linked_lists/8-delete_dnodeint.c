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
	unsigned int counter = 0;

	dlistint_t *tmp;

	if (!*head)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		if (*head)
			(*head)->prev = NULL;
		return (-1);
	}
	while (counter < index)
	{
		counter++;
		tmp = tmp->next;

		if (!tmp)
			return (-1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
