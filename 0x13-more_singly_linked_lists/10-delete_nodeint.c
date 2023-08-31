#include "lists.h"
#include <stdio.h>

/**
 *  delete_nodeint_at_index - function that deletes the node at index
 *  index of a listint_t linked list.
 *  @index: index of the node that should be deleted
 *  @head: The first node of the head in the linked list
 *
 *  Return: 1 if it succeeded, -1 if it failed
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int j;

	listint_t *new;
	listint_t *old;

	if (head == NULL || *head == NULL)
		return (-1);
	old = *head;
	new = *head;
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	j = 0;
	while (new->next != NULL)
	{
		if (j == index)
		{
			old->next = new->next;
			free(new);
			return (1);
		}
		old = new;
		new = new->next;
		j++;
	}
	if (j == index)
	{
		old->next = NULL;
		free(new);
		return (1);
	}
	return (-1);
}
