#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 *  of a dlistint_t linked list.
 *  @index: the index of the node, starting from 0
 *  @head: pointer to the head node of the list
 *
 *  Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (size == index)
			return (tmp);

		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
