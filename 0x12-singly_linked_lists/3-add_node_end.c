#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - func adds a new node at the end of a list_t **h
 * @head: doubler pointer to list_t
 * @str: String to add new node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add = *head;
	list_t *q;
	unsigned int len = 0;

	while (str[len])
	len++;

	q = malloc(sizeof(list_t));
	if (!q)
	return (NULL);

	q->str = strdup(str);
	q->len = len;
	q->next = NULL;

	if (*head == NULL)
	{
	*head = q;
	return (q);
	}

	while (add->next)
	add = add->next;

	add->next = q;

	return (q);
}
