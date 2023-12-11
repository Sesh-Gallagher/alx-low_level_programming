#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * add_dnodeint -  function that adds a node at the beginning
 * of a dlistint_t list.
 * @n: The integer value of a node
 * @head: pointer to the head of the link list
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	h = *head;
	new_node->n = n;
	new_node->prev = NULL;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_node->next = h;

	if (h != NULL)
		h->prev = new_node;

	*head = new_node;

	return (new_node);
}
