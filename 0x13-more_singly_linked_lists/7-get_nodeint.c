#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list
 * @index: is the index of the node, starting at 0
 * @head: head of the linked list
 * Return: if the node does not exist, return NULL
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}

