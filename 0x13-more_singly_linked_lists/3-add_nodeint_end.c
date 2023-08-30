#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: pointer to the head of the linked list
 * @n: data to be inserted as a new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = add;

	return (add);
}
