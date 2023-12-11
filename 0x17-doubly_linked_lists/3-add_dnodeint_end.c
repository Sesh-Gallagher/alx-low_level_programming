#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 *
 * @head: pointer to the head of the end of the list
 * @n: The integer node to be pal
 *
 * Description - Function that add a new node to the end of
 * the dlistint_t list
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;

	}
	else
	{
		*head = new_node;
	}

	new_node->prev = h;

	return (new_node);
}

