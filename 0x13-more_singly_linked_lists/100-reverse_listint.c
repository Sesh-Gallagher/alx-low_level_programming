#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: Pointer to the node that is first
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i, *j;

	i = NULL;
	j = NULL;

	while (*head != NULL)
	{

		j = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = j;
	}

	*head = i;

	return (*head);
}
