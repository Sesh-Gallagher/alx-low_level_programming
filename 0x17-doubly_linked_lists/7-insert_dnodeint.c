#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position in a linked list
 * @idx: index of the list where the new node should be added
 * @n: int to be inserted
 * @h: pointer to the linked list
 *
 * Return: address to the new node, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h;
	dlistint_t *new_node;
	unsigned int x;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !h)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));


	for (x = 0; head && x < idx; x++)
	{
		if (x == idx - 1)
		{
			if (head->next == NULL)
				return (add_dnodeint_end(h, n));
			new_node->next = head->next;
			new_node->prev = head;
			head->next->prev = new_node;
			head->next = new_node;
			return (new_node);
		}
		else
			head = head->next;
	}
	return (NULL);
}



