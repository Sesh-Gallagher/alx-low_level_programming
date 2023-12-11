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
	size_t lngth;

	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	lngth = dlistint_len(*head);
	if (index >= lngth)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (-1);
	}
	if (index == (lngth - 1))
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		free(tmp);
	}
	while (tmp)
	{
		if (x == index)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		x++;
	}
	return (-1);
}
/**
 * dlistint_len - function that returns number of elemets in
 * dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: 0 on success, -1 if failed.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;

	while (h != NULL)
	{
		++counter;
		h = h->next;
	}
	return (counter);
}


